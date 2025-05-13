#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    float gpa;
public:
    Student(string name, int id, float gpa) {
        this->name = name;
        this->id = id;
        this->gpa = gpa;
    }
    void display_info() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << gpa << endl;
    }
    bool has_scholarship() const {
        return gpa >= 3.6;
    }
};

int main() {
    Student sv("Nguyen Van A", 12345, 3.7);
    sv.display_info();
    if (sv.has_scholarship()) {
        cout << "Student has a scholarship." << endl;
    } else {
        cout << "Student does not have a scholarship." << endl;
    }
    return 0;
}

