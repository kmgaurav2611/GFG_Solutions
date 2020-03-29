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
        if (arr[j] >= pivot)
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

    int pokemon;
    cin >> pokemon;
    int evolDays[pokemon];
    for (int i = 0; i < pokemon; i++)
        cin >> evolDays[i];
    quickSort(evolDays, 0, pokemon - 1);

    int j, days = 0;
    for (j = 0; j < pokemon; j++)
    {
        if (evolDays[j] > days)
            days = evolDays[j];
        days--;
    }
    cout << pokemon + days + 2;
    return 0;
}