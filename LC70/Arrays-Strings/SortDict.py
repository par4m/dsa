
# sorted
#

numbers = [1,2,3,5,6,7,8]
words = ["param", "abc", "lol"]
print(sorted(words, key=len))
print(sorted(numbers, reverse=True))

d = {"b": 2, "a": 1, "c": 3}
print(sorted(d.items())) # sort by key by default
print(sorted(d.items(), key=(lambda x: x[1]))) # sort by value 


pairs = [(1,'ane'), (2, 'two'), (3,'bhree')]
print(sorted(pairs, key=lambda x: x[1]))

