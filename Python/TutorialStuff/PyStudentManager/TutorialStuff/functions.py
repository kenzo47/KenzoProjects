students = []


def get_students_titlecase():
    students_titlecase = []
    for student in students:
        students_titlecase.append(student["name"].title())
    return students_titlecase


def print_students_titlecase():
    students_titlecase = get_students_titlecase()
    print(students_titlecase)


def add_student(name, student_id=1):
    student = {"name": name, "student_id": student_id}
    students.append(student)


def save_file(student):
    try:
        # Append mode, w = write mode and overwrites all previous data
        f = open("students.txt", "a")
        f.write(student + "\n")
        f.close()
    except Exception as e:
        print(f"Error while saving file \n{e}")


def read_file():
    try:
        f = open("students.txt", "r")  # Read mode
        for student in f.readlines():
            add_student(student)
        f.close()
    except Exception as e:
        print(f"Error while reading file \n {e}")


read_file()
print_students_titlecase()

while input("Do you want to add a student? y/n ") == "y":
    student_name = input("Enter student name: ")
    student_id = input("Enter student ID: ")
    add_student(student_name, student_id)
    save_file(student_name)
    print_students_titlecase()
