class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        vector<int>temp;
        for(int i=0;i<n;i++)
        {
           mpp[nums[i]]++;
        }
       vector<pair<int,int>> vec;

       for(auto it : mpp)
       {
         vec.push_back({it.second, it.first});
       }
       sort(vec.begin(),vec.end());
       
       for(int i=vec.size()-1;i>=0 && k>0 ;i--)
       {
            temp.push_back(vec[i].second);
            k--;
       }
            return temp;
    }
};