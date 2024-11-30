# Write a Python program to read a file line by line and store it into a list

# empty list
lines = []

# open a file in read mode
file = open('text.txt','r')

# read file line by line and store in empty list
for line in file:
  # strip() removes the whitespace
  lines.append(line.strip())

print(lines)
