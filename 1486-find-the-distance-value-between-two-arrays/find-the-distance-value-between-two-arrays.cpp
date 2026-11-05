class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int size=arr2.size();
        int ans=0;
        for(auto &i:arr1)
        {
            int c=0;
            for(auto &j:arr2)
            {
                if(abs(i-j)<=d)
                {
                    c=1;
                }
            }
            if(c==0)
            {
                cout <<i <<" ";
                ans++;
            }
        }
        return ans;
    }
};