class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int left=0;
        int right=(n*m)-1;
        int index,element;
        while(left<=right){
            index=(left+right)/2;
            element=matrix[index/n][index%n];
            if(target==element){
                return true;
            }else if(target<element){
                right=index-1;
            }else{
                left=index+1;
            }
        }
        return false;
    }
};