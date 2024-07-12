#include <cassert>
#include <iostream>
#include <string>
using namespace std;

int main(){
    const int legal_age = 18;
    const int current_year = 2024;
    int year_of_birth;

    cout << "Enter your year of birth: " << endl;
    cin >> year_of_birth;

    assert(year_of_birth < current_year);
    int age = current_year - year_of_birth;

    if(age >= legal_age)
    {
        cout << "You are old enough to vote." << endl;
    }
    else
    {
        cout << "You are not old enough to vote." << endl;
    }

    return 0;
}