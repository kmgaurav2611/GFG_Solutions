#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int nob, nog;
        cin >> nob >> nog;
        int b[nob], g[nog];
        for (int i = 0; i < nob; i++)
            cin >> b[i];
        for (int j = 0; j < nog; j++)
            cin >> g[j];
        quickSort(b, 0, nob - 1);
        quickSort(g, 0, nog - 1);
        if (nob <= nog)
        {
            int flag = 0;
            for (int k = 0; k < (nob >= nog ? nog : nob); k++)
                if (b[k] <= g[k])
                    flag = 1;
            flag == 0 ? cout << "YES\n" : cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}