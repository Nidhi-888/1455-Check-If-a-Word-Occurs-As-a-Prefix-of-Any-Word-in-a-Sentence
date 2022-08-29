// code in python

class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """

        s = sentence.split(" ")

        for i, word in enumerate(s):
            if word.startswith(searchWord):
                return i + 1


        return -1
