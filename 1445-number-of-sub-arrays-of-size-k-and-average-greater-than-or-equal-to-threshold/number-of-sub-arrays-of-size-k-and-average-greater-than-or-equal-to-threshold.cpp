class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        int c=0;
        for(int i=k;i<arr.size();i++)
        {
            double result=sum/k;
            if(result>=threshold)
            {
                c++;
            }
            sum-=arr[i-k];
            sum+=arr[i];
        }
        if(sum/k>=threshold)
        {
            c++;
        }
        return c;
    }
};