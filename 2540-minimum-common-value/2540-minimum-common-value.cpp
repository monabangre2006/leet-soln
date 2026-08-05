class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int left=0;
        int right=0;
        int n=nums1.size();
        int m=nums2.size();
        while(left < n && right < m)
        {
           if(nums1[left] ==nums2[right])
           {
              return nums1[left];
              left++;
              right++;
           }
           else if(nums1[left] < nums2[right])
           {
             left++;
           }
           else
           {
             right++;
           }

        }
        return -1;
    }
};