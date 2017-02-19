package com.company;

/**
 * Created by benjamin.horn on 1/25/17.
 */
public class horneralg {
    int getAnswer(String[] co, int size, int value){
        int ret = Integer.parseInt(co[0]);
        for (int i = 1; i < size; i++){
            ret = ret*value;
            ret = ret + Integer.parseInt(co[i]);
        }
        return ret;
    }
}
