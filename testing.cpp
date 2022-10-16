#include <iostream>
using namespace std;

int main() {
	int t, n, temp=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
        cin>>n;
        int *arr = new int[n]{0};

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n/2; i++)
        {
            temp = arr[(n-1)-i];
            arr[(n-1)-i] = arr[i];
            arr[i] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
	}
	return 0;
}