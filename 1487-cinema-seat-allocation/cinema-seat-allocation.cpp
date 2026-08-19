class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        map<int,vector<int>>m;
        int ans=0;
        for(auto &i:reservedSeats)
        {
            m[i[0]].push_back(i[1]);
        }
        for(auto &i:m)
        {
            bool p1=false,p2=false,p3=false;
            for(auto &j:i.second)
            {
                if(j>=2 && j<=5)
                {
                    p1=true;
                }
                if(j>=4 && j<=7)
                {
                    p2=true;
                }
                if(j>=6 && j<=9)
                {
                    p3=true;
                }
            }
            if(p1==false && p2==false && p3==false)
            {
                ans+=2;
            }
            else if(p1==true && p2==true && p3==true)
            {
                ans+=0;
            }
            else
            {
                ans+=1;
            }
        }
        ans+=(n-m.size())*2;
        return ans;
    }
};