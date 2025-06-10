#include <iostream>
using namespace std;
int main()
{
    // pointers -----------------------
    //(it's a special type of datatype)

    int a = 12;
    int *ptr = &a;
    cout << ptr << "\n";
    cout << *ptr << "\n";
    cout << a << "\n";
    cout << &a << "\n";

    return 0;
    ;
}
