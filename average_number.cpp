#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int i=0; // number of text
    double average=0;
    string s;
    ifstream dest("number.txt");
    while(getline(dest,s)){
        // average=average+atoi(s.c_str());
        average=average+stod(s);
        i++;
    }
    cout<<"i= "<<i<<endl;
    cout<<"average= "<<average<<endl;
    cout<<average/i;
}