// Custom data type
class Student {
    // Fields (Attributes)
    public String name;
    public float age;

    // Method to display student info
    void displayInfo() {
        System.out.println(name + " " + age);
    }
}

public class Main {
    public static void main(String[] args) {
        // Create an instance of the Student class
        Student hira = new Student();
        
        // Assign values to the instance
        hira.age = 90.90f;
        hira.name = "Habibul Hasan Hira";
        
        // Call the method to display info
        hira.displayInfo();
    }
}
