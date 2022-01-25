#include <iostream>
using namespace std;

int main()
{
    int opr, n, i;

    cout << "Enter the last number of the series:" << endl;
    cin >> n;

    cout << "Choose any one option:-" << endl;
    cout << "1. Series of Even number" << endl
         << "2. Series of Odd number" << endl;
    cin >> opr;

    for (int i = 1; i <= n; i++)
    {
        switch (opr)
        {
        case 1:
            if ((i % 2) == 0)
                cout << i << " ";
            break;

        case 2:
            if ((i % 2) == 1)
                cout << i << " ";
            break;

        default:
            cout <<"Choose the correct option";
            break;
        }
    }

    return 0;
}