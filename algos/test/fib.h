//
// Created by Benjamin D. Horn on 3/11/17.
//

#ifndef ALGOS_FIB_H
#define ALGOS_FIB_H


class fib {
public:

    int getFib(int x) {
        if (x == 1) {
            return 1;
        } else {
            return getFib(x-1)+getFib(x-2);
        }
    }

};


#endif //ALGOS_FIB_H
