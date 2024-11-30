#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    int a = 1;
    for(int i = 1; i<=n; i++){
        for(int j=1; j<=i; j++){
            for(int k=1;k<=j;k++){
                cout<<k<<" ";
                a+=2;
            }
        }
            cout<<endl;
    }
    
    return 0;
}
// 1 
// 1 1 2 
// 1 1 2 1 2 3 
// 1 1 2 1 2 3 1 2 3 4 
// 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5 
