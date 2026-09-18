class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int>m;
        for(auto &i:arr)
        {
            m[i]++;
        }
        priority_queue<int,vector<int>,less<int>>max_heap;
        for(auto &i:m)
        {
            max_heap.push(i.second);
        }
        int ans=0;
        int sum=0;
        while(arr.size()-sum>arr.size()/2)
        {
            sum+=max_heap.top();
            max_heap.pop();
            ans++;
        }
        return ans;
    }
};