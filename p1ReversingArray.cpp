#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n, temp=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n]{0};
    cout<<"Enter the elements of array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Reversed array is : ";

    for (int i = 0; i < int(n/2); i++)
    {
        temp = arr[(n-1)-i];
        arr[(n-1)-i] = arr[i];
        arr[i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}