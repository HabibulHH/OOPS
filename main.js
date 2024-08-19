// Custom data type
class Student {
    // Properties (attributes)
    name;
    age;

    // Method to display student info
    displayInfo() {
        console.log(`${this.name} ${this.age}`);
    }
}
// 
let hira = new Student();
// Assign values to the instance properties
hira.name = "Habibul Hasan Hira";
hira.age = 90.90;

// Call the method to display info
hira.displayInfo();