class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int mod=1000000000+7;
        vector<int>pre(s.size());
        vector<long long>store(s.size());
        vector<int>l(s.size());
        vector<long long>pow(s.size()+1);
        pow[0] = 1;
        for(int i=1;i<=s.size();i++)
        {
            pow[i]=(pow[i-1]*10)%mod;
        }
        pre[0]=s[0]-'0';
        store[0]=s[0]-'0';
        int length=1;
        l[0]=length;
        for(int i=1;i<s.size();i++)
        {
            pre[i]=pre[i-1];
            store[i]=store[i-1];
            l[i]=l[i-1];
            if(s[i]!='0')
            {
                pre[i]+=s[i]-'0';
                store[i]=(store[i]*10+(s[i]-'0'))%mod;
                l[i]++;
            }
        }
       
        vector<int>ans;
        for(auto &i:queries)
        {
            if(i[0]==0)
            {
                ans.push_back((pre[i[1]]*store[i[1]])%mod);
            }
            else
            {
                int digits=l[i[1]]-l[i[0]-1];
                long long temp=(store[i[1]]-(store[i[0]-1]*pow[digits])%mod+mod)%mod;
                long long sum=pre[i[1]]-pre[i[0]-1];
                ans.push_back((sum%mod)*temp%mod);
            }
        }
        return ans;
    }
};