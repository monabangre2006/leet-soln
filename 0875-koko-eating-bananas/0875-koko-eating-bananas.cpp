class Solution {
public:
    long long getTime(vector<int>& piles,int h)
    {
        int n=piles.size();
        long long totalH=0;
        for(int i=0;i<n;i++)
        {
          totalH+=ceil((double)piles[i]/(double)h);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int ans=INT_MAX;
        long long maxi=*max_element(piles.begin(),piles.end());
        long long low=1, high=maxi;
        while(low<=high)
        {
            long long mid=(low)+((high-low)/2);
            long long totalhour=getTime(piles,mid);
            if(totalhour <=h)
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