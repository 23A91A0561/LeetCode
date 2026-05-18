class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int score=0,counter=0;
        for(auto &i:events)
        {
            if(i[0]>='0' && i[0]<='9')
            {
                score+=i[0]-'0';
            }
            else
            {
                if(i.size()>1)
                {
                    score++;
                }
                else
                {
                    counter++;
                }
            }
            if(counter==10)
            {
                return {score,counter};
            }
        }
        return {score,counter};
    }
};