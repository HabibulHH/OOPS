// Custom data type
class Student
{
    // Fields (Attributes)
    public string Name;
    public float Age;

    // Method to display student info
    public void DisplayInfo()
    {
        Console.WriteLine(Name + " " + Age);
    }
}

class Program
{
    static void Main(string[] args)
    {
        // Create an instance of the Student class
        Student hira = new Student();
        
        // Assign values to the instance
        hira.Age = 90.90f;
        hira.Name = "Habibul Hasan Hira";
        
        // Call the method to display info
        hira.DisplayInfo();
    }
}
