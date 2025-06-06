#include <iostream>
using namespace std;
int main()
{

    int marks[7];
    for (int i = 0;i<7;i++)
    {
        cout << "enter your " << i << "th sub number \n";
        cin>>marks[i];
    }
    for(int i = 0;i<7;i++)
    {
        cout<<"the number of "<<i<<"th sub is "<<marks[i]<<"\n";
    }
    return 0;
}
