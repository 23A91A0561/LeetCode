class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double,pair<int,int>>>m;
        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                m.push_back({(arr[i]*1.0)/(arr[j]),{arr[i],arr[j]}});
            }
        }
        sort(m.begin(),m.end());
        cout <<m[k-1].first;
        return {m[k-1].second.first,m[k-1].second.second};
    }
};