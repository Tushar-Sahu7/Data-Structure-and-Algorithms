#include<iostream>
using namespace std;

void printDivisors(int n);
void printDivisors1(int n);
void printDivisors2(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    printDivisors(n);
    printDivisors1(n);
    printDivisors2(n);
    return 0;
}

//Naive Solution
//Time complexity ⊖(n)
void printDivisors(int n){
    for(int i=1; i<=n; i++)
        if(n%i==0)
            cout<<i<<" ";
}

//Efficient Solution
//Time complexity bigO(sqrt(n))
//Not sorted
void printDivisors1(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i)
                cout<<n/i<<" ";
        }
    }
}

//Other solution
//Time complexity bigO(sqrt(n))
//sorted
void printDivisors2(int n){
    int i;
    for( i=1; i*i<n; i++)
        if(n%i==0)
            cout<<i<<" ";
    for( ; i>=1; i-- )
        if(n%i==0)
            cout<<n/i<<" ";
}