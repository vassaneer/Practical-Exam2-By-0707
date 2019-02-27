#include <iostream>

using namespace std;

template <typename T>
T square(T y){
    return y*y;
}

template <typename T>
T add(T y){
    return ++y;
}

int main(){
    cout<<add('A')<<endl;
}