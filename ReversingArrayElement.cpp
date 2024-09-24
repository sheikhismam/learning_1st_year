#include <iostream>

using namespace std;

void ReversingArray(int ar[], int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        swap(ar[i], ar[j]);
        i++;
        j--;
    }
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

    ReversingArray(ar, size);

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}