1class Solution(object):
2    def merge(self, nums1, m, nums2, n):
3        """
4        :type nums1: List[int]
5        :type m: int
6        :type nums2: List[int]
7        :type n: int
8        :rtype: None Do not return anything, modify nums1 in-place instead.
9        """
10        li=nums1[:m]
11        print(li)
12        li.extend(nums2[:n])
13        print(li)
14        li.sort()
15        del nums1[:]
16        nums1.extend(li)