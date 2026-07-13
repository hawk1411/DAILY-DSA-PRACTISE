class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int temp = n;
        int sum = 0;
        string s = to_string(n);//or log10 method or try the n/10
        int k = s.length();
        
        while(n>0){
            int l = n%10;
            sum =sum+pow(l,k);
            n = n/10;
            
        }
        return sum==temp;
        
    }
};
