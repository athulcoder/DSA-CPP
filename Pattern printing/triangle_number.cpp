#include <iostream>

using namespace std;

int main()
{

    int j = 1, n = 4, count = 1;

    while (j <= n)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << count++;
        }
        cout << endl;
        j++;
    }
}