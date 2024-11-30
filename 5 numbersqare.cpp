#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<"Enter a number" ;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cout<<i<<" ";
        for(int j=i; j<=n; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
/* Enter a number 8 */
//1 12345678
//2 2345678
//3 345678
//4 45678
//5 5678
//6 678
//7 78
//8 8