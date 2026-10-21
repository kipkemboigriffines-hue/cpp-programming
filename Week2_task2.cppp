
#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age, examScore;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter student age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    cout << " Admission Results :" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Age: " << age << endl;
    cout << "Exam Score: " << examScore << endl;

    if (age >= 18) {
        if (examScore >= 50) {
            cout << "Admission Decision: Admitted" << endl;
        } else {
            cout << "Admission Decision: Not Admitted: Low Score" << endl;
        }
    } else {
        cout << "Admission Decision: Not Admitted: Underage" << endl;
    }

    return 0;
}
