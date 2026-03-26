public int threeSumClosestN3(int[] nums, int target) {
    int distance = nums[0] + nums[1] + nums[2];
    for(int i=0; i<nums.length-2; i++) {
        for(int j = i+1; j<nums.length-1; j++) {
            for(int k = j + 1; k<nums.length; k++) {
                int sum = nums[i] + nums[j] + nums[k];
                distance = (Math.abs(distance-target) > Math.abs(sum-target)) ? sum : distance;
            }
        }
    }
    return distance;
}