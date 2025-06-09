#include <iostream>
#include <string>

using namespace std;
int main()
{
    // STRING ------------------------

    string name = "sougata paul";
    cout << "the name is " << name << "\n";
    cout << "the length of the name is " << name.length() << "\n";
    cout << "the name is " << name.substr(1, 6) << "\n";
    cout << "the name is " << name.substr(9, 11) << "\n";
    cout << "the name is " << name.substr(0, 5) << "\n";
    cout << "the name is " << name.substr(4, 7) << "\n";
//000
    return 0;
}
