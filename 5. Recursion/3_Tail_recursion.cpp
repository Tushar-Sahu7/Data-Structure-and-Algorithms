// This is a Tail Recursion

void printN(int N)
{
    if(N==0)
        return;
    else
        cout<<N<<" ";
    
    printN(N-1);
}

//Not a Tail Recursion
int fact(int N) 
{ 
    if (N == 0) 
        return 1; 
  
    return N*fact(N-1); 
} 

//This is a Tail Recursion
int factTR(int N, int a) 
{ 
    if (N == 0)  
        return a; 
  
    return factTR(N-1, N*a); 
}

#include<iostream>
using namespace std;

int main()
{
    
    return 0;
}