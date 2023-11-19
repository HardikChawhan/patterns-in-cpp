#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=2*n-1;i++){
          
        // stars would be equal to the row no. uptill first half 
        int stars = i;
          
        // for the second half of the rotated triangle.
        if(i>n) stars = 2*n-i;
          
        // for printing the stars in each row.
        for(int j=1;j<=stars;j++){
          cout<<"*";
        }
          
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout<<endl;
      }

return 0;
}

// this has a time complexity of O(n)