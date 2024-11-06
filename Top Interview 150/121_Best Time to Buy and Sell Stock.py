class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        b = prices[0]
        p = 0
        for i in range(1, len(prices)):
            if prices[i] < b:
                b = prices[i]
            elif prices[i] - b > p:
                p = prices[i] - b
        
        return p