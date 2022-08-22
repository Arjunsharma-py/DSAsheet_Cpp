#include<iostream>

using namespace std;

int main()
{
    int n, min, max;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n]{0};
    cout<<"Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    min, max = arr[0], arr[0];
    for (int i = 1; i < n; i++)
    {
        if(min>arr[i])
            min = arr[i];

        if(max<arr[i])
            max = arr[i];
    }
    cout<< "Minimum value in array is :" << min << endl;
    cout<< "Maximum value in array is :" << max;
    return 0;
}