class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>res;
        int maxi=*max_element(nums.begin(),nums.end());
         int mini=*min_element(nums.begin(),nums.end());
         
        for(int i=mini;i<=maxi;i++)
        {
            bool found=false;
           for(int j=0;j<n;j++)
           {
             if(i==nums[j])
             {
                found=true; 
                break;
             }
             
         }
         if(!found)
         {
            res.push_back(i);
         }

           
        }

        return res;
       
    }
};