prices = [7,1,5,3,6,4]
maxProfit = 0 
l = 0
r = 1
        # if len(prices == 1) and  {
        #     maxProfit = prices[0]
        # }
while r <= len(prices) -1:
    if prices[l] < prices[r]:
        profit = prices[r] - prices[l]
        maxProfit = max(maxProfit, profit)
    else:
        l = r 
    r += 1

print(maxProfit)
