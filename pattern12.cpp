#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        // number
        for (int j = 1; j <=i; j++)
        {
            cout<<j;
        }
        
        // space
        for (int k = 1; k <= (2*n-2*i); k++)
        {
            cout<<" ";
        }

        // number
        for (int j = i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    

return 0;
}