#include<iostream>
using namespace std;
int main()
{
    int n , i;
    cout<<"Enter the number";
    cin>>n;

    int sum = 0;

    for( i = 1; i<=n; i=i+1)
    {
     sum = sum + i;
    }
    cout<<sum;
    return 0;
    


    




}