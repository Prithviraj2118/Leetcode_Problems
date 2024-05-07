class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0, i=0;
        while(j<word.size() && word[j]!=ch) j++;
        if(j==word.size()) return word;
        while(i<j){
            swap(word[i], word[j]);
            i++, j--;
        }
        return word;
    }
};