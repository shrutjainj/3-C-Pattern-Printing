#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int k=1;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<k<<" ";
            k+=2;
        }
            cout<<endl;
    }
    
    return 0;
}
/*Enter number : 4*/
// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
