#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double temp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> temp[i][j];
        }
    }

    cout << fixed << setprecision(1);

    cout << "        Room1   Room2   Room3" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Floor " << i + 1 << " : ";

        for (int j = 0; j < 3; j++)
        {
            cout << setw(7) << temp[i][j];
        }

        cout << endl;
    }

    double hottest = temp[0][0];
    int hotFloor = 0;
    int hotRoom = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp[i][j] > hottest)
            {
                hottest = temp[i][j];
                hotFloor = i;
                hotRoom = j;
            }
        }
    }

    cout << "Hottest Room  : Floor " << hotFloor + 1
         << ", Room " << hotRoom + 1
         << " -> " << hottest << "C" << endl;

    double highestAvg = 0;
    int hottestFloor = 0;

    for (int i = 0; i < 3; i++)
    {
        double sum = 0;

        for (int j = 0; j < 3; j++)
        {
            sum += temp[i][j];
        }

        double avg = sum / 3;

        if (i == 0 || avg > highestAvg)
        {
            highestAvg = avg;
            hottestFloor = i;
        }
    }

    cout << "Hottest Floor : Floor " << hottestFloor + 1
         << " (avg " << highestAvg << "C)" << endl;

    int warning = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (temp[i][j] >= 30)
            {
                warning++;
            }
        }
    }

    cout << "Rooms at WARNING or above : " << warning << endl;

    return 0;
}