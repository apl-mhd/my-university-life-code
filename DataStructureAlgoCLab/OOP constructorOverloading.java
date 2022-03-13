package com.company;

public class Main {

    String motto;

    int id;

     Main(String  m){

         motto = m;
         System.out.println(motto);

    }


    Main(int i,String  m){

        id = i;
        motto = m;
        System.out.println("Id: "+id);
        System.out.println("Motto: "+motto);

    }


    public static void main(String[] args) {


        Main  one = new Main("tui akta harami");
        Main  two = new Main(1,"tui akta harami");




    }
}