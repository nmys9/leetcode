class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
                return nums[i];
        }
        // int l=1;
        // int h=nums.size()-1;
        // while(l<h){
        //     int count=0;
        //     int curr=(l+h)/2;
        //     for(int num:nums){
        //         if(num<=curr)count++;
        //     }
        //     if(curr<count){
        //         h=curr;
        //     }else{
        //         l=curr+1;
        //     }
        // }
        // return l;
        return 0;
    }
    
};