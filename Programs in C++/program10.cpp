#include <iostream>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter the last number of the series:" << endl;
    cin >> n;

    cout<<"Obtained series is:-"<<endl;
    for (int i = 1; i <= n; i++)
    {
        j = 2 * i;
        cout << j << " ";

        j = (2 * i) - 1; // or j = j-1;
        cout << j << " ";
    }

    return 0;
}