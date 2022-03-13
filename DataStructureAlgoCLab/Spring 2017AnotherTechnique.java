package spring2017;

import one172.ThreadErrorList5;

import java.util.ArrayList;

public class Problem2 implements  Runnable {

    static ArrayList<Integer> listNum = new ArrayList<>();


    Thread t;
    Problem2(String name){

         t = new Thread(this,name);

    }

    synchronized   void removeData(){

        //for (int i=listNum.size()-1; i>=listNum.size()-5; i--){

        int size =  listNum.size();
        for (int i=size-1; i>=size-5; i--){
            //System.out.println(i);

            listNum.remove(i);
            //System.out.print(listNum.remove(i));
        }
    }

    @Override
    public void run() {

       // System.out.println("bangladesh");
        removeData();

            System.out.println(listNum.size()+" "+ t.getName());

    }


    public static void main(String[] args) {

        listNum.add(0);
        listNum.add(1);
        listNum.add(2);
        listNum.add(3);
        listNum.add(4);

        listNum.add(5);
        listNum.add(6);
        listNum.add(7);
        listNum.add(8);
        listNum.add(9);
        listNum.add(10);
        listNum.add(11);
        listNum.add(12);
        listNum.add(13);
        listNum.add(14);


        Problem2 c1 = new Problem2("First Thread");
        Problem2 c2 = new Problem2("Second Thread");
        
        c1.t.start();
        c2.t.start();

        try {
            c1.t.join();
            c2.t.join();
        }
        catch (InterruptedException e){

            System.out.println(e);
        }






/*

        Thread t1 = new  Thread(new Problem2());
        Thread t2 = new  Thread(new Problem2());
        Thread t3 = new  Thread(new Problem2());

        t1.start();

        t2.start();
        t3.start();



        try {
            t1.join();
            t2.join();
           t3.join();
        }
        catch (InterruptedException e){

            System.out.println(e);
        }

*/

        System.out.println(listNum.size());

    }
}