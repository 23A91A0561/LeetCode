class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        vector<char>odd,even;
        for(auto &i:s)
        {
            if((i-'0')%2==0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        sort(odd.begin(),odd.end(),greater<char>());
        sort(even.begin(),even.end(),greater<char>());
        int j=0,k=0;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]-'0')%2==0)
            {
                s[i]=even[j++];
            }
            else
            {
                s[i]=odd[k++];
            }
        }
        return stoi(s);
    }
};