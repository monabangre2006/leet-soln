class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int cntp=0, cntn=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                cntn++;
            }
            else if(nums[i]>0)
            {
                cntp++;
            }
            else
            {

            }

        }

        maxi=max(cntp,cntn);

        return maxi;
    }
};