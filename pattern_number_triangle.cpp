#include <iostream>

// 1
// 2 1
// 3 2 1
// 4 3 2 1
using namespace std;
int main()
{

    int i = 1, n = 4;
    while (i <= n)
    {

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        i++;
    }

    return 0;
}