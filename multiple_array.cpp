#include <iostream>

using namespace std;

int main(){
    int N=4;
    int a[N][5]={{1},{2,5,9},{0,5}};
    for(int i=0;i<N;i++){
        for(int j=0;j<sizeof(a[0])/sizeof(a[0][0]);j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"stop"<<endl;
    }
}