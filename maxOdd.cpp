class Solution {
  public:
    string maxOdd(string s) {
        // code here
        int k = s.size();
        for(int i=k-1;i>=0;i--){
            int z = s[i]-'0';
            if(z%2==1){
                return s.substr(0,i+1);
            }
        }
        return "";
    }
};
