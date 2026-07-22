class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=1;j<n;j++)
        {
            if(nums[i] !=nums[j])
            {
                nums[i+1] = nums[j];
                i++ ;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << nums[i] <<" ";
        }
        return i+1;
    }
};