#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter the number to check prime or not ";
    cin >> n;

    for (i = 2; i <= (n - 1); i++)

    {
        if (n % i == 0)
            break;
    }
    if (n == i)
    {
        cout << "It is a prime number";
    }

    else
    {
        cout << "It is not a prime number";
    }

    return 0;
}