#include <iostream>
#include <string>
using namespace std;

double calcPostage(double weight, int zone){
    
    double postage, costPerKg;
    
    if (zone > 0 && zone < 4){
        costPerKg = 108;
    }
    if(zone > 3 && zone < 7){
        costPerKg = 130;
    }

    postage = costPerKg*weight;

    return postage;
}

double calcVolWeight(double length, double width, double height){
    return (length*width*height)/5000;
}

double calcPostage(double weight, double length, double width, double height){
    double postage, vol_weight;
    const double costPerKg = 70;

    vol_weight = calcVolWeight(length, width, height);
    postage = max(weight, vol_weight)*costPerKg;

    return postage;
}


int main() 
{ 
    char company;
    double weight, postage;
    do{
    cout << "Enter the company you want to use to send the parcel ('d' for DHL and 'g' for GlobalMail): " << endl;
    cin >> company;} 
    while(!(company == 'd' || company == 'g'));

    cout << "Enter the weight of the parcel (in kg): " << endl;
    cin >> weight;
    
    if(company == 'g'){
        int zone;
        while(zone < 1 || zone > 6)
        {
            cout << "Enter the zone to which the parcel will be sent (1-6): " << endl;
            cin >> zone;
        }
        postage = calcPostage(weight, zone);
        cout << "The final postage cost is R" << postage << endl;
    }
    else if(company == 'd'){
        double length, width, height;

        cout << "Enter the length of the parcel (in cm): " << endl;
        cin >> length;
        cout << "Enter the width of the parcel (in cm): " << endl;
        cin >> width;
        cout << "Enter the height of the parcel (in cm): " << endl;
        cin >> height;

        postage = calcPostage(weight, length, width, height);
        cout << "The final postage cost is R" << postage << endl;
    }

    return 0;
}