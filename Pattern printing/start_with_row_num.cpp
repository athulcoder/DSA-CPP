#include <iostream>

using namespace std;

// int main()
// {

//     int j = 1, n = 5;

//     while (j <= n)
//     {

//         int val = j;
//         for (int i = 1; i <= j; i++)
//             cout << val++;
//         cout << endl;
//         j++;
//     }
// }

// OR

int main()
{

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j + i - 1;
        }
        cout << endl;
    }
}
