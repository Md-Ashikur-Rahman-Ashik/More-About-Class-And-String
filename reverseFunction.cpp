#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int arraySize;
    // cin >> arraySize;

    // int integerArray[arraySize];

    // for (int i = 0; i < arraySize; i++)
    // {
    //     cin >> integerArray[i];
    // }

    // for (int i = arraySize - 1; i >= 0; i--)
    // {
    //     cout << integerArray[i] << " ";
    // }

    // reverse(integerArray, integerArray + arraySize);

    // for (int i = 0; i < arraySize; i++)
    // {
    //     cout << integerArray[i] << " ";
    // }

    string ourString;
    cin >> ourString;

    reverse(ourString.begin(), ourString.end());

    cout << ourString;

    return 0;
}