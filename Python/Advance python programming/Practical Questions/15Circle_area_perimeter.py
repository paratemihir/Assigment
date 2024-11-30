# Write a Python class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle 

class Circle:
  # Constructer
  def __init__(self,radius):
    self.radius = radius
  # area of circle function
  def area(self):
    return 3.14 * self.radius**2 
  # area of perimeter function
  def perimeter(self):
    return 2 * 3.14 * self.radius

# create object
obj = Circle(5)
# print area of a circle
print(f"Area of a circle : {obj.area()}")
# print perimeter of a circle
print(f"Perimeter of a circle : {obj.perimeter()}")
