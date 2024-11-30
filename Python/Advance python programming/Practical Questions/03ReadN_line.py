# Write a Python program to read first n lines of a file. 

# Open the file
file = open('text.txt', 'r')

# line of numbers
n = 1

# Loop through the first n lines
for i in range(n):
    line = file.readline()
    #end of file is reached before n lines
    if line == '':  
        break
    print(line.strip())  # Print each line without extra newline

# Close the file  
file.close()
