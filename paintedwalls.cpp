#include<iostream>
using namespace std;
main()
{        
         float area ,width ,height;
         int paintedwalls; 
         cout << "Enter number of square meters you can paint: " << endl;
         cin >> area;
         cout << "Enter width of single wall (in meters): " << endl;
         cin >> width;
         cout << "Enter height of single wall in meters: " << endl;
         cin >> height;
         paintedwalls = area/(width * height);
         cout << "Number of walls you can paint: " << paintedwalls << endl;
        
        }