#include<iostream>
using namespace std;
main()
{
        string movie;
        float percenttocharity;
        int adultticket ,childticket ,adultticketsold ,childticketsold ,totalamount ,charitydonation ,remamount;
        cout << "Enter Movie Name: " << endl;
        cin >> movie;
        cout << "Enter Adult ticket price: $" << endl;
        cin >> adultticket;
        cout << "Enter Child ticket price: $" << endl; 
        cin >> childticket;
        cout << "Enter number of adults tickets sold: " << endl;
        cin >> adultticketsold;
        cout << "Enter number of child tickets sold: " << endl;
        cin >> childticketsold;
        cout << "Enter percentage of amount to be donated to the charity: " << endl;
        cin >> percenttocharity;
        totalamount = (adultticketsold * adultticket) + (childticketsold * childticket);
        charitydonation = (percenttocharity/100) * totalamount;
        remamount = totalamount - charitydonation;
        cout << "Movie: " << movie << endl;
        cout << "Total amount generated from  ticket sales: $" << totalamount << endl;
        cout << "Donation to charity (" << percenttocharity << ") : $" << charitydonation << endl;
        cout << "Remaining amount after donation: $" << remamount << endl;  
}