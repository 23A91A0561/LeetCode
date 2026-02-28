1class Solution {
2public:
3    int concatenatedBinary(int n) {
4        int ans=1;
5        int mod=1e9+7;
6        for(int i=2;i<=n;i++){
7            int size=log2(i)+1;
8            while(size--){
9                ans=(ans<<1ll)%mod;
10            }
11            ans=(ans+i)%mod;
12        }
13        return ans;
14    }
15};