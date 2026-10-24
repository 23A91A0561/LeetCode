class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>prefix={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        for(int i=1;i<prefix.size();i++)
        {
            prefix[i]=prefix[i-1]+prefix[i];
        }
        int aa=prefix[stoi(arriveAlice.substr(0,2))-1]+stoi(arriveAlice.substr(3));
        int la=prefix[stoi(leaveAlice.substr(0,2))-1]+stoi(leaveAlice.substr(3));
        int ab=prefix[stoi(arriveBob.substr(0,2))-1]+stoi(arriveBob.substr(3));
        int lb=prefix[stoi(leaveBob.substr(0,2))-1]+stoi(leaveBob.substr(3));
        int res=min(la,lb)-max(aa,ab)+1;
        if(res<=0)
        {
            return 0;
        }
        return res;
    }
};