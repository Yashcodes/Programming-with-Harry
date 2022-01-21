#include <iostream>
using namespace std;

int main()
{
    /* Loops in C++
    There are three types of loops in C++
    
    1. For Loop
    2. While Loop
    3. Do-While Loop
    */

    // For Loop in C++.............................

    // Syntax for :- for-loop
    // for (initialisation; condition; updation;)
    // {
    //     loop body(C++ code);
    // }

    int i = 0;

    cout << "The numbers are following:- " << endl;
    // for (i = 1; i <= 100; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    // Example of "infinite for loop"
    // for (i = 1; 50 <= 100; i++)
    // {
    //     /* code */
    //     cout << i << endl;
    // }

    // While Loop in C++.............................

    // Syntax: 
    // while (condition)
    // {
    //    C++ statements;
    // }

    // Printing 1 to 40 using while loop

    // i=1;

    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Example of "infinite while loop"

    // i=1;

    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }
    
    
    // do-While Loop in C++.............................

    // Syntax: 
    //  do{
    //      C++ statements;
    //  }while(condition);

    // Printing 1 to 40 using do-while loop

    // i=1;

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (i<=40);

    // Example of "infinite do-while loop"

    // i=1;

    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (true);

    return 0;
}