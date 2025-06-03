#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;
    getline(cin, ourString);

    int stringLength = ourString.size();
    int countLength = 0;

    stringstream ss(ourString);
    string word;

    while (ss >> word)
    {
        int wordLength = word.size() + 1;
        countLength = countLength + wordLength;

        reverse(word.begin(), word.end());
        cout << word;
        if ((countLength - 1) != stringLength)
        {
            cout << " ";
        }
    }

    return 0;
}