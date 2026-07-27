class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            
            if(nums[low] < nums[high])
            {
                ans=min(ans,nums[low]);
                break;
            }
            int mid=low+((high-low)/2);
            if(nums[low] == nums[mid] && nums[mid]== nums[high])
            {
                ans=min(ans,nums[mid]);
                low=low+1;
                high=high-1;
                continue;
            }
            
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            
            else
            {
               
                high=mid-1;
                ans=min(ans,nums[mid]);

            }
        }
        return ans;
    }
};