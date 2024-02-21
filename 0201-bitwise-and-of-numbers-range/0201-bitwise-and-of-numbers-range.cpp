class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shift = 0;
        // Find the common prefix of binary representations
        while (left < right) {
            left >>= 1;
            right >>= 1;
            shift++;
        }
        // Shift back to get the actual bitwise AND result
        return left << shift;
    }
};
