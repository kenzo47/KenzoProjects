students = []


class Student:

    school_name = "Springfield Elementary"

    def __init__(self, name, student_id=1):
        self.name = name
        self.student_id = student_id
        students.append(self)

    def __str__(self):
        return "Student: " + self.name

    def get_name_capitalize(self):
        return self.name.capitalize()

    def get_school_name(self):
        return self.school_name


print(Student.school_name)

# OR

bob = Student("Bob")
print(bob.school_name)


class HighSchoolStudent(Student):

    school_name = "Springfield Highschool"

    def get_school_name(self):
        return "Highschool student of " + self.school_name

    def get_name_capitalize(self):
        original_value = super().get_name_capitalize()
        return original_value + "-HS"

james = HighSchoolStudent("james")
print(james.get_name_capitalize())
print(james.get_school_name())
