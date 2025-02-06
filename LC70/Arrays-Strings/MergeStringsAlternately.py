word1 = "abc"
word2 = "pqr"

res = ""
for i in range(max(len(word1),len(word2))):
    if i < len(word1):
        res+=word1[i]
    if i < len(word2):
        res+=word2[i]

print(res)
