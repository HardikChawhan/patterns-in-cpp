#include<iostream>
#include<string>
using namespace std;
int main(){

    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;

    for (int i = 0; i <= (2*s.length()-1); i++)
    {
        int flag = i;

        if(i>s.length()) {
            flag = (2*s.length() - i);
        }

        for (int j = 0; j <flag; j++)
        {
            cout<<s[j];
        }
        cout<<endl;
        
    }

return 0;
}