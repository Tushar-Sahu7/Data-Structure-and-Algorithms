#include <iostream>
#include <cmath>
using namespace std;

// Naive solution
 void lRotateOne(int arr[], int n)
{
	int temp = arr[0];

	for(int i = 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}

	arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
	for(int i = 0; i < d; i++)
	{
		lRotateOne(arr, n);
	}
}
    
int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       leftRotate(arr, d, n);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}

#include <iostream>
#include <cmath>
using namespace std;


void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);

		low++;
		high--;
	}
}   

void leftRotate(int arr[], int d, int n)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);
}



int main() {
	
      int arr[] = {1, 2, 3, 4, 5}, n = 5, d = 2;

      cout<<"Before Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }

       cout<<endl;

       leftRotate(arr, d, n);

       cout<<"After Rotation"<<endl;

       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}