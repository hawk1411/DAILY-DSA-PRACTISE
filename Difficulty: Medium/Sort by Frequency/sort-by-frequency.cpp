class Solution {
  
        // code here
private:
       static bool comparison(pair<int,char> p1,pair<int,char> p2){
            
          if(p1.first>p2.first) return false;
          if(p1.first<p2.first) return true;
          return p1.second<p2.second;
            
            
        }
        
public:
    string frequencySort(string &s) {
       
       
       pair<int,char> freq[26];
       
       for(int i=0;i<26;i++){
           freq[i] = {0,i+'a'};
       }
       
       for(char ch:s){
           freq[ch-'a'].first++;
       }
       
       sort(freq,freq+26,comparison);
       
       string result = "";
       for(int i=0;i<26;i++){
             if(freq[i].first>0){
           for(int j=0;j<freq[i].first;j++){
        
       result +=freq[i].second;
           
           }
             }
}

return result;
    }
};