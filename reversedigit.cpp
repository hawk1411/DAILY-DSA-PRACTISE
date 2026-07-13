class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int rev_dig = 0;
        while(n>0){
           
            int digit = n%10;
            rev_dig = (int)(rev_dig*10)+digit;
            n = n/10;
        }
        return rev_dig;
        
    }
};
