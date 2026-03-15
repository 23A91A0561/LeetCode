1class Solution {
2public:
3    int countCommas(int n) {
4        if(n<1000)
5        {
6            return 0;
7        }
8        return n-999;
9    }
10};