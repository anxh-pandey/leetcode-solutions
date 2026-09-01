class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int> ans;
        int c=0;
        int a=n-1;
        if(digits[n-1]==9) c++;
        if(c!=0){
            for(int i=n-1;i>=0;i--){
                if(digits[i]!=9){
                    a=i;
                    break;
                }
                else if(i==0){
                    a=0;
                }
            }
            if(a==0 && digits[0]==9){
                ans.push_back(1);
                for(int i=0;i<n;i++){
                    ans.push_back(0);
                }
                return ans;
            }
            else{
                for(int i=a;i<n;i++){
                    if(i==a){
                        digits[i]=digits[i]+1;
                    }
                    else{
                        digits[i]=0;
                    }
                }
            }
        }
        else{
            digits[n-1]=digits[n-1]+1;
        }
        return digits;
    }
};