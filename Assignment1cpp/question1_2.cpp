#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double temp[100];

    for (int i = 0; i < N; i++)
    {
        cin >> temp[i];
    }

    int skipped = 0;

    cout << "Valid readings   : ";

    for (int i = 0; i < N; i++)
    {
        if (temp[i] < 0)
        {
            skipped++;
            continue;
        }

        cout << temp[i] << "  ";
    }

    cout << endl;
    cout << "Skipped (errors) : " << skipped << endl;

    for (int i = 0; i < N; i++)
    {
        if (temp[i] >= 45)
        {
            cout << "First CRITICAL   : Index " << i
                 << " -> " << temp[i] << "C" << endl;
            break;
        }
    }

    double minTemp = 0, maxTemp = 0, sum = 0;
    int count = 0;

    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    for (int i = 0; i < N; i++)
    {
        if (temp[i] < 0)
            continue;

        if (count == 0)
        {
            minTemp = temp[i];
            maxTemp = temp[i];
        }
        else
        {
            if (temp[i] < minTemp)
                minTemp = temp[i];

            if (temp[i] > maxTemp)
                maxTemp = temp[i];
        }

        sum += temp[i];
        count++;
    }

    double avg = sum / count;

    cout << fixed << setprecision(2);

    cout << "Min : " << minTemp
         << "C    Max : " << maxTemp
         << "C    Avg : " << avg << "C" << endl;

    cout << "Normal:" << normal
         << "   Warning:" << warning
         << "   Critical:" << critical
         << "   Shutdown:" << shutdown << endl;

    return 0;
}