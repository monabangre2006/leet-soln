class Solution {
public:
     vector<int>row(int  n)
     {
         long long ans = 1;
        vector<int>ansRow;
        ansRow.push_back(1);
         for(int c=1;c<n;c++)
        {
            ans=ans*(n -c);
            ans=ans/c;
            ansRow.push_back(ans);
         }
            return ansRow;
     }
    vector<vector<int>> generate(int numRows) {
        
         vector<vector<int>>res;
         for(int i=1;i<=numRows;i++)
         {
            
            res.push_back(row(i));
         }
      return res;
    }
};