#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[50],n;
    cout<<"Enter no of elements " ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"array after sorting : ";
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i];
    }
    

    return 0;
}