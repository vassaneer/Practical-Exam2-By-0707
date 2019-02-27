#include <iostream>

using namespace std;

int main(){
    char s;
    cin>>s;
    switch (s)
    {
        case 'A':
            cout<<"Awesome\n";
            break;
        case 'B':
            cout<<"Great\n";
            break;
        case 'C':
            cout<<"Good\n";
            break;
        case 'F':
            cout<<"Noob\n";
            break;
        default:
            cout<<"Invalid input\n";
            break;
    }
}