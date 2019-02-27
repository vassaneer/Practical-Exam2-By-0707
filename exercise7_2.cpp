#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double result=0;
    int i=1;
    cout.precision(9);
    while(i<=111){
        if(i%2==1) result=result+pow(3*i,3);
        else result=result+pow(3*i,2);
        i++;
    }
    cout<<result<<endl;
    double result2=0;
    for(int i=0;i<=111;i++){
        if(i%2==1) result2=result2+pow(3*i,3);
        else result2=result2+pow(3*i,2);
    }
    cout<<result2<<endl;
}