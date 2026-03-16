class student :
    name = ""
    age = 0
    grade = ""
    
    def get_grade(self) :
        return self.grade
    
    def get_info(self) :
        return print(f"Name : {self.name} and age : {self.age}")
s1 = student()
s1.grade = "A"
s1.age = 20
s1.name = "Nilanjan"
print(s1.get_grade())
s1.get_info()


