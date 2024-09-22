#include<iostream>
using namespace std;
main()
{
         int n, sum;                               // n = number of sides of polygon
         cout << "Enter number of sides of polygon" << endl;
         cin >> n;
         sum = (n-2) * 180;
         cout << "Sum of interior angles is " << sum << "degrees" << endl;

}
