class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp=0;
        if(n<0)
            return false;
        n=abs(n);
        for(int i=0;i<=31;i++)
        {
            if(1<<i == n)
            {
                return true;
            }
        }
        return false;
    }
};