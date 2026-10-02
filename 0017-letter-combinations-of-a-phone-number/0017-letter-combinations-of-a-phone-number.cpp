class Solution {
public:
    void sol(string d,int i,string a,vector<string>& ans){
        if(i==d.size()){
            ans.push_back(a);
            return;
        }
        if(d[i]=='7'){
            a+=static_cast<char>((d[i]-'2')*3+97);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+98);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+99);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+100);
            sol(d,i+1,a,ans);
            a.pop_back();
        }
        else if(d[i]=='9'){
            a+=static_cast<char>((d[i]-'2')*3+98);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+99);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+100);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+101);
            sol(d,i+1,a,ans);
            a.pop_back();
        }
        else if(d[i]=='8'){
            a+=static_cast<char>((d[i]-'2')*3+98);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+99);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+100);
            sol(d,i+1,a,ans);
            a.pop_back();
        }
        else{
            a+=static_cast<char>((d[i]-'2')*3+97);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+98);
            sol(d,i+1,a,ans);
            a.pop_back();
            a+=static_cast<char>((d[i]-'2')*3+99);
            sol(d,i+1,a,ans);
            a.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ans;
        sol(digits,0,"",ans);
        return ans;
    }
};