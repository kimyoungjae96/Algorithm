from itertools import permutations

class Solution(object):
    def groupAnagrams(self, strs):
        Answer = []
        chkArr = [0] * len(strs)
        SubAnswer = []
        for idx,Str2 in enumerate(strs):
            if chkArr[idx] == 1:
                continue
            TempStr = map(''.join, itertools.permutations(list(str(Str2))))
            for i in TempStr:
                for idx,Str in enumerate(strs):
                    if i == str(Str):
                        if chkArr[idx] == 0:
                            SubAnswer.append(i)
                            chkArr[idx] = 1
                        else:
                            break
            if(SubAnswer):
                Answer.append(SubAnswer[:])
                del SubAnswer[:]
            
        return Answer
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        