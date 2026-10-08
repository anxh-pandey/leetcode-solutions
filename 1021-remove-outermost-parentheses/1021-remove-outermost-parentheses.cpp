class Solution {
public:
    string removeOuterParentheses(string s) {
        int l=0,r=0;
        stack<char> st;
        string ss;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(')');
                if(l==0){
                    l+=1;
                    continue;
                }
                l+=1;
            }
            else{
                st.pop();
                r+=1;
            }
            if(l-r==0){
                l=0;
                r=0;
                continue;
            }
            else{
                ss.push_back(s[i]);
            }
        }
        return ss;
    }
};