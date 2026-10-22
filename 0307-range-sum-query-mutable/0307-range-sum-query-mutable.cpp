class NumArray {
public:
    vector<int> seg;
    NumArray(vector<int>& nums) {
        seg.resize(4*nums.size());
        build(0,0,nums.size()-1,nums);
    }
    void build(int idx,int l,int h,vector<int>& nums){
        if(l==h){
            seg[idx]=nums[l];
            return;
        }
        int mid=(l+h)/2;
        build(idx*2+1,l,mid,nums);
        build(idx*2+2,mid+1,h,nums);
        seg[idx]=seg[idx*2+1]+seg[idx*2+2];
    }
    
    void update(int index, int val) {
        up(0,0,seg.size()/4-1,index,val);
    }
    void up(int idx,int l,int h,int pos,int val){
        if(l==h){
            seg[idx]=val;
            return;
        }
        int mid=(l+h)/2;
        if(pos<=mid){
            up(idx*2+1,l,mid,pos,val);
        }
        else{
            up(idx*2+2,mid+1,h,pos,val);
        }
        seg[idx]=seg[idx*2+1]+seg[idx*2+2];
    }
    
    int sumRange(int left, int right) {
        return query(0,0,seg.size()/4-1,left,right);
    }
    int query(int idx,int l,int h,int left,int right){
        if(l>=left && h<=right){
            return seg[idx];
        }
        if(l>right || h<left){
            return 0;
        }
        int mid=(l+h)/2;
        int le=query(idx*2+1,l,mid,left,right);
        int ri=query(idx*2+2,mid+1,h,left,right);
        return le + ri;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */