class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;
        while(l<h){
            int count=0;
            int curr=(l+h)/2;
            for(int num:nums){
                if(num<=curr)count++;
            }
            if(curr<count){
                h=curr;
            }else{
                l=curr+1;
            }
        }
return l;
    }
    
};