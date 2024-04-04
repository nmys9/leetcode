class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n=right+1;
        vector<bool> isPrime(n,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=n;j+=i)
                    isPrime[j]=false;
            }
        }
        vector<int> primes;
        for(int i=left;i<=right;i++){
            if(isPrime[i])primes.push_back(i);
        }

        if(primes.size()<2){
            return {-1,-1};
        }
        int min=INT_MAX;
        int num1=-1,num2=-1;
        for(int i=1;i<primes.size();i++){
            int diff=primes[i]-primes[i-1];
            if(diff<min){
                min=diff;
                num1=primes[i-1];
                num2=primes[i];
            }


        }
    return {num1,num2};
    }
};