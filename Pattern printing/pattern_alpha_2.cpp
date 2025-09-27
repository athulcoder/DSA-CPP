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

        for (int j = 0; j < n; j++)
        {
            char ch = 'A' + j;
            cout << ch;
        }
        cout << endl;
        i++;
    }
}