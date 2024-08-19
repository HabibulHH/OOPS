#include <iostream>
using namespace std;

// user defined type
// custom data type
class Student {
  public:
    string name;
    float age;

  void displayInfo(){
    cout<<name<< " "<<age << endl;
  }
};

int main() {   
 Student hira;
 hira.age = 90.90;
 hira.name = "habibul hasan hira";
 hira.displayInfo();
  
}