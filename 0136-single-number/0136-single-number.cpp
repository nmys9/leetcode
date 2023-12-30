class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size=nums.size();
        int sum=0;
        unordered_set<int> set;
        for(int i=0;i<size;i++){
            if(set.count(nums[i])){
                sum-=nums[i];
            }else{ 
                sum+=nums[i];
                set.insert(nums[i]);

            }}
return sum;
    }
};