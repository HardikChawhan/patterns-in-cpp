#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

return 0;
}

// time complexity of this code is O(n^2)