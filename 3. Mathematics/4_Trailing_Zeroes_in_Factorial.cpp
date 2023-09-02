#include<iostream>
using namespace std;

int countZero(int n);
int countZero1(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    cout<<countZero(n)<<" "<<countZero1(n)<<endl;
    return 0;
}

//Time complexity ⊖(n)
int countZero(int n){
    unsigned long long int fact=1;
    for(int i=2;i<=n;i++)
        fact=fact*i;
    cout<<fact<<endl;
    int res=0;
    while(fact%10==0){
        res++;
        fact=fact/10;
    }
    return res;
}

//Efficient Method
//Time complexity ⊖(log n)
int countZero1(int n){
    int res=0;
    for(int i=5;i<=n;i*=5)
        res = res + n/i;
    return res;
}