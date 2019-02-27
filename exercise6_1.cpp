#include <iostream>

using namespace std;

int findMorethan(string s){
    int num_x=0,num_y=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='X') num_x++;
        else if(s[i]=='Y') num_y++;
    }
    if(num_x>num_y) return 1;
    else if(num_x<num_y) return -1;
    else return 0;
}

int main(){
    string s="XY";
    cout<<findMorethan(s);
}