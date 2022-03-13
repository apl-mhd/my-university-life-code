package com.company;


class NewThread implements Runnable{

    NewThread(){

        Thread t = new Thread(this,"Demo Thread");
        System.out.println("child thread");

        t.start();
    }


    @Override
    public void run() {

        for (int i=0; i<5; i++){

            try {
                System.out.println(Thread.currentThread().getName()+ i);
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }

        }

        System.out.println("end Child");
    }
}

public class ThreadDemo {

    public static void main(String[] args) {


        new NewThread();


        try {
            for(int i=0; i<5; i++) {
                System.out.println("Main " + i);
                Thread.sleep(500);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }


        System.out.println("end main");
    }


}