class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val;
        int n=nums.size();
        val=nums[0];
        for(int i=1;i<n;i++)
            val=val^nums[i];
        return val;
        
    }
};