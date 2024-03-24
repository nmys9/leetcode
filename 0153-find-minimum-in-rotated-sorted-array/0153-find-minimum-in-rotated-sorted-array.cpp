class Solution {
public:
    int findMin(vector<int>& nums) {
        int size=nums.size();
        int left=0;
        int right=size-1;
        if(left==right)return nums[0];
        if(nums[left]<nums[right])return nums[0];
        while(left<=right){
            int mid=(left+right)/2;
            if(nums[mid]>nums[mid+1])return nums[mid+1];
            if(nums[mid]<nums[mid-1])return nums[mid];
            
            if(nums[mid]>nums[0])
                left=mid+1;
                
            else
                right=mid-1;
        }
        return 0;
    }
};