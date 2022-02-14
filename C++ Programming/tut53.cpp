#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // void setData(int a)
    // {
    //     this->a = a;
    // }

    // void getData()
    // {
    //     cout << "The value of a is " << a << endl;
    // }
    // Or by the definition written below (in the main body), we can declare member functions as below syntax because we are using the "this" pointer to access the member variables of the class.
    // Since this points to the object of the class,  so it returns that object

    A & setData(int a){
        this->a = a;
        return *this;
    }

    void getData(void){
        cout <<"The value of a is "<<a<<endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function
    A a;
    // a.setData(4);
    // a.getData();

    // since setData is returning the object of the class, so we can use getData function along with the setData function. The format if the code is described below.
    a.setData(9).getData();

    return 0;
}