#include <bits/stdc++.h>
using namespace std;

// Function to check if x is power of 2
bool isPowerOfTwo(int n)
{
	if (n == 0)
		return false;

	return (ceil(log2(n)) == floor(log2(n)));
}

// Using brain kerningam's algorithm
/* Function to check if x is power of 2*/
bool isPowerofTwo(long long n)
{
	return (n != 0) && ((n & (n - 1)) == 0);
}

// Driver code
int main()
{
	// Function call
	isPowerOfTwo(31) ? cout << "Yes" << endl
					: cout << "No" << endl;
	isPowerOfTwo(64) ? cout << "Yes" << endl
					: cout << "No" << endl;
	isPowerofTwo(31) ? cout << "Yes" << endl
					: cout << "No" << endl;
	isPowerofTwo(64) ? cout << "Yes" << endl
					: cout << "No" << endl;

	return 0;
}