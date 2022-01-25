#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //Static variables are also known as Class variables. Now this variable "const" is not the property of object, it is the property of class
public:               //and it is shareable with all the objects made with that particular class where this static variable was defined
    void setData(void)
    {
        cout << "Enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id;     // throws an error since id is not defined as the static member
        cout<<"The value of the count is "<<count<<endl<<endl;
    }
};
// count is the static data member of the class employee
int Employee::count; // Default value of count is zero(0)
int main()
{
    Employee yash, rohit, adi;
    // yash.id=1;
    // yash.count=1;  //cannot do this as id and count are private

    yash.setData();
    yash.getData();
    Employee::getCount();

    rohit.setData();
    rohit.getData();
    Employee::getCount();

    adi.setData();
    adi.getData();
    Employee::getCount();

    return 0;
}