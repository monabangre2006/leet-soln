class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        vector<int>temp;
        int maxi=-1;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second==it.first)
            {
                 if(it.first > maxi)
                 {
                    maxi=it.first;
                 }              
            }
            
        }
        
            return maxi;
       
    }
};