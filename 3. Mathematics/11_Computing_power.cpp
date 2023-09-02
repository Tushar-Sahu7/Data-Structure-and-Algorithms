#include<iostream>
using namespace std;

int power(int x, int n);
int power1(int x, int n);

int main()
{
    int x,n;
    cout<<"Enter the number and its power"<<endl;
    cin>>x>>n;
    cout<<power(x, n);
    cout<<endl;
    cout<<power1(x, n);

    return 0;
}

//Naive solution
//Time complexity ⊖(n)
int power(int x, int n){
    int res=1;
    for(int i=0; i<n; i++)
        res*=x;
    return res;
}

//Efficient solution
//Time complexity ⊖(log(n))
//Auxiliary space ⊖(log(n))
int power1(int x, int n){
    if(n==0) 
        return 1;
    int temp=power1(x,n/2);
    temp*=temp;
    if(n%2==0)
        return temp;
    else
        return temp*x;
}