#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string s;
    ofstream dest("cpe.txt",ios::app);
    dest<<"\nthis time is 20.11";
}