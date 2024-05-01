class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j=0;
        while(j<word.size() && word[j]!=ch){
            j++;
        }
        int i=0;
        if(j==word.size()) return word;
        while(i<j){
            swap(word[i], word[j]);
            i++, j--;
        }
        return word;
    }
};