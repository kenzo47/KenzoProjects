from student import Student


class HighSchoolStudent(Student):
    school_name = "Springfield Highschool"

    def get_school_name(self):
        return "Highschool student of " + self.school_name

    def get_name_capitalize(self):
        original_value = super().get_name_capitalize()
        return original_value + "-HS"
