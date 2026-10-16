class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        if(k==0 && nums.size()==0) return 0;
        int n= nums.size();
        vector<int>v(n);
        vector<int>r(n);
        v[0]=nums[0];
        r[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            v[i] = max(nums[i],v[i-1]);
        }
        for(int i=n-2;i>=0;i--){
            r[i]=min(r[i+1],nums[i]);
        
        }
        for(int i=0;i<n;i++){
            if(v[i]-r[i]<=k){
            return i;
            }
        }
           return -1;
    }
};