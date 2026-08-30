#include <iostream>
using namespace std;

int main()
{
    int statusReg  = 0b10110001;
    int controlReg = 0b00000000;
    int dataReg    = 0b11001010;

    const int* regPtr1 = &statusReg;

    cout << "Status Register : " << *regPtr1 << endl;

    // *regPtr1 = 10;      // Error: cannot modify value through const int*
    // regPtr1 = &dataReg; // Allowed actually: const int* can be repointed

    int* const regPtr2 = &controlReg;

    *regPtr2 = 0b11110000;

    cout << "Control Register : " << *regPtr2 << endl;

    // regPtr2 = &dataReg; // Error: const pointer cannot be repointed

    const int* const regPtr3 = &statusReg;

    cout << "Status Register : " << *regPtr3 << endl;

    // *regPtr3 = 10;      // Error: cannot modify value
    // regPtr3 = &dataReg; // Error: const pointer cannot be repointed

    return 0;
}