class Solution {
public:
bool helper(vector<int>& candies, long long k,int mid)
{
    long long child=0;
    for(int i=0;i<candies.size();i++)
    {
        child+=candies[i]/mid;

    }
    return child>=k;
    
}
    int maximumCandies(vector<int>& candies, long long k) {
        int low=1;
        int high=*max_element(candies.begin(),candies.end());
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if (helper(candies,k,mid))
            {
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};