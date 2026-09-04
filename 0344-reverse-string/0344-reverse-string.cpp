class Solution {
public:
    vector<char> rev(vector<char>& s,int i,int j){
        if(i>=j) return s;
        swap(s[i],s[j]);
        return rev(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
    s=rev(s,0,s.size()-1);
    }
};