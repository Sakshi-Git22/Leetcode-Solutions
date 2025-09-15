class Solution(object):
    def canBeTypedWords(self, text, brokenLetters):
        """
        :type text: str
        :type brokenLetters: str
        :rtype: int
        """
        brokenKeys = set(brokenLetters)
        words = text.split(" ")
        count = 0

        for word in words:
            for c in word:
                if c in brokenKeys:
                    count+=1
                    break

        return len(words) - count
        