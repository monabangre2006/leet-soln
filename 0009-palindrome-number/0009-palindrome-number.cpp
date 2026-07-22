class Solution {
public:
    bool isPalindrome(long x) {
        int ld;
         long rv=0;
        long og=x;
        while(x>0)
        {
            ld = x%10;
            rv=(rv*10)+ld;
            x=x/10;
        }
        if(rv == og)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};