class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int,vector<int>,less<int>>max_heap;
        for(auto &i:stones)
        {
            max_heap.push(i);
        }
        while(max_heap.size()>1)
        {
            int first_max=max_heap.top();
            max_heap.pop();
            int second_max=max_heap.top();
            max_heap.pop();
            if(first_max!=second_max)
            {
                max_heap.push(first_max-second_max);
            }
        }
        return max_heap.size()==0?0:max_heap.top();
    }
};