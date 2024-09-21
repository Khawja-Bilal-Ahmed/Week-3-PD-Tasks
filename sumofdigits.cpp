#include<iostream>
using namespace std;
main()
{        int number ,digit1 ,digit2 ,digit3 ,digit4 ,sum;
         cout << "Enter a 4 digit number: " << endl;
         cin >> number;
         digit1 = number/1000;
         digit2 = (number/100) % 10;
         digit3 = (number/10) % 10;
         digit4 = (number%10);
         sum = digit1 + digit2 + digit3 + digit4;
         cout << "Sum of the individual digits: " << sum << endl;
       }