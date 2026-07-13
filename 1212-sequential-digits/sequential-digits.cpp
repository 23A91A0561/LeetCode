class Solution {
public:
    vector<int>arr;
    void fun(int a,int low,int high)
    {
        while(a<=high && a%10!=0)
        {
            if(a>=low && a<=high)
            {
                arr.push_back(a);
            }
            a=(a*10)+((a%10)+1);
        }
    }
    vector<int> sequentialDigits(int low, int high) {
        for(int i=1;i<=9;i++)
        {
            fun(i,low,high);
        }
        sort(arr.begin(),arr.end());
        return arr;
    }
};