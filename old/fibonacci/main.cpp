#include <iostream>

using namespace std;

int fib(int x) {
    if (x == 0){
        cout << 0 << endl;
        return 0;
    }

    if (x == 1){
        cout << 1 << endl;
        return 1;
    }
    cout << fib(x-1)+fib(x-2) << endl;
    return fib(x-1)+fib(x-2);
}


int main() {
    std::cout << "Fib!" << std::endl;
        cout << fib(1) <<endl;


    return 0;
}