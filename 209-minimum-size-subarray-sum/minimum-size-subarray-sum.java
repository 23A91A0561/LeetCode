class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int j=0;
        int Min=100000000;
        int sum=0;
        for(int i=0;i<nums.length;i++)
        {
            sum+=nums[i];
            while(sum>=target)
            {
                Min=Math.min(Min,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(Min==100000000)
        {
            return 0;
        }
        return Min;
    }
}