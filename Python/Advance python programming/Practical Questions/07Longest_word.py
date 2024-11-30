# Write a python program to find the longest words. 

# open the file in readmode
file = open('text.txt','r')

words = file.read().split()
# create a empty list
longest_word = []
# length variable initialize with 0
length = 0

# use loop to find longest word in file and store in a empty list
for i in words:
  if len(i) > length:
    length = len(i)
    longest_word = [i]
  elif len(i) == length:
    longest_word.append(i)

# print the longest words
print(f"Longest words are : {longest_word}")
