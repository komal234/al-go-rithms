class Solution {
public:
    int rangeBitwiseAnd(long long int left, long long int right) {
        
        int val,val1;
      
        for(int i=31;i>=0;i--)
        {
            if(left&(1<<i))
            {
                val=i;
                break;
            }
        }
        for(int i=31;i>=0;i--)
        {
            if(right&(1<<i))
            {
                val1=i;
                break;
            }
        }
        if(val1!=val)
            return 0;
        else
        {
            int ans=left;
           for(long long int i=left+1;i<=right;i++)
               ans=ans&i;
           return ans;
        }
    }
};