class Solution {
public:
    typedef long long ll;
    bool helper(vector<int>& ranks,int cars,long long mid)
    {
        ll carfixed=0;
        for(int i=0;i<ranks.size();i++)
        {
            carfixed+=sqrt(mid/ranks[i]);

        }
        return carfixed>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        ll low=1;
        ll maxi=*max_element(ranks.begin(),ranks.end());
        ll high= maxi*cars*cars;
        ll ans=0;
        while(low<=high)
        {
            ll mid=low+(high-low)/2;
            if(helper(ranks,cars,mid))
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