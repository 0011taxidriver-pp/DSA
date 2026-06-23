class Solution {
public:
int rightindex(vector<int>& nums,int target,int n){
    int low=0;
    int high=n-1;
    int rightidx=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
             rightidx=mid;
            low=mid+1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return rightidx;
}
int leftindex(vector<int>& nums,int target,int n){
    int low=0;
    int high=n-1;
    int leftidx=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            leftidx=mid;
            high=mid-1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return leftidx;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int leftidx=leftindex(nums,target,n);
        int rightidx=rightindex(nums,target,n);
        return {leftidx,rightidx};
    }
};