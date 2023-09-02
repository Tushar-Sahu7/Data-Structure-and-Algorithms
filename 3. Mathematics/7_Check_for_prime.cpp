#include<iostream>
using namespace std;

bool isPrime(int n);
bool isPrime1(int n);
bool isPrime2(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    if(isPrime(n))
        cout<<"Prime"<<endl;
    else
        cout<<"Not a Prime"<<endl;

    if(isPrime1(n))
        cout<<"Prime"<<endl;
    else
        cout<<"Not a Prime"<<endl;
    
    if(isPrime2(n))
        cout<<"Prime"<<endl;
    else
        cout<<"Not a Prime"<<endl;
    return 0;
}
//Naive Method
//Time Complexity bigO(n)
bool isPrime(int n){
    if(n==1)
        return false;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;
    return true;
}

//Efficient Method
//Time Complexity bigO(✓n)
bool isPrime1(int n){
    if(n==1)
        return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

//More Efficient Method
//approximately 3 times more fast
bool isPrime2(int n){
    if(n==1)
        return false;
    if(n==2 || n==3)
        return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5; i*i<=n; i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}