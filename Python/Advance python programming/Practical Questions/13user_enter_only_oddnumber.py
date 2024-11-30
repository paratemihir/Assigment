# Write python program that user to enter only odd numbers, else will raise an exception. 

while True:
  # try block: user input number and check number is odd or even
  try:
    num = int(input("Enter an odd number: "))
    if num % 2 == 0:
      raise ValueError("Please enter odd number.")
    else:
      break
  # ValueError: user enters non-numeric input.
  except ValueError as e:
    print(e)

# print odd number
print("Odd number : ",num)

