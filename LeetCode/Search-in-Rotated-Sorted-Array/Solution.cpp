1class Solution(object):
2    def search(self, nums, target):
3        """
4        :type nums: List[int]
5        :type target: int
6        :rtype: int
7        """
8        if target not in nums:
9            return -1
10        else:
11            return nums.index(target)