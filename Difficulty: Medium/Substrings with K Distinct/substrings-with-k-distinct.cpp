class Solution {
  public:
  
  int atmostk(string s,int k){
      
      
      int left =0;
    //   int right = 0;
    int distinct = 0;
    int res =0;
    //   unordered_map<char,int> freq; for upper case
    int freq[26] = {0};
    
      for(int right=0;right<s.size();right++){
        //   freq[s[right]]++;
        int ind = s[right] - 'a';
        if(freq[ind]==0){
            distinct++;
        }
        freq[ind]++;
      
      
    //   while(freq.size()>k){
    //       freq[s[left]]--;
    //       if(freq[s[left]]==0){
    //           freq.erase(s[left]);
    //       }
    //       left++;
    //   }
    
    while(distinct>k){
        int leftind = s[left] -'a' ;
        freq[leftind]--;
        if(freq[leftind]==0){
            distinct--;
        }
        left++;
    }
      
      res += right - left + 1;
      }
      return res;
  }
  
  
    int countSubstr(string& s, int k) {
        // code here
        return atmostk(s,k) - atmostk(s,k-1);
    }
};