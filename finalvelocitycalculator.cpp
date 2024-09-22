#include<iostream>
using namespace std;
main()
{
         int vi,vf,a,t ;                                              /* vi= initial velocity , vf = final velocity, a = acceleration , t = time*/
         cout << "Enter initial velocity (m/s):" << endl;
         cin >> vi;
         cout << "Enter acceleration (m/s^2): " << endl;
         cin >> a;
         cout << "Enter time: (s)" << endl; 
         cin >> t;
         vf = vi + (a*t);
         cout << "Final velocity is (m/s): " << vf << endl; 
}
