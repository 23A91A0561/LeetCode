1class Solution {
2public:
3    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
4        sort(asteroids.begin(),asteroids.end());
5        long long k=mass;
6        for(auto &i:asteroids)
7        {
8            if(k<i)
9            {
10                return false;
11            }
12            k+=i;
13        }
14        return true;
15    }
16};