class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        if(n<0){
            n = n*-1;
        }
        string n1 = to_string(n);
        string n2 = n1;
        reverse(n2.begin(),n2.end());
        return n1 == n2;
    }
};
