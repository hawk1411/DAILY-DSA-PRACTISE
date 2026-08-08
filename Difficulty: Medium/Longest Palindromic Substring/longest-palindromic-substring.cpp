class Solution {
  public:
    string getLongestPal(string &s) {
        // code here
        int left =0;
        int right =0;
        int len =0;
        int start=0;
        for(int i=0;i<s.size();i++){
            
            //oddd
            left = i;
            right =i;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                
                if(right-left+1>len){
                    start = left;
                    len = right-left+1;
                }
                
                
                
                left--;
                right++;
            }
            left = i;
            right =i+1;
            while(left>=0 && right<s.size() && s[left]==s[right]){
                
                if(right-left+1>len){
                    start = left;
                    len = right-left+1;
                }
                
                
                
                left--;
                right++;
            }
            
        }
        
        return s.substr(start,len);
    }
};
