class Solution {
  public:
    int maxDepth(string &s) {
        // code here
        int level = 0;
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') level++;
            else if(s[i] == ')') level--;
            ans = max(ans,level);
        }
        return ans;
    }
};