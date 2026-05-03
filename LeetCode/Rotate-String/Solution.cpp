1class Solution(object):
2    def rotateString(self, s, goal):
3        """
4        :type s: str
5        :type goal: str
6        :rtype: bool
7        """
8        if len(goal)>len(s) or len(goal)<len(s):
9            return False
10        s=s+s
11        if goal in s:
12            return True
13        return False