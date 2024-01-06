#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 1; i <= (2*n-1); i++)
    {
        if (i==n)
        {
            for (int j = 1; j <= (2*n-1); j++)
            {
                cout<<"*";
            }
        }
        else{
            for (int k = 1; k <= n-1; k++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}