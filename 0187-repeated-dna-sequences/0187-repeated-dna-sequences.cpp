class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> st;
        unordered_set<string> us;
        unordered_set<string> uus;
        string a;
        int l=0,r=0;
        while(r<s.size()){
            a+=s[r];
            if(r-l+1==10){
                if(us.contains(a) && !uus.contains(a)){
                    st.push_back(a);
                    uus.insert(a);
                }
                else{
                    us.insert(a);
                }
            }
            if(r-l+1==10){
                a.erase(0,1);
                l+=1;
            }
            r+=1;
        }
        return st;
    }
};