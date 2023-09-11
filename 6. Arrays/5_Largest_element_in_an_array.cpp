#include <bits/stdc++.h>
using namespace std;

// Naive solution

int getlargest(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        bool flag = true;
        for (int j = i; j < n; ++j) {
            if (arr[j] > arr[i]) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            return arr[i];
        }
    }

    return -1;
}
int main()
{
    int arr[] = { 5, 8, 20, 15 };
    cout << "Largest in given array is "
         << getlargest(arr, 4);
    return 0;
}

// Efficient solution
// C++ program to find maximum
// in arr[] of size n
#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
	int i;
	
	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements
	// from second and compare
	// every element with current max
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

// Driver Code
int main()
{
	int arr[] = {10, 324, 45, 90, 9808};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest in given array is "
		<< largest(arr, n);
	return 0;
}