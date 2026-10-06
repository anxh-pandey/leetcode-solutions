class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(')');
            }
            else{
                if(!st.empty() && st.top()==')'){
                    st.pop();
                    continue;
                }
                else{
                    ans+=1;
                }
            }
        }
        ans+=st.size();
        return ans;
    }
};