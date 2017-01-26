// Benjamin D. Horn
// Prof asked for this in a single source file
// might look ugly after submission

#include <iostream>
#include "singlyLinkedList.h"

using namespace std;

linkedList object; // where we store the temporary list

void changeBase(int p, int b){
    if( p > 0){
        if(p%b >= 0 && p%b <= 9){
            object.pushFront(to_string(p%b));
        }
        else{
            string str(1,'A' + p%b - 10); // shift it the mod, -10, (anything in the first 10 digits, 0 - 9 is handled above with real Digits
            object.pushFront(str);
        }

        changeBase(p/b, b); // recursive call after division by the base
    }
}

int main() {
    std::cout << "Benjamin Horn - Assignment 1!" << std::endl;
    int p = 2; // p is your integer you want to convert
    int b = 2; // b is the base we are converting it too ( 2<= b <= 36)

    while ( b >1 && b <37){
        cout << "Enter p: ";
        cin >> p;
        cout << "Enter b: ";
        cin >> b;
        cout << "Computing " << p << " from base 10 to base " << b << endl;

        changeBase(p,b);
        cout << object.displayList() << endl; // display the list for the user
        object.clearList(); // empties list for next query
        cout << endl;
    }

    return 0;
}