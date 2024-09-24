#include <iostream>

using namespace std;

void SwapMaxMin(int ar[], int size)
{
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < size; i++)
    {
        if (ar[i] > ar[maxIndex])
            maxIndex = i;
        if (ar[i] < ar[minIndex])
            minIndex = i;
    }
    swap(ar[maxIndex], ar[minIndex]);
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
    SwapMaxMin(ar, size);
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}