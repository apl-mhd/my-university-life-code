package com.company;

public class Time implements Comparable<Time> {


    int hour, minute;

    public Time(int hour, int minute) {
        this.hour = hour;
        this.minute = minute;
    }


    @Override
    public String toString() {
        return hour +":"+minute+" PM";
    }

    @Override
    public int compareTo(Time o) {


        if(o.hour==hour){
            if (o.minute<minute)
                return 1;
        }
        if(hour>o.hour)

            return 1;

        else
            return -1;
       // return minute- o.minute;
    }
}



package com.company;

import java.util.ArrayList;
import java.util.Collections;

public class Main {

    public static void main(String[] args) {
	// write your code here


        ArrayList<Time> ob =new ArrayList<>();

        ob.add(new Time(11,5));
        ob.add(new Time(12,2));
        ob.add(new Time(12,3));
        ob.add(new Time(13,0));
        ob.add(new Time(12,1));



        Collections.sort(ob);


        for (Time i:ob) {

            System.out.println(i);

        }

    }
}