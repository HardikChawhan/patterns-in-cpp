#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    // upper part
    int space = 0;
    for (int i = 0; i <n; i++)
    {
        // star
        for (int j = 0; j < n-i; j++)
        {
            cout<<"*";
        }
        
        // space
        for (int k = 0; k < space; k++)
        {
            cout<<" ";
        }
        space += 2;
        
        // star
        for (int l = 0; l < n-i; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    // lower part
    space = 2*n-2;
    for (int i = 0; i <n; i++)
    {
        // star
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        
        // space
        for (int k = 0; k < space; k++)
        {
            cout<<" ";
        }
        space -= 2;
        
        // star
        for (int l = 0; l < i+1; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

return 0;
}