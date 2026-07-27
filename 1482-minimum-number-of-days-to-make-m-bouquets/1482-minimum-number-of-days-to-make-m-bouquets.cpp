class Solution {
public:
    bool ispossible(vector<int>& bloomDay ,int days,int m,int k)
    {
        int n=bloomDay.size();
        int cnt=0,bouquet=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=days)
            {
                cnt++;
            }
            else
            {
                bouquet+=(cnt/k);
                cnt=0;
            }
        }
        bouquet+=(cnt/k);
        if(bouquet >= m)
        {
            return true;
        }
        else
        {
           return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n= bloomDay.size();
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(ispossible(bloomDay,mid,m,k))
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