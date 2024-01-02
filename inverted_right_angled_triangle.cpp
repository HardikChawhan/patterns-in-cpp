#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++) // space
        {
            cout<<" ";
        }
        
        for (int k = 0; k <= i; k++) // star
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}