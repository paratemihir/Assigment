# Write a Python program to write a list to a file. 

# list
list1 = ['a','b','c','d','e']
# open file in the write mode
file = open('text1.txt','w')

# loop use to each elemnent in the list,write in the file
for item in list1:
  file.write(item)

