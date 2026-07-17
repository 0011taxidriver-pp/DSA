class Solution {
public:
    string makeGood(string s) {
        string res="";
        int i=0;

        while(i<s.size())
        {
            if(!res.empty() && abs(res.back()-s[i])==32 )
            {
                res.pop_back();
            }
            else{
                res+=s[i];
            }
            i++;


        }
        return res;
        
    }
};