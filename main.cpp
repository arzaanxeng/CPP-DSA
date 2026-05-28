//
//  main.cpp
//  CPP33
//
//  Created by SYED ARZAAN on 13/01/26.
//
/*
#include <iostream>
#include <ctime> // Required for general date/time functions
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Setter method to set the date with basic validation
    void setDate(int d, int m, int y) {
        if (y > 0 && m >= 1 && m <= 12 && d >= 1 && d <= 31) { // Simplified validation
            day = d;
            month = m;
            year = y;
            // More robust validation (e.g., checking days in specific months, leap years)
            // can be added here
        } else {
            cout << "Invalid date provided. Date not set." << endl;
        }
    }

    // Getter method to retrieve the day
    int getDay() const { // 'const' is a best practice for getters
        return day;
    }

    // Getter method to retrieve the month
    int getMonth() const {
        return month;
    }

    // Getter method to retrieve the year
    int getYear() const {
        return year;
    }

    // Method to display the date
    void displayDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date myBirthday;

    // Use setter to set data
    myBirthday.setDate(25, 12, 2005);

    // Use getter to get and display individual data members
    cout << "My birthday is on: " << myBirthday.getMonth() << "/"
         << myBirthday.getDay() << "/" << myBirthday.getYear() << endl;

    // Use a member function to display the full date
    myBirthday.displayDate();

    // Example of invalid input handling
    myBirthday.setDate(31, 6, 2025); // June only has 30 days
    
    return 0;
}*/

#include<iostream>
using namespace std;

class Employee
{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(void){
    Employee ARZAAN;
    // harry.a = 134; -->This will throw error as a is private!!!
    ARZAAN.d = 34;
    ARZAAN.e = 89;
    ARZAAN.setData(1,2,4);
    ARZAAN.getData();
    return 0;
}
