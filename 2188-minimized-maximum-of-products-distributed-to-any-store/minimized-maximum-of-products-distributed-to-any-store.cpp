class Solution {
public:
bool helper(int n, vector<int>& quantities,int mid)
{
    int store=0;
    for(int i=0;i<quantities.size();i++)
    {
        store+=ceil(double(quantities[i])/mid);

    }
    return store<=n;

}
    int minimizedMaximum(int n, vector<int>& quantities) {
        int low=1;
        int high=*max_element(quantities.begin(),quantities.end());
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(helper(n,quantities,mid))
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