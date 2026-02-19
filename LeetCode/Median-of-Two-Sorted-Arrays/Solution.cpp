1class Solution(object):
2    def findMedianSortedArrays(self, nums1, nums2):
3        """
4        :type nums1: List[int]
5        :type nums2: List[int]
6        :rtype: float
7        """
8        nums1.extend(nums2)
9        nums1.sort()
10        m=len(nums1)//2
11        if(len(nums1)%2!=0):
12            return nums1[m]
13        else:
14            n=(nums1[m]/2.0)+(nums1[m-1]/2.0)
15            return n