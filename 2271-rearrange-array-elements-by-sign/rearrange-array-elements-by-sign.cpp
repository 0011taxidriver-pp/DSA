class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res(nums.size());
        int pidx=0;
        int nidx=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                res[pidx]=nums[i];
                pidx=pidx+2;
            }
            else{
                res[nidx]=nums[i];
                nidx=nidx+2;
            }
        }
        return res;
    }
};