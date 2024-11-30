try:
    num1 = int(input("Enter num1: "))
    num2 = int(input("Enter num2: "))
    result = num1 / num2
    print("Result:", result)
except ZeroDivisionError:
    print("Error: Division by zero")
except ValueError:
    print("Error: Invalid input")
finally:
    print("This will always execute")