class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int,vector<int>,less<int>>max_heap;
        for(auto &i:gifts)
        {
            max_heap.push(i);
        }
        while(k--)
        {
            int temp=max_heap.top();
            max_heap.pop();
            max_heap.push(sqrt(temp));
        }
        long long sum=0;
        while(max_heap.size()!=0)
        {
            sum+=max_heap.top();
            max_heap.pop();
        }
        return sum;
    }
};