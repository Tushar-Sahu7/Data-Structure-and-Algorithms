#include <bits/stdc++.h>
using namespace std;

//Iterative function to print from N to 1
void PrintReverseOrder(int N)
{

	for (int i = N; i > 0; i--)
		cout << i << " ";

}

// Driven Code
int main()
{
	int N = 5;

	PrintReverseOrder(N);

	return 0;
}