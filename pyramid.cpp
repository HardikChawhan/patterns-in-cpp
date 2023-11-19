#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 0; i < n; i++) // for outer loop (rows)
    {
        for (int j = 0; j < n-i-1; j++) // for entering space
        {
            cout<<" ";
        }

        for (int k = 0; k < 2*i+1; k++) // for entering star
        {
            cout<<"*";
        }

        for (int l = 0; l < n-i-1; l++) // for entering space
        {
            cout<<" ";
        }
        cout<<endl;
    }
    

return 0;
}