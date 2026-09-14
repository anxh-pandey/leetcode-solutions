class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        if(b[0]>=a[2]) return false;
        if(b[1]>=a[3]) return false;
        if(b[2]<=a[0]) return false;
        if(b[3]<=a[1]) return false;
        return true;
    }
};