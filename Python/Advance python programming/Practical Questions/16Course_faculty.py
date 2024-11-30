class Faculty:
    def __init__(self, name, id):
        self.name = name
        self.id = id

class Course(Faculty):
    def __init__(self, name, code, faculty):
        self.name = name
        self.code = code
        self.faculty = faculty

obj = Course("Python","PY001","Prasant sir")
print(f"Course Name : {obj.name}")
print(f"Code : {obj.code}")
print(f"Faculty : {obj.faculty}")