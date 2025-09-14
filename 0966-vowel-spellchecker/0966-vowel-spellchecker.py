class Solution(object):
    def spellchecker(self, wordlist, queries):
        vowels = set("aeiou")

        def devowel(word):
            return "".join('*' if ch in vowels else ch for ch in word.lower())

        exact = set(wordlist)
        case_map = {}
        vowel_map = {}

        for word in wordlist:
            lower = word.lower()
            if lower not in case_map:
                case_map[lower] = word
            masked = devowel(word)
            if masked not in vowel_map:
                vowel_map[masked] = word

        result = []
        for q in queries:
            if q in exact:  
                result.append(q)
            elif q.lower() in case_map:  
                result.append(case_map[q.lower()])
            elif devowel(q) in vowel_map:  
                result.append(vowel_map[devowel(q)])
            else:
                result.append("")
        return result
