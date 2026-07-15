class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.size()==1) return arr[0];
        sort(arr.begin(),arr.end());
        
        string s1 = arr[0];
        string s2 = arr[arr.size()-1];
        int n = min(s1.size(),s2.size());
        for(int i=0;i<=n;i++){
            if(s1[i]!=s2[i]){
                return s1.substr(0,i);
            }
        }
        
    }
};
