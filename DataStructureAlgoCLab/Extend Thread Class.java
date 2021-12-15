package com.company;

class  ChildThread extends  Thread{


    ChildThread(){
        super("Child thread");

        start();
    }

    @Override
    public void run() {

        for (int i=0; i<10; i++){

            System.out.println(getName()+i);
            try {
                Thread.sleep(1000);
            }
            catch (InterruptedException e){e.printStackTrace();}

        }
    }
}


public class ExtendThread {

    public static void main(String[] args) {

        new ChildThread();


        for (int i=0; i<10; i++){

            System.out.println(Thread.currentThread().getName()+i);
            try {
                Thread.sleep(1000-500);
            }
            catch (InterruptedException e){e.printStackTrace();}

        }


    }



}