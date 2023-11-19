#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

return 0;
}

// time complexity of this code is O(n^2)