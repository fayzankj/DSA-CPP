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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Elements of Array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}