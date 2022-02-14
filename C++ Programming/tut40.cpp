#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_Number(int);
    void get_roll_Number(void);
};

void Student::set_roll_Number(int r)
{
    roll_number = r;
}

void Student::get_roll_Number(void)
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks(void)
{
    cout << "The marks obtained in Physics are : " << physics << endl;
    cout << "The marks obtained in Maths are : " << maths << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_Number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{

    /*
    Notes:
        If we are inheriting B from A and C from B: [A--->B--->C]:- 
        1. A is the base class for B and B is the base class for C;
        2. A-->B-->C is called inheritance path;
    */

    Result yash;

    yash.set_roll_Number(301);
    yash.set_marks(94, 96.7);
    yash.display();
    return 0;
}