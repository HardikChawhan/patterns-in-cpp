#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j<(n-i); j++)
        {
            cout<<" ";
        }

        // for star
        for (int k = 0; k<(2*i + 1); k++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    

return 0;
}