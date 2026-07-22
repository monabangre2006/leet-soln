class Solution {
public:

     
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int longest=1,cnt=0,last=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(nums[i]-1 == last)
            {
                cnt=cnt+1;
                last=nums[i];

            }
            else if(nums[i]!=last)
            {
                cnt=1;
                last=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};