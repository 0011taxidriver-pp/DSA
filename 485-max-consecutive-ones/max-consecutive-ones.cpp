class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxone=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else{
                maxone=max(maxone,count);
                count=0;
            }
            
        }
        maxone=max(maxone,count);
        return maxone;
    }
};