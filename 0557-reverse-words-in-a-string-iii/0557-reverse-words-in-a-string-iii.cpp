class Solution {
public:
    string reverseWords(string s) {
        
        int i=0, j=0;
        
        while(j<s.size()){
            if(s[j]==' '){
                reverse(s.begin()+i, s.begin()+j);
                i=j+1;
                j=i;
            }
            else j++;
        }
        reverse(s.begin()+i, s.begin()+j);
        return s;
//         //Initialize 2 ptrs -> left & right
//         int l = 0, r = 0;
        
//         while(l < s.size())
//         {
//             while(r < s.size() && s[r] != ' ')  // Point r at ' ' and reverse
//             {
//                 r++;
//             }
            
//             reverse(s.begin()+l, s.begin()+r);  // reverse method
            
//             l = r+1;
//             r = l;
//         }
        
//         return s;
        

        
        
//         //Use Stack
//         stack<int> st;
        
//         string str = "";
//         for(int i=0; i<s.size(); i++)
//         {
//             if(s[i] == ' ')
//             {
//                 while(!st.empty())
//                 {
//                     str.push_back(st.top());
//                     st.pop();
//                 }
                
//                 str.push_back(' ');
                
//             }
            
//             else
//                 st.push(s[i]);
//         }
        
//         while(!st.empty())
//         {
//             str.push_back(st.top());
//             st.pop();
//         }
        
//         return str;
    }
};