#include <iostream>

using namespace std;

pair<long long int, long long int> SumProductsOfArray(int ar[], int size)
{
    long long sum = 0, products = 1;
    for (int i = 0; i < size; i++)
    {
        sum += ar[i];
        products *= ar[i];
    }
    return {sum, products};
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

    pair<long long int, long long int> result = SumProductsOfArray(ar, size);
    cout << "Sum: " << result.first << endl;
    cout << "Product: " << result.second << endl;
    return 0;
}