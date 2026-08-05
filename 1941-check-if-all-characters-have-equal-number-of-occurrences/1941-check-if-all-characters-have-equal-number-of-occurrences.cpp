class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.length();
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
           mpp[s[i]]++;
        }
        int cnt=mpp.begin()->second;
        for(auto it:mpp)
        {
            if(it.second != cnt)
            {
                return false;
            }
        }
        return true;
    }
};