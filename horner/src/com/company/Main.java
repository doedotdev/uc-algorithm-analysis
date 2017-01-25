package com.company;

public class Main extends horneralg{

    public static void main(String[] args) {
        int size = 7;
        String [] co = new String[size];
        co[0] = "54";
        co[1] = "4";
        co[2] = "3";
        co[3] = "2";
        co[4] = "1";
        co[5] = "2";
        co[6] = "1";
        horneralg object = new horneralg();
        System.out.println(object.getAnswer(co,size,6));

    }
}
