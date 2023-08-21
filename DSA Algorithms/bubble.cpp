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

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    cout << "Elements of Array are : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
