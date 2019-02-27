#include <iostream>

using namespace std;

void swap(int d[],int a,int z){
    int temp =d[a];
    d[a]=d[z];
    d[z]=temp;
}

void print(int d[],int N){
    for(int i=0;i<N;i++){
        cout<<d[i]<<" ";
    };
    cout<<"\n";
}

bool min2max(int d[],int N,int e){
    bool flag=false;
    for(int i=0;i<N-1;i++){
        if(d[i]>d[i+1]) {
            flag=true;
            swap(d,i,i+1);
            }
    }
    return flag;
}

void Bubble_sort(int d[],int N){
    for(int i=N;i>1;i--){
        bool flag=min2max(d,i,N);
        print(d,N);
        if(!flag) break;
    }
}

int main(){
    int s[5]={5,14,25,0,2};
    int N=sizeof(s)/sizeof(s[0]);
    Bubble_sort(s,N);
    print(s,N);
}