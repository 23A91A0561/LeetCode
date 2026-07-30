class Solution(object):
    def minimumPushes(self, word):
        """
        :type word: str
        :rtype: int
        """
        c=1
        ans=0
        for i in range(len(word)):
            if i!=0 and i%8==0:
                c+=1
            ans+=c
        return ans