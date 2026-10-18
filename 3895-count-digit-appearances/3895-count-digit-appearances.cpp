class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int cnt =0;
        for(int x:nums){
            while(x>0){
            if(x%10==digit) cnt++;
            x/=10;
        }
        }
        return cnt;
    }
};