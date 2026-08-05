class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
           mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second ==1)
            {
                res=res+it.first;
            }
        }

        return res;
    }
};