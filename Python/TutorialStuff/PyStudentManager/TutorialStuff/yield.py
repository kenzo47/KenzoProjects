students = []

def read_file():
    try:
        f = open("students.txt", "r")
        for student in f.read_students(f):
            students.append(student)
        f.close()
    except Exception as e:
        print(f"Error while reading file \n {e}")


def read_students(f):
    for line in f:
        yield line
