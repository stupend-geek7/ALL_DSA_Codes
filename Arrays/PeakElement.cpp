#include <iostream>
using namespace std;
int peakelement(int arr[], int low, int high, int n)
{
    int mid = low + (high - low) / 2;
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= mid))
    {
        return mid;
    }
    else if (arr[mid - 1] > arr[mid])
    {
        return peakelement(arr, low, mid - 1, n);
    }
    else
    {
        return peakelement(arr, mid + 1, high, n);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << peakelement(arr, 0, n - 1, n) << endl;
    return 0;
}