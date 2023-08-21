#include <iostream>
using namespace std;

int main()
{
    int n, arr[n];
    cout << " Enter size of Array" << endl;
    cin >> n;
    cout << "Enter elements of Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int j = i - 1;
        while (arr[j] > curr && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }

    cout << "Elements of Array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
