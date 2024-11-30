# Write a Python class named Rectangle constructed by a length and width and a method which will compute the area of a rectangle 

class Rectangle:
  # constructer
  def __init__(self,length,width):
    self.length = length
    self.width = width

  # area of a rectangle function
  def are_of_rectangle(self):
    return self.length * self.width

# create object
obj = Rectangle(5,3)
# print area of rectangle
print(f"Area of rectangle is : {obj.are_of_rectangle()}")