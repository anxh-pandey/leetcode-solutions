class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> mp;
        int n=s.size();
        if(n<=1) return n;
        for(auto x:s){
            mp[x]++;
        }
        int a=0;
        int b=0;
        int c=0;
        for(auto x:mp){
            if(x.second%2!=0){
                    a+=x.second;
                    c+=1;
            }
            else{
                b+=x.second;
            }
        }
        if(c!=0){
            a=a-c+1;
        }
        return a+b;
    }
};