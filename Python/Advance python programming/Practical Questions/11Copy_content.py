# Write a Python program to copy the contents of a file to another file. 

def copy_file(source_file,destination_file):
  with open(source_file,'r') as src:
    with open(destination_file,'w') as dest:
      for line in src:
        dest.write(line)  

# replace path to the source file
source_file = 'source.txt'

# replace path to the destination file
destination_file = 'destination.txt'

# copy source file and add contect to destination file
copy_file(source_file,destination_file)

print(f"Copid successfully")

