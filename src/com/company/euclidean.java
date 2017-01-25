package com.company;

/**
 * Created by benjamin.horn on 1/24/17.
 */
public class euclidean {

    public static int gcd(int a, int b){
        if(b == 0){
            return a;
        }
        int r;
            r = a%b;
        return gcd(b,r);
    }

}
