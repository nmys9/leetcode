class Solution {
public:
    int reverse(int x) {
       long long rev=0;
       while(x!=0){
           int digit=x%10;
           rev=rev*10+digit;
           if(INT_MAX<rev || rev<INT_MIN) return 0;
           x/=10;
       } 
       
      
       return rev;
    }
};