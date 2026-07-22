class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
            }
            else neg.push_back(arr[i]);
        }
        
        // for(int i=0;i<n/2;i++){
        //     arr[2*i] = pos[i];
        //     arr[2*i+1] = neg[i];
        // }
        int i=0;
        int j=0;
        vector<int> res;
        while(i<pos.size() && j<neg.size()){
            res.push_back(pos[i++]);
            res.push_back(neg[j++]);
        }
        while(i<pos.size()){
             res.push_back(pos[i++]);
        }
        while(j<neg.size()){
          
            res.push_back(neg[j++]);
        }
        arr=res;
        
        // vector<int> ans(n,0);
        // int posindex =0;
        // int negindex =1;
        // for(int i=0;i<n;i++){
        //     if(arr[i]>=0){
        //         ans[posindex] = arr[i];
        //         posindex +=2;
        //     }
        //     else {
        //         ans[negindex] = arr[i];
        //         negindex +=2;
        //     }
        // }
        // arr = ans;
        
    }
};
