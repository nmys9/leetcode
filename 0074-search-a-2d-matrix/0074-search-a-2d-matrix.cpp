class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int size=n*m;
        int left=0, right=size-1;
        while(left<=right){
            int mid=(left+right)/2;
            int r=mid/n, c=mid%n;
            if(matrix[r][c]==target)
                return true;
            else if(matrix[r][c]<target)
                left=mid+1;
            else
                right=mid-1; 
        }
        return false;
    }
};