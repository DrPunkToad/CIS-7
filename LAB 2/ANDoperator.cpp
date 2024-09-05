#include<iostream>
using namespace std;

int main()
{
    char age,  //y or n older than 21?
    newDriver;     //new driver? y or n

    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or N for No.\n";
    cout << "Are you older than 21? "; cin >> age;
    cout << "Have you been driving for at least 5 years ? ";
    cin >> newDriver;

    //determine tthe user's qualification
    if(age == 'Y' && newDriver == 'Y')
    {
        cout << "You qualify for the special interest rate.\n";  
    }
    else
    {
        cout << "You must be older than 21 and have been \n"
        << "driving for at least 5 years to qualify.";
    }

    return 0;
}