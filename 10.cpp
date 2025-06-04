// functions-------------
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter first number ";
    cin >> a;
    cout << "enter second number";
    cin >> b;
    cout << add(a, b) << "\n";
    cout << add(10, 6);
    return 0;
}
