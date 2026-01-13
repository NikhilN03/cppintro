#include <iostream>

int main()
{
    using std::cin;
    using std::cout;

    constexpr int kCentsPerQuarter = 25;
    constexpr int kCentsPerDime = 10;
    constexpr int kCentsPerNickel = 5;
    constexpr int kCentsPerPenny = 1;

    int cents = 0;

    cout << "Enter amount in cents (0 - 999): ";
    if (!(cin >> cents) || cents < 0 || cents > 999)
    {
        cout << "Invalid Input\n";
        return 1;
    }

    const int quarters = cents / kCentsPerQuarter;
    cents %= kCentsPerQuarter;

    const int dimes = cents / kCentsPerDime;
    cents %= kCentsPerDime;

    const int nickels = cents / kCentsPerNickel;
    cents %= kCentsPerNickel;

    const int pennies = cents / kCentsPerPenny;

    cout << "Quarters: " << quarters << '\n'
         << "Dimes:    " << dimes << '\n'
         << "Nickels:  " << nickels << '\n'
         << "Pennies:  " << pennies << '\n';

    return 0;
    
}