#include <bits/stdc++.h>
using namespace std;

//naive solution
/* Function to get no of set bits in binary
representation of positive integer n */
unsigned int countSetBits(unsigned int n)
{
	unsigned int count = 0;
	while (n) {
		count += n & 1;
		n >>= 1;
	}
	return count;
}

//Using brian kerningam's algorithm
class gfg {
	/* Function to get no of set bits in binary
representation of passed binary no. */
public:
	unsigned int countSetBits(int n)
	{
		unsigned int count = 0;
		while (n) {
			n &= (n - 1);
			count++;
		}
		return count;
	}
};

// Using Lookup table
int BitsSetTable256[256];

// Function to initialise the lookup table
void initialize()
{

	// To initially generate the
	// table algorithmically
	BitsSetTable256[0] = 0;
	for (int i = 1; i < 256; i++)
	{
		BitsSetTable256[i] = BitsSetTable256[i & (i - 1)] + 1;
	}
}

// Function to return the count
// of set bits in n
int countSetBits(int n)
{
	return (BitsSetTable256[n & 0xff] +
			BitsSetTable256[(n >> 8) & 0xff] +
			BitsSetTable256[(n >> 16) & 0xff] +
			BitsSetTable256[n >> 24]);
}

/* Program to test function countSetBits */
int main()
{   
    gfg g;
    // Initialise the lookup table
	initialize();
	int i = 13;
    int n = 13;
	cout << countSetBits(i) << endl;
    cout << g.countSetBits(i) << endl;
    cout << countSetBits(n) << endl;
	return 0;
}