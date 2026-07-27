class Solution {
public:
    int dayscal(vector<int>& weights,int cap)
    {
        int n= weights.size();
        int day=1,load=0;
        for(int i=0;i<n;i++)
        {
            if(load+weights[i] > cap)
            {
                day=day+1;
                load=weights[i];
            }
            else
            {
                load=load+weights[i];
            }
        }

        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
        }
        int low=*max_element(weights.begin(),weights.end());
        int high = sum;
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int daysrequired = dayscal(weights,mid);
            if(daysrequired<=days)
            {
               ans=mid;
               high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        } 
        return ans;               
    }

};