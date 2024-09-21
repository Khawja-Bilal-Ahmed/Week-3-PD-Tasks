#include<iostream>
using namespace std;
main()
{
         int minutes, fps, totalframes;
         cout << "Enter number of minutes:" << endl;
         cin >> minutes;
         cout << "Enter number of frames per second:" << endl;
         cin >> fps;
         totalframes = fps * minutes;
         totalframes = totalframes * 60;
         cout << "Total number of frames: " << totalframes << endl; 

}