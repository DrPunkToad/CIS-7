#include <iostream>
using namespace std;

int main()
{
    //constants for minimum income and years
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income; //annual income
    int years;  //years at job

    //get annual income
    cout << "What is your annual income? ";
    cin >> income;

    //get number of years at current job
    cout << "How many years have you worked at your current job? ";
    cin >> years;

    //determine users loan qualifications
    if (!(income >= MIN_INCOME || years > MIN_YEARS))
    {
        cout << "You must earn at least $"
        << MIN_INCOME << " or have been "
        << "employed more than " << MIN_YEARS
        << " years.\n";


    }
    else 
    cout << "You qualify.\n";
    return 0;

}