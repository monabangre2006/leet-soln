class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        set<int>st;
        int i,j;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                   st.insert(nums2[j]);
                }
            }
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};