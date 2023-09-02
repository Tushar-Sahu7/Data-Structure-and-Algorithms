#include<iostream>
using namespace std;

bool isPal(int n);

int main()
{
    int n;
    cout<<"Enter any interger"<<endl;
    cin>>n;
    if(isPal(n))
        cout<<"palindrome"<<endl;
    else
        cout<<"not a palindrome"<<endl;
    return 0;
}

//Time complexity ⊖(n)
bool isPal(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10 + ld;
        temp/=10;
    }
    return (rev==n);
}