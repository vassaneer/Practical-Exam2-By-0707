#include <iostream>

using namespace std;

int x=5;

void square(int &y){
    y=y*y;
}

int main(){
    int i=5;
    square(i);
    cout<<i<<endl;
}