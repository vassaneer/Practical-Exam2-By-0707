#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string s;
    ifstream dest("max.txt");
    while (getline(dest,s)){
        cout<<s<<endl;
    }
}