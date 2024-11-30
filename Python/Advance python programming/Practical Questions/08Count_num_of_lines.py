# Write a Python program to count the number of lines in a text file. 

# open the file in readmode
file = open('text.txt','r')

# read all lines in a file
lines = file.readlines()
# count the number of line
line_count = len(lines)

# print the number of lines
print(line_count)