package com.company;

public class Time1 {


    private int hour;
    private  int minute;
    private int second;

    public void setTime(int hour, int minute, int second){

        if(hour<0 || hour>24 || minute<0 || minute > 59 || second<0 || second>59){

            throw new IllegalArgumentException("Hour, minute, or second out of range");
        }

        this.hour = hour;
        this.minute = minute;
        this.second = second;




    }


    public  String toUniversalString(){

        return String.format("%d:%d:%d",hour,minute,second);
    }

    public  String toString(){

        return String.format("%d:%d:%d %s",
                ((hour==0 || hour==12)?12:hour%12),minute,second,(hour<12? "AM":"PM"));
    }


    public void show(Time1 ob){

        System.out.printf("%s %s %s",ob.hour,ob.minute,ob.second);


    }

}