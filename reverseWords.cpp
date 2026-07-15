class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<string> result;
        int k = s.size();
        string word;
        for(int i=0;i<k;i++){
            if(s[i] != '.'){
                word+=s[i];
            }
            else if(!word.empty()){
                result.push_back(word);
                word = "";
            }
        }
        
        if(!word.empty()){
            result.push_back(word);
        }
        
        reverse(result.begin(),result.end());
        
        string results = "";
        for(int i=0;i<result.size();i++){
            if(!results.empty() && i<result.size()){
                results +='.';
                results += result[i];
            }
            else results += result[i];
            
        }
        return results;
    }
};
