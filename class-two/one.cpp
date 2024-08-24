#include <iostream>
#include <map>
using namespace std;
#include <vector>

class Category {};

class Author {
private:
  string name;
  string nationality;

public:
  // Constructor
  Author(string n, string nat) {
    name = n;
    nationality = nat;
  }

  // Method to print author details
  void printDetails() {
    cout << "Name: " << name << ", Nationality: " << nationality << endl;
  }
};
class Book {
 public:
  Author auth = Author("hira","BD");
  Category category;
};

int main() {
      vector<Book> books;
      
      Book b1;
      b1.auth.printDetails();
}