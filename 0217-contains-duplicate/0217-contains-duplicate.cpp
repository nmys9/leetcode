class Solution {
public:
  
    bool containsDuplicate(vector<int>& nums) {
        vector<int> freq(1e9,0);
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        for(int i=0;i<freq.size();i++)
            if(freq[i]>=2)
                return true;
        return false;

    }
};