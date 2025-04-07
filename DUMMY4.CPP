#include <iostream.h>
#include <conio.h>

void main()
{
    clrscr();

    cout << "Even numbers between 1 and 20 are:" << endl;

    for (int i = 1; i <= 20; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    getch();
}