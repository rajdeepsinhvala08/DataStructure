#include<iostream>
using namespace std;
void printpattern(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
        cin>>n;
        printpattern(n);
        return 0;
    }