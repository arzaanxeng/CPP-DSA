#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int totalMarks;
    int physicsMarks;
    int chemMarks;
    int mathMarks;
};

/*
 a should come first -> true
 b should come first -> false

 Students with higher totalMarks come first.
 If totalMarks are equal, the student with higher mathMarks comes first.
 If still tied, the student with higher physicsMarks comes first.
 If still tied, the student with lexicographically smaller name comes first.
*/

bool cmp(Student a, Student b) {
    if (a.totalMarks != b.totalMarks)
        return a.totalMarks > b.totalMarks;

    if (a.mathMarks != b.mathMarks)
        return a.mathMarks > b.mathMarks;

    if (a.physicsMarks != b.physicsMarks)
        return a.physicsMarks > b.physicsMarks;

    return a.name < b.name;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> A(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> A[i].name;

        cout << "Total Marks: ";
        cin >> A[i].totalMarks;

        cout << "Physics Marks: ";
        cin >> A[i].physicsMarks;

        cout << "Chemistry Marks: ";
        cin >> A[i].chemMarks;

        cout << "Maths Marks: ";
        cin >> A[i].mathMarks;
    }

    sort(A.begin(), A.end(), cmp);

    cout << "\nStudents sorted according to the given criteria:\n";

    for (int i = 0; i < n; i++) {
        cout << A[i].name << " "
             << A[i].totalMarks << " "
             << A[i].physicsMarks << " "
             << A[i].chemMarks << " "
             << A[i].mathMarks << "\n";
    }

    return 0;
}