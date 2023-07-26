#include <iostream>
#include <string>
using namespace std;

int main() {
    string add, name, no;
    int meternumber;
    int newreading, currentreading, oldreading;
    cout << "enter the name of the customer-";
    cin >> name;
    cout << "enter the contact number of the customer-";
    cin >> no;
    cout << "enter the address of the customer-";
    cin >> add;
    cout << "enter the meter number of the customer-";
    cin >> meternumber;
    cout << "enter the old reading of the customer-";
    cin >> oldreading;
    cout << "enter the new reading of the customer-";
    cin >> newreading;
    currentreading = newreading - oldreading;
    
    float tax, charges, newcharges;
    
    if (currentreading >= 1 && currentreading <= 100) {
        charges = currentreading * 0.8;
        tax = (charges * 2) / 100;
        
    } else if (currentreading > 100 && currentreading <= 300) {
        charges = currentreading * 1;
        tax = (charges * 5) / 100;
        
    } else if (currentreading > 300 && currentreading <= 500) {
        charges = currentreading * 1.2;
        tax = (charges * 7) / 100;
    
    } else if (currentreading > 500 && currentreading <= 800) {
        charges = currentreading * 2;
        tax = (charges * 11) / 100;
    
    } else if (currentreading > 800 && currentreading <= 1200) {
        charges = currentreading * 2.5;
       tax = (charges * 15) / 100;
    
    } else if (currentreading > 1200) {
        charges = currentreading * 3.40;
       tax = (charges * 18) / 100;
        
    }
    
    cout << "         ELECTRICITY BILL" << endl;
    cout << "name of customer is-" << name << endl;
    cout << "contact number of customer is-" << no << endl;
    cout << "address of customer is-" << add << endl;
    cout << "meter number of customer is-" << meternumber << endl;
    cout << "meter rent is Rs.50" << endl;
    cout << "current reading of customer is-" << currentreading << endl;
    newcharges = charges + tax;
    float totalcharges = charges+50;
   cout << "tax of customer is equal to-" << tax << endl;
    cout << "total electricity charges=" << charges << endl;
    cout << "        THE END" << endl;
    
    return 0;
}

