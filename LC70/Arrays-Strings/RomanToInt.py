s = "MCMXCIV"

total = 0
prev = 0
rI = {'I': 1, 'V': 5, 'X': 10,
'L': 50, 'C': 100, 'D': 500, 'M': 1000}

for i in reversed(s):

    value = rI[i]
    if value > prev:
        total += value
    else:
        total -= value
    prev = value

print(total)

   
