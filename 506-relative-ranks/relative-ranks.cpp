class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int>m;
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            m[score[i]]=i;
        }
        int idx=n;
        vector<string>ans(n);
        for(auto &i:m)
        {
            if(idx==1)
            {
                ans[i.second]="Gold Medal";
            }
            else if(idx==2)
            {
                ans[i.second]="Silver Medal";
            }
            else if(idx==3)
            {
                ans[i.second]="Bronze Medal";
            }
            else
            {
                ans[i.second]=to_string(idx);
            }
            idx--;
        }
        return ans;
    }
};