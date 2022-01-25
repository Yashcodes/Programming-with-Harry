#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the value of n;" << endl;
    cin >> n;

    for (char i = 65; i <= n; i++)
    {
        cout<<i<<" ";
    }

    return 0;
}