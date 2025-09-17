#include <iostream>

using namespace std;
// A A A
// B B B
// C C C
int main()
{

    int i = 0, n = 4;
    while (i < n)
    {
        char ch = 'A' + i;
        for (int j = 0; j < n; j++)
        {
            cout << ch;
        }
        cout << endl;
        i++;
    }
}