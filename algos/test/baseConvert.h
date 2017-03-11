//
// Created by Benjamin D. Horn on 3/10/17.
//

#ifndef ALGOS_BASECONVERT_H
#define ALGOS_BASECONVERT_H

#include "doublyLinkedList.h"

class baseConvert {

    doublyLinkedList<std::string> object; // where we store the temporary list
public:
    void changeBase(int p, int b){
        if(p < 0 ){ // will allow you to compute the negative value of p in base 2, not tested with all other values
            p = 256 + p;
        }
        if( p > 0){
            if(p%b >= 0 && p%b <= 9){
                object.push_front(to_string(p%b)); // push the value 1 - 9 to the list (depending on the base)
            }
            else{ // could use lower case a here. but nbd
                string str(1,'A' + p%b - 10); // shift it the mod, -10, (anything in the first 10 digits, 0 - 9 is handled above with real Digits
                object.push_front(str); // push the char converted to string to the list
            }

            changeBase(p/b, b); // recursive call after division by the base
        }
    }

    string getList(){
        return object.catRet();
    }

};


#endif //ALGOS_BASECONVERT_H
