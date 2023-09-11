#include <iostream>
using namespace std;

// Naive solution
// Function to find the longest subarray
int longestEvenOddSubarray(int a[], int n)
{
	// Length of longest
	// alternating subarray
	int ans = 1;

	// Iterate in the array
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		// Iterate for every subarray
		for (int j = i + 1; j < n; j++) {
			if ((a[j - 1] % 2 == 0 && a[j] % 2 != 0)
				|| (a[j - 1] % 2 != 0 && a[j] % 2 == 0))
				cnt++;
			else
				break;
		}
		// store max count
		ans = max(ans, cnt);
	}
	// Length of 'ans' can never be 1
	// since even odd has to occur in pair or more
	// so return 0 if ans = 1
	if (ans == 1)
		return 0;
	return ans;
}

/* Driver code*/
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 7, 8 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << longestEvenOddSubarray(a, n);
	return 0;
}

// C++ code to find longest subarray of alternating even and
// odds
// Efficient solution
#include <iostream>
using namespace std;

int maxEvenOdd(int arr[], int n)
{
	if (n == 0)
		return 0;

	int maxLength = 0;

	int currLen = 1;

	for (int i = 1; i < n; i++) {
		// everytime we check if previous
		// element has opposite even/odd
		// nature or not
		if (arr[i] % 2 != arr[i-1] % 2)
			currLen++;
		else
		{
			// store max in maxLength
			maxLength = max(maxLength, currLen);
			// reset value when pattern is broken
			currLen = 1;
		}
	}
	// since, even-odd should occur in pair
	if(maxLength == 1)
		return 0;
	return maxLength;
}

// Driver Code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 3, 7, 2, 9, 4 };
	// longest subarray should be 1 2 3 4 5 , therefore
	// length = 5
	int n = sizeof(arr) / sizeof(int);
	cout << "Length of longest subarray of even and odds "
			"is : "
		<< maxEvenOdd(arr, n);

	return 0;
}