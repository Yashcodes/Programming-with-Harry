#include<iostream>
using namespace std;
                 
                         //   **********************UNIONS**************************

// Structure contains the different types of data types/elements

// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };

    // ***********OR**********
    
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;
}ep;


                                //   **********************UNIONS**************************

// When we have to use any one kind of data type then we use "union" since it provides us the facility to use one kind of data type at a time and if we had defined a data type previously and then we want to use other data type element in the same main function then the second type of data type we'll overwrites the first kind of data type.

//  So if we want to print the previously declared data type then it will not show the actual value instead it prints the garbage value 

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};


int main(){
    // struct employee yash;       // or we can use "ep" in the place of "struct employee" after defining the keyword "typedef with ep";

    // yash.eId = 1;
    // yash.favChar = 'c';
    // yash.salary = 2590000000;

    // cout<<"The Value is "<<yash.eId<<endl;
    // cout<<"The Value is "<<yash.favChar<<endl;
    // cout<<"The Value is "<<yash.salary<<endl;

//_______________________________________________________________________________________________________________________________________________


    // union money m1;
    
    // m1.rice = 34;
    // m1.car = 'c';

    // // cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;

    enum Meal{ breakfast, lunch, dinner};

    Meal m1 = lunch;
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    //  cout<<m1<<endl;
    //  cout<<(m1==1)<<endl;
     cout<<(m1==2)<<endl;
    return 0;
}
