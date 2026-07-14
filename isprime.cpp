class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int cnt = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                cnt++;//this is a function which will be collecting factors and nothing else see how in the end we are finding if its more than 2 factor to confirm its a prime                          he 
                if(n/i != i){
                    cnt++;
                }
            }
        }
        if(cnt==2) return true;
        else return false;
    }
};
