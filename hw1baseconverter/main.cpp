#include <iostream>
#include <string>
using namespace std;

string changeBase(int p, int b){
    string ret = "";
    if( p > 0){
        cout << p%b << endl;
        changeBase(p/b, b);
    }
    //cout << p % b << endl;
    return ret;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int p = 2; // p is your integer you want to convert
    int b = 2; // b is the base we are converting it too ( 2<= b <= 36)
    while ( b >1 && b <37){
        cout << "Enter p: ";
        cin >> p;
        cout << "Enter b: ";
        cin >> b;
        cout << "Computing " << p << " in base " << b << endl;
        cout << changeBase(p,b) << endl;
    }

    return 0;
}