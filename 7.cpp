#include <iostream>
using namespace std ; 
int main (){
// if else------

int age ; 
cout<<"enter your age ";
cin>> age;

 if (age >111)
{
cout<<"user input invalid";
}
 else if (age <1)
{
cout<<"user input invalid";
}
else if(age<18)
{
    
    cout<<"you cann't drive ";
}

else {
    cout<<"you can drive , you are adult now";
}

    return 0;
}
