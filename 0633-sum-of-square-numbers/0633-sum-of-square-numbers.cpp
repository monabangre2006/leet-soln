class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0)
           return true;
       int low=1,high=(int)sqrt(c);
       long long prod1=high*high;
       
       if( prod1== c)
       {
          return true;
       }
       while(low<=high)
       {
         long long prod1=high*high;
         long long prod2= low*low;
          long long sum= (prod2)+(prod1);
           if(sum == c)
           {
             return true;
            }
           else if(sum < c)
           {
              low++;
            }
            else
            {
                high--;
            }
       }
         
       
       
      return false;
    }
};