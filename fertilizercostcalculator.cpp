#include<iostream>
using namespace std;
main()
{
        int bagsize,bagcost,area ,cfpp,cfpsqf;              /* cfpp = cost of fertlizer per pound && cfpsqf = cost of fertilizing per sq ft*/
        cout << "Enter size of fertilizer bag in pounds: " << endl;
        cin >> bagsize;
        cout << "Enter the cost of the bag: $" << endl;
        cin >> bagcost;
        cout << "Enter the area in square feet that can be covered by the bag: " << endl; 
        cin >> area;
        cfpp = bagcost/bagsize;
        cfpsqf = bagsize * area;
        cout << " Cost of fertilizing per pound: $" << cfpp << endl;
        cout << " Cost of fertilizing per square foot: $" << cfpsqf << endl;

 
}