#include<iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int a;
    cout<<"Enter any integer"<<endl;
    cin>>a; 
    if(isPrime(a))
        cout<<"Prime number"<<endl;
    else
        cout<<"Not a prime number"<<endl;
    return 0;
}

bool isPrime(int n){
    if(n==1)return false;
    if(n==2 || n==3)return true;
    if(n%2==0 || n%3==0)return false;
    for(int i=5; i*i<=n; i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}