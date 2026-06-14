class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            arr1.push_back(nums[i]);
            else
            arr2.push_back(nums[i]);
        }
        int i=0;
        int j=0;
        while(i<arr1.size()&&j<arr2.size())
        {
            res.push_back(arr1[i]);
            i++;
            res.push_back(arr2[j]);
            j++;
        }
        return res;
    }
};