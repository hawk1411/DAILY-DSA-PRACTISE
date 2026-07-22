class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        // code here
        unordered_set<int> st;
        int n = arr.size();
        int largest = -1;
        int x=0;
        int cnt =0;
        for(int i:arr){
            st.insert(i);
        }
        
        for(int i=0;i<n;i++){
            if(st.find(arr[i]-1) == st.end()){
                
                cnt = 1;
                x = arr[i];
                
            }
            
            while(st.find(x+1) != st.end()){
                cnt+=1;
                 x+=1;
            }
            largest = max(largest,cnt);
            
            
            
        }
        
        return largest;
    }
};
