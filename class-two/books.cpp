https://github.com/HabibulHH/OOPS

#include <iostream>
#include <map>
using namespace std;
#include <vector>

class Book {

public:
  string name;
  float price;
  Book(string n, float p) {
    name = n;
    price = p;
  }
  // Method to display book details
  void display() {
    cout << "Book Name: " << name << ", Price: $" << price << endl;
  }
};

int main() {
  vector<Book> lists;

  Book b1 = Book("To Kill a Mockingbird", 99.78);
  lists.push_back(b1);
  lists.push_back(Book("To Kill a Mockingbird", 14.99));
  lists.push_back(Book("1984", 13.50));
  lists.push_back(Book("Pride and Prejudice", 7.95));
  bool isExists = false;
  for (size_t i = 0; i<lists.size(); i++) {
   if(lists[i].name == "1984"){
          isExists = true;
          break;
   }
   
    // book.display();
  }

  if (isExists) {
    cout << "there is a copy";
  }
}