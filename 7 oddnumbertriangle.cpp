#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter number : ";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=2*i-1; j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
/* Enter number : 5*/
//1
//13
//135
//1357
//13579