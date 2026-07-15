class Solution {
  public:
    string removeOuter(string& s) {
        // code here
        string result = "";
        int level = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == '('){
                level++;
                if(level>1){
                result = result + '(';
                }
                
            }
            
            else if(s[i]==')'){
            level--;
            if(level>0){
            result = result + ')';
        }
            }
        
            
        }
            
     return result; 
    }
};
