# Write a Python program to read last n lines of a file.

# open the file
file = open('text.txt','r')

# Set the number of lines to read from the end
n = 5

# read file lines
lines =  file.readline()

# use slicing method to last n lines
last_line = lines[-n:]

# print each line from the last n lines
for i in last_line:
  print(i.strip())  #strip method use to each line without extra line




