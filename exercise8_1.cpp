#include <iostream>

using namespace std;

int main(){
    double result=0;
    double i=2;
    cout.precision(10);
    while(i<=222){
        result=result+(1/i);
        i=i+2;
    }
    cout<<result<<endl;
}