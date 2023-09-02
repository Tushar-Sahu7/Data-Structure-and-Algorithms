#include<iostream>
using namespace std;

int fib1(int n);
int fib2(int n);
int fib3(int n);

// 0 1 1 2 3 5 8 13 

int main()
{
    int a;
    cout<<"Enter any number"<<endl;
    cin>>a;
    for(int i=0; i<a; i++){
        cout<<fib1(i)<<endl;
    }
    cout<<endl;
    for(int i=0; i<a; i++){
        cout<<fib1(i)<<endl;
    }
    cout<<endl;
    for(int i=0; i<a; i++){
        cout<<fib1(i)<<endl;
    }
    return 0;
}

int fib1(int n){
    if(n==0 || n==1) 
        return n;
    return fib1(n-1) + fib1(n-2);
}

int fib2(int n){
    int f[n+1];
    f[0] = 0;
    f[1] = 1;
    for(int i=2; i<=n; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

//best approach in terms of auxiliary space

int fib3(int n){
    if(n==0 || n==1) 
    return n;
    int a=0, b=1, c=0;
    for(int i=2; i<=n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}