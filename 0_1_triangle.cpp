#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 0; i <n; i++)
    {
        int start =1;
        if (i%2==0) // to check which value to start from
        {
            start = 1;
        }
        else{
            start = 0;
        }
        
        for (int j = 0; j <=i; j++)
        {
            cout<<start<<" ";
            start = 1 - start; // to toggle between the values 0 and 1 in a row
        }
        cout<<endl;
    }

return 0;
}