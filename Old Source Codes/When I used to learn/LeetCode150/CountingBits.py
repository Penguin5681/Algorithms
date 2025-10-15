# 338. Counting Bits

class Solution:
    def countBits(self, n: int) -> List[int]:
        binary = bin(n)
        ans = []
        count = 0
        newStr = str(binary)
        for i in newStr:
            if i == '1':
                count += 1
        