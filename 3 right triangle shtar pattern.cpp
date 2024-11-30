#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        int a = n-i;
        for(int j=1; j<=a; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/* Enter number of rows : 5 */
// *****
// ****
// ***
// **
// *