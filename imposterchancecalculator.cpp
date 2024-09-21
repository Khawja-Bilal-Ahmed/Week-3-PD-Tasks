#include<iostream>
using namespace std;
main()
{
         float imposter, player;
         int chance;
         cout << "Enter imposter count:" << endl;
         cin >> imposter;
         cout << "Enter player count: " << endl;
         cin >> player;
         chance = 100 * (imposter/player);
         cout << "Chance of being an imposter: " << chance << "%" << endl; 
}