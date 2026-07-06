class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto a,auto b){
            if(a[0]==b[0])
            {
                return a[1]>b[1];
            }
            return a[0]<b[0];
        });
        if(intervals.size()==1)
        {
            return 1;
        }
        int i=0;
        int j=1;
        vector<vector<int>>ans;
        while(j<intervals.size())
        {
            if(intervals[i][0]<=intervals[j][0] && intervals[i][1]>=intervals[j][1])
            {
                j++;
            }
            else
            {
                ans.push_back(intervals[i]);
                i=j;
                j++;
            }
        }
        return ans.size()+1;
    }
};