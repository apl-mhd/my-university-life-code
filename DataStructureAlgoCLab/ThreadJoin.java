package com.company;

import java.awt.image.ImagingOpException;

public class ThreadJoin implements Runnable {

     static  int count=0;
    @Override
    public void run() {

        for (int i=0; i<1000000; i++)
            count++;
    }


    public static void main(String[] args) throws Exception {

    Thread  t1 = new Thread(new ThreadJoin());
    Thread  t2 = new Thread(new ThreadJoin());

        t1.start();
        t2.start();

        try {

            t1.join();
            t2.join();
        }catch (Exception e) {e.printStackTrace();}

        System.out.println("End thread "+count);

    }
}