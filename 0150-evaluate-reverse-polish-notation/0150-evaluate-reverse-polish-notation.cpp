class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        //Approach :
        //If itr points an operator, perform opn on top 2 stack elements
        //Else, Keep pushing the int value in stack
        stack<int> st;
        int var, a, b, sym;
        for(int i=0; i<tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*"){
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                
                if(tokens[i] == "+") var = a+b;
                else if(tokens[i] == "-") var = a-b;
                else if(tokens[i] == "*") var = a*b;
                else var = a/b;
                st.push(var);
            }
            
            else{
                sym = stoi(tokens[i]);
                st.push(sym);
            }
        }
        return st.top();
    }
};