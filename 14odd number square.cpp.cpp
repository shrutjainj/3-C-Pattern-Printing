#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter value : ";
    cin>>n;
    int k=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<k<<" ";
            k=k+ 2;
        }
        cout<<endl;
    }
    return 0;
}
/* Enter value : 5*/
//1  3  5  7  9
//11 13 15 17 19
//21 23 25 27 29
//31 33 35 37 39
//41 43 45 47 49