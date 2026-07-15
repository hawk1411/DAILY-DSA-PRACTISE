class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // code here
        string final = s1+s1;
        if(final.find(s2)!=string::npos){
            return true;
        }
        return false;
    }
};
