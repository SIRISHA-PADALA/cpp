# Query: 
# ContextLines: 1

#include <iostream>
using namespace std;

class student {
    private:
     int rollno;
     int marks;
    public:
    string name;
    string branch;
    //constructor
    student(string n, string b, int r, int m) {
        name = n;
        branch = b;
        rollno = r;            
        marks = m;
    }
     //setters
    void setmarks(int mar) {                
        marks=mar;
    }
    //getters
    int getmarks() {
        return marks;
    }
    void displayDetails() {
        cout << "name: " << name << endl;
        cout << "branch: " << branch << endl;
        cout << "roll No: " << rollno << endl;
        cout << "marks: " << marks << "%" << endl;
    }
};
int main() {
    student s1("Sirisha","AIML",1,75);
    s1.setmarks(75);
    s1.displayDetails();
}