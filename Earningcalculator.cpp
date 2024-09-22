#include<iostream>
using namespace std;
main()
{
        float M ,N ,totalcoins;                            /*M = vegetable price per kg && N = fruit price per kg */
        int totalveg ,totalfruit, rupees;
        cout << "Enter vegetable price per kilogram (in coins): " << endl;
        cin >> M;
        cout << "Enter fruit price per kilogram (in coins): " << endl;
        cin >> N;
        cout << "Enter total kilogram of vegetables: " << endl;
        cin >> totalveg;
        cout << "Enter total kilogram of fruits: " << endl;
        cin >> totalfruit;
        totalcoins = (M * totalveg) + (N * totalfruit);
        rupees = totalcoins/1.94;
        cout << "Total earning in rupees (Rps): " << rupees << endl;

}
