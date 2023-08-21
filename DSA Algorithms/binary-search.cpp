#include <iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while (start <= end)
    {
        int mid = (start + end )/ 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n, key, arr[n];
    cout << " Enter size of Array" << endl;
    cin >> n;
    cout << "Enter elements of Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter key to find" << endl;
    cin >> key;

    cout << binarysearch(arr, n, key);

    return 0;
}