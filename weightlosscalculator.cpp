#include<iostream>
using namespace std;
main()
{
         string name;
         int weightloss, days;
         cout << "Enter the name of the person:" << endl;
         cin >> name;
         cout << "Enter the target weight loss in kilograms: " << endl;
         cin >> weightloss;
         days = weightloss * 15;
         cout << name << " will need " << days << " days to lose " << weightloss << " kg of weight by following the doctor's suggestions" << endl;  


}