class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1,arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int i=2;
        int f=0,s=0;
        while(i!=nums.size())
        {
            if(arr1[f]>arr2[s])
            {
                arr1.push_back(nums[i]);
                f++;
            }
            else
            {
                arr2.push_back(nums[i]);
                s++;
            }
            i++;
        }
        arr1.insert(arr1.end(),arr2.begin(),arr2.end());
        return arr1;
    }
};