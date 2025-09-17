#include <iostream>

using namespace std;

int main()
{

    int j = 1, n = 4;

    while (j <= n)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << " * ";
        }
        cout << endl;
        j++;
    }
}