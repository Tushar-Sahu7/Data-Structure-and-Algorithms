#include<iostream>
using namespace std;

int countSubsets(int arr[], int n, int sum){
    if(n==0)
        return (sum==0) ? 1 : 0;
    return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum-arr[n-1]);
}

int main()
{
    int arr[] = {10, 5, 2, 3, 6};
    cout << countSubsets(arr, 5, 8) << endl;
    return 0;
}