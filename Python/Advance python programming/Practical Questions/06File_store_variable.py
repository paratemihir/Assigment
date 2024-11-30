# Write a Python program to read a file line by line store it into a variable. 

# open the file
file = open('text.txt','r')

# save entire file in a single variable
content = file.read()

# print the file content
print(content)
