class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        map<char,int>m;
        int ans=0;
        int Max=0;
        int l=0;
        for(int i=0;i<answerKey.size();i++)
        {
            m[answerKey[i]]++;
            Max=max(m[answerKey[i]],Max);
            while(i-l+1-Max>k)
            {
                m[answerKey[l]]--;
                l++;
            }
            ans=max(i-l+1,ans);
        }
        return ans;
    }
};