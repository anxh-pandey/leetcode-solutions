class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int t=0,f=0;
        queue<int> q;
        queue<int> lq;
        int l=0,r=0;
        int c=0;
        while(r<answerKey.size()){
            if(k==0){
                if(answerKey[r]=='F'){
                    l=r;
                }
            }
            else if(answerKey[r]=='F' && c<k){
                answerKey[r]='T';
                q.push(r);
                c+=1;
            }
            else if(c>=k){
                if(answerKey[r]=='F'){
                    l=q.front()+1;
                    answerKey[q.front()]='F';
                    q.pop();
                    answerKey[r]='T';
                    q.push(r);
            }
            }
            r+=1;
            t=max(t,r-l);
        }
        while(!q.empty()){
            answerKey[q.front()]='F';
            q.pop();
        }
        l=0,r=0,c=0;
        while(r<answerKey.size()){
            if(k==0){
                if(answerKey[r]=='T'){
                    l=r;
                }
            }
            else if(answerKey[r]=='T' && c<k){
                answerKey[r]='F';
                lq.push(r);
                c+=1;
            }
            else if(c>=k){
                if(answerKey[r]=='T'){
                    l=lq.front()+1;
                    answerKey[lq.front()]='T';
                    lq.pop();
                    answerKey[r]='F';
                    lq.push(r);
                }
            }
            r+=1;
            f=max(f,r-l);
        }
        return (t>f)?t:f;
    }
};