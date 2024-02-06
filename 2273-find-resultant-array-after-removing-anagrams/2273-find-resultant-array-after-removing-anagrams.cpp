class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> temp=words;
        int j=0;
        cout << words.size() << endl;
        sort(words[0].begin(), words[0].end());
        for(int i=1; i<words.size(); i++){
            sort(words[i].begin(), words[i].end());
            if(words[i]==words[i-1]) temp[i]="/";
            cout << i << " ";
        }
        words.clear();
        for(auto x:temp){
            if(x!="/") words.push_back(x);
        }
        return words;
    }
};