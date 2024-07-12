#include <fstream>
#include <cassert>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int total_members, num_specials, num_wine;
    double bill_amount;
    int num_families_with_special = 0;
    double total_commission = 0.0;
    int total_people = 0;
    double total_spent = 0.0;

    ifstream inStream("orders.dat");
    if (inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1);
    }
    ofstream outStream("result.dat", ios::app);
    if (outStream.fail())
    {
        cout << "Output file opening failed.\n";
        exit(1);
    }

    outStream.setf(ios::fixed);
    outStream.setf(ios::showpoint);
    outStream.precision(2);

    while (inStream >> total_members >> num_specials >> num_wine >> bill_amount)
    {
        // Check if the family qualifies for the discount
        if (total_members >= 5 && num_specials >= 4 && num_wine >= 2)
        {
            num_families_with_special++;
            total_commission += 0.03 * bill_amount;
        }
        // Accumulate the total people and the total amount spent
        total_people += total_members;
        total_spent += bill_amount;
    }

    // Calculate the average spent per person
    double average_spent_per_person = total_spent / total_people;

    // Write the results to the output file
    outStream << "Number of families that ordered the special: " << num_families_with_special << endl;
    outStream << "Commission earned from the special meal: R" << total_commission << endl;
    outStream << "Average spent per person for the evening: R" << average_spent_per_person << endl;

    // Close the file streams
    inStream.close();
    outStream.close();
    

    return 0;
}