class Solution:
    def trailingZeroes(self, n):
        if n < 5:
            return 0
        
        counter = 0
        while(n >= 5):
            counter += int(n/5)
            n = int(n/5)
        return counter