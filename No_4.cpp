#include <iostream>

using namespace std;

class Student {
    private :
        string name;
        string studentClass;
        int rollNumber;
        double mark;
    
    public :
        Student(const string& n, const string& c, int r, double m) : name(n), studentClass(c), rollNumber(r), mark(m) {};

        //Function to cal grade
        char cal_grade(){
            if (mark >= 90) {
            return 'A';
        } else if (mark >= 80) {
            return 'B';
        } else if (mark >= 70) {
            return 'C';
        } else if (mark >= 60) {
            return 'D';
        } else {
            return 'F';
        }
        }

        // Function to take input for student information
        void input_studentInfo() {
            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Class: ";
            getline(cin, studentClass);

            cout << "Enter Roll Number: ";
            cin >> rollNumber;

            cout << "Enter Marks: ";
            cin >> mark;
    }
        //Function to displlay student info
        void student_info (){
            cout << "Name : " << name << endl;
            cout << "Class : " << studentClass << endl;
            cout << "Roll Number : " << rollNumber << endl;
            cout << "Mark : " << mark << endl;
            cout << "Grade : " << cal_grade() << endl;
        }
};

int main() {
    // Create a Student object and take input
    Student student_1("", "", 0, 0.0);
    student_1.input_studentInfo();
    cout << endl;
    cout << "Student Information" <<endl;
    cout << "--------------------" << endl;
    // Display the student info
    student_1.student_info();

    return 0;
}