class Solution {
public:
    int maxProduct(int n) {
        vector<int>store;
        while(n!=0)
        {
            store.push_back(n%10);
            n/=10;
        }
        sort(store.begin(),store.end());
        return store[store.size()-1]*store[store.size()-2];
    }
};