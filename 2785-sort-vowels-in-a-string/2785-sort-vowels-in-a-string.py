class Solution(object):
    def sortVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = set("aeiouAEIOU")
        sorted_vowels = sorted([ch for ch in s if ch in vowels])
        res = []
        j=0
        for ch in s:
            if ch in vowels:
                res.append(sorted_vowels[j])
                j+=1
            else:
                res.append(ch)
            
        return "".join(res)