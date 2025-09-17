#include <iostream>

using namespace std;

int main()
{

    int j = 1, n = 3;
    int count = 1;

    while (j <= n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << count++;
        }
        j++;
        cout << endl;
    }
}