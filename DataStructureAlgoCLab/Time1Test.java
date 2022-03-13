package com.company;

import java.sql.Time;

public class Time1Test {


    public static void main(String[] args) {


        Time1 time = new Time1();

        time.show(time);


        displayTime("After time object is created",time);
        System.out.println();

        time.setTime(13,50,20);

        System.out.println();
        displayTime("After set time", time);


        try{

            time.setTime(1,222,333);

        }
        catch (IllegalArgumentException e){
            System.out.println(e);
        }
    }

    private  static void  displayTime(String header, Time1 t){

        System.out.printf("%s%n%s%n%s",
                header, t.toUniversalString(), t.toString());

    }
}