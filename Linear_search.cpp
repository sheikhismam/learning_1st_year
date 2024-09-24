#include <iostream>

using namespace std;

int linearSearch(int ar[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == target)
            return i;
    }
    return -1;
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
    int target;
    cin >> target;
    cout << linearSearch(ar, size, target) << endl;
    return 0;
}