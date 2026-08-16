class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int in=0;
        int idx=INT_MAX;
        int ans=INT_MAX;
        for(auto &i:drones)
        {
            int distance=abs(i[0]-target[0])+abs(i[1]-target[1]);
            if(distance<=i[2])
            {
                if(ans>distance)
                {
                    ans=distance;
                    idx=in;
                }
            }
            in++;
        }
        if(idx==INT_MAX)
        {
            return -1;
        }
        return idx;
    }
};