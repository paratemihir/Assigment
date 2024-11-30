# Write a Python program to count the frequency of words in a file

file = open('text.txt','r')

# empty dictionary
word_count = {}

words = file.read().split()

# looping through entire file words read
for i in words:
  if i in word_count:
    word_count[i] += 1
  else:
    word_count[i] = 1

# print words and its freequency
for word, count in word_count.items():
  print(f"{word}: {count}")