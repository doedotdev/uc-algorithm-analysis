#include <iostream>
#include <time.h>

using namespace std;

struct thing{
    int value = NULL; // date being stored
    int next_index; // stores array location of next location
    int prev_idex; // stores array location of previous location
    int qty = 0; // how many values are found
};

// array index sort but with a very large array?

int main() {
    std::cout << "Hello, World!" << std::endl;
    srand(time(0));

    int list_size = 100;
    thing * pointer = new thing[list_size];
    pointer[0].value = 0;

    int index;

    for (int i = 0; i < 100; i++){
        index = rand() % list_size;
            pointer[index].value = index;
            pointer[index].qty ++;
    }

    for (int i = 0; i < 100; i ++){
        if(pointer[i].value != NULL){
            std::cout << pointer[i].value << endl;
        }

    }
    return 0;
}