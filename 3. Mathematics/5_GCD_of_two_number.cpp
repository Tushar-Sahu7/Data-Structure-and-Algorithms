#include<iostream>
using namespace std;

int gcd(int a, int b);
int gcd1(int a, int b);
int gcd2(int a, int b);

int main()
{
    int a, b;
    cout<<"Enter any interger"<<endl;
    cin>>a>>b;
    cout<<gcd(a, b)<<" "<<gcd1(a, b)<<" "<<gcd2(a, b)<<endl;
    return 0;
}

//Time complexity bigO(min(a, b))
int gcd(int a, int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0)
            break;
        res--;
    }
    return res;
}

//Euclidean Algorithm
//Time complexity bigO(log(min(a, b))
int gcd1(int a, int b){
    while(a!=b){
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}

//Optimizated Algorithm
//Time complexity bigO(log(max(a, b))
int gcd2(int a, int b){
    if(b==0)
        return a;
    else
        return gcd2(b, a%b);
}