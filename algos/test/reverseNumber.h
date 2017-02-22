//
// Created by Benjamin D. Horn on 2/22/17.
//

#ifndef ALGOS_REVERSENUMBER_H
#define ALGOS_REVERSENUMBER_H


class reverseNumber {
public:
    reverseNumber(long long int value){
        old_num = value;
        new_num = getReverse();
    }

    long long int getReverse(){
        long long int ret;
        for (; old_num != 0;)
        {
            ret = ret * 10;
            ret = ret + old_num % 10;
            old_num = old_num / 10;
        }
        return ret;
    }

    long long int rev(){
        return new_num;
    }

private:
    long long int old_num;
    long long int new_num;

};


#endif //ALGOS_REVERSENUMBER_H
