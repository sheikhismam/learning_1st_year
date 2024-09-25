#include <bits/stdc++.h>

using namespace std;

void UniqueValues(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < i; j++)
        {
            if (ar[i] == ar[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
            cout << ar[i] << " ";
    }
    cout << endl;
}
int main()
{
    int size;
    cin >> size;
    int ar[size];
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    UniqueValues(ar, size);
    return 0;
}