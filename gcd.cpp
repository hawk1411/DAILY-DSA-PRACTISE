class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        while(a>0 && b>0){
        if(a>b){
            a = a%b;
        }
        else b = b%a;
        
        if(a==0){
            return b;
        }
        if(b==0){
            return a;
        }}
        // int n = 0;
        // int gcd = 0;
        // if(a<b){
        //     n = a;
            
        // }
        // else n = b;
        
        // for(int i=n;i>=1;i--){
        //     if(a%i ==0 && b%i==0){
        //         // gcd = max(gcd,i);
        //         return i;
        //     }
            
        // }
        // return gcd;
        
    }
};
