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