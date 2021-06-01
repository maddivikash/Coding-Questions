class Solution{
   void  find(int l,int k, vector<vector<int>>& ans ,vector<int> temp,int n){
        temp.push_back(k+1);
        
        if(l == n-1)
        {
        ans.push_back(temp);
        return ;
        }
        //cout << k;
        
        for(int j = 0;j <n;j++){
           
            int c=0;
            for(int i =0;i<temp.size();i++){
            if(l+1-i != abs(temp[i]- j-1)  && j != temp[i]-1 ){
                c++;
            }
        }
         if( c == temp.size())
          find(l+1,j,ans,temp,n);
        }
        
        
    }
public:
    vector<vector<int>> nQueen(int n) {
        vector<vector<int>> ans;
        for(int i =0;i<n;i++){
         
            vector<int> temp;
            find(0,i,ans,temp,n);
        }
        return ans;
    }
};
