# Custom data type
class Student:
    # Properties (attributes)
    name = ""
    age = 0.0

    # Method to display student info
    def display_info(self):
        print(f"{self.name} {self.age}")


# Create an instance of the Student class
hira = Student()

# Assign values to the instance properties
hira.name = "Habibul Hasan Hira"
hira.age = 90.90

# Call the method to display info
hira.display_info()


