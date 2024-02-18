class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        if(nums.size()==1)return nums[0];
        if(nums[0]<nums[right]){
            return nums[0];
        }
        while(left<=right){
            int mid=(left+right)/2;

            if(nums[mid]>nums[mid+1])
                return nums[mid+1];
            if(nums[mid]<nums[mid-1]) 
                return nums[mid];

            if(nums[0]<nums[mid]){
                left=mid+1;
            }else{
                right=mid-1;
            }  
        }
        return 0;
    }
};