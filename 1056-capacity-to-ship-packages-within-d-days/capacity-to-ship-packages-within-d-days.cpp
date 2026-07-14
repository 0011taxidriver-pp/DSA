class Solution {
public:
bool helper(vector<int>& weights,int days,int mid)
{
    int useddays=1;
    int load=0;
    for(int i=0;i<weights.size();i++)
    {
        if(load+weights[i]<=mid)
        {
            load+=weights[i];

        }
        else{
            useddays++;
            load=weights[i];
        }
    }
    return useddays<=days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());;\
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(helper(weights,days,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};