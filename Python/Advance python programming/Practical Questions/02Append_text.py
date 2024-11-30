# Write a Python program to append text to a file and display the text. 

# add text
text_append = "\nThis is the appended text"

# open file and use append method
file = open('text.txt','a')

# write a appended text
file.write(text_append)

# open file and read text
file = open('text.txt','r')

# print in terminal entire file text
print(file.read())

# close a file
file.close()

