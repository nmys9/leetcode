class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        mp[nums[0]]=0;
        for(int i=1;i<nums.size();i++){
            int c=target-nums[i];
            if(mp.find(c)!=mp.end())return {mp[c],i};
            mp[nums[i]]=i;
        }
    }
};