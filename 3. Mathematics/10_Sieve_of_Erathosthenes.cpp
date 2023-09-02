#include<iostream>
#include<vector>
using namespace std;

bool isPrime2(int n);
void printPrimes(int n);
void sieve(int n);
void sieve1(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    printPrimes(n);
    cout<<endl;
    sieve(n);
    cout<<endl;
    sieve1(n);
    return 0;
}

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

//Naive Solution
//Time complexity bigO(n*sqrt(n))
void printPrimes(int n){
    for(int i=2; i<=n; i++)
        if(isPrime2(i))
            cout<<i<<" ";
}

//Efficient Solution
//Time complexity bigO(n*log(log(n)))
void sieve(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=2*i; j<=n; j+=i)
                isPrime[j] = false;
        }
    }
    for(int i=2; i<=n; i++){
        if(isPrime[i])
            cout<<i<<" ";       
    }
}

//shorter implementation
void sieve1(int n){
    vector<bool> isPrime(n+1,true);
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i; j<=n; j+=i)
                isPrime[j] = false;
        }
    }
}