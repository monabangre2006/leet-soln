class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0,high=n-1;
        while(low<=high)
        {
            if(nums[low]+nums[high]==target)
            {
               return{low+1,high+1};
            }
            else if(nums[low] + nums[high] < target)
            {
                low=low+1;

            }
            else 
            {
                high=high-1;
            }
            
        }
        return {-1,-1};
    }
};