class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int , int >map;
        for(int x:nums){
            map[x]++;
        }
        for(int x:nums){
            if(map[x]==1 && x%2==0) return x;
        }
        return -1;
    }
};