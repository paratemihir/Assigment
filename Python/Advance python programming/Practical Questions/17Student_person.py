class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

class Student(Person):
    def __init__(self, name, age, student_id):
        super().__init__(name, age)
        self.student_id = student_id

    def display(self):
        print(f"Name : {self.name}, Age : {self.age}, Student id : {self.student_id}")

obj = Student("Mihir",20,1)
obj.display()


