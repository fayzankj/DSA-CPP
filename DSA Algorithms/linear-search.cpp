#include <iostream>
using namespace std;
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout<<"Your key is at index : ";
            return i;
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

    cout << "Enter key to find"<< endl;
    cin >> key;

    cout << linearsearch(arr, n, key);

    return 0;
}
