class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        int left = n-1;
        int right=0;
        while(left >= 0 && right < m)
        {
          if(nums1[left] > nums2[right])
         {
            swap(nums1[left] ,nums2[right]);
            left--;
            right++;
         }
         else
         {
            break;
         }
        }

        for(int i=0;i<m;i++)
        {
           nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int low=0,high=n+m-1;
        
            int mid= (low+high)/2;
            int x=n+m;
            if(x%2!=0)
            {
                return nums1[mid];
            }
            else
            {
               return  (nums1[mid]+nums1[mid+1])/2.0;
               
            }
        

        return -1;
    }
};