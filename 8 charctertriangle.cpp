#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows : ";
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<" ";
    }
    return 0;
}
/* 5 */
//ABCD
//ABCD
//ABCD
//ABCD