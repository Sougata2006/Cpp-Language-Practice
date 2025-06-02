#include <iostream>
using namespace std;
int main()
{
    // switch statement ----
    int age;
    cout << "enter age ";
    cin >> age;
    switch (age)
    {
    case 15:
        cout << "you are 15 yrs old";
        break;
    case 20:
        cout << "you are 20 yrs old";
        break;
    default:
        cout << "you are none ";
        break;
    }
    return 0;
}
