package spring2017.problem6;

import one172.ThreadErrorList5;

public class TestThread1 implements Runnable{
//problem a
    Thread t;
    TestThread1(){

    }



    String name;
    public TestThread1(String name) {
        this.name = name;

        t = new Thread(this);
    }
    public void run(int n){
        System.out.printf("Running:%s %d times.\n", name, n);
    }

    public  void run(){

        System.out.println("bangladehs");

    }


    public static void main(String[] args) {

        TestThread1 t = new TestThread1();


        TestThread1 t1 = new TestThread1("First Thread");
        t1.t.start();

        try {

            t1.t.join();
        }
        catch (Exception e){}

    }

}








package spring2017.problem6;

import java.io.IOException;
public class TestExceptionError {
    public static void main(String[] args) {




        //System.out.println("aa");

        try {
            whoIs("IOException");
        }

        catch (IOException e) {
            e.printStackTrace();
        }

        catch (Exception e) {
            e.printStackTrace();
        }

        finally{
            System.out.println("Always executes.");
        }
        System.out.println("Which exception should be handled?");

    }
    public static void whoIs(String n) throws IOException{
        System.out.println("Who is "+n+"?");
    }
}