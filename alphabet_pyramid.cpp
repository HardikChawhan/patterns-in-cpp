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

        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int k = 1; k <= 2*i+1; k++) // for entering alphabet in symatrical manner
        {
            cout<<ch;
            if (k<=breakpoint)
            {
                ch++;
            }
            else{
                ch--;
            }
        }

        for (int l = 0; l < n-i-1; l++) // for entering space
        {
            cout<<" ";
        }
        cout<<endl;
    }

return 0;
}