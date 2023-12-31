class Solution {
  int singleNumber(List<int> nums) {
    int sign=nums[0];
    for(int i=1;i<nums.length;i++)
        sign =sign ^ nums[i];
    return sign;
  }
}