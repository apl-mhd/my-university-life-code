package one172;

import java.util.ArrayList;
import java.util.Iterator;

public class RemoveFromArrayListThread2 implements  Runnable{

    static ArrayList<Integer> arrayList = new ArrayList<>();
    synchronized void removeList(ArrayList<Integer> arr){

        int count=0;

        Iterator<Integer> it = arr.iterator();
        while (it.hasNext()){

            it.next();
            it.remove();

            count++;
            if (count==5)
                break;
        }


    }

    @Override
    public void run() {

        //remove(arrayList);


        removeList(arrayList);

        /*for(int i=0; i<5; i++){

            System.out.println(arrayList.get(i));

        }*/
    }

    public static void main(String[] args) {

        arrayList.add(1);
        arrayList.add(2);
        arrayList.add(3);
        arrayList.add(4);
        arrayList.add(5);
        arrayList.add(6);

        arrayList.add(7);
        arrayList.add(8);
        arrayList.add(9);
        arrayList.add(10);


        Thread t1 = new Thread(new RemoveFromArrayListThread2());
        Thread t2 = new Thread(new RemoveFromArrayListThread2());
        Thread t3 = new Thread(new RemoveFromArrayListThread2());

        t1.start();
        t2.start();
       // t3.start();

        try {
            t1.join();
            t2.join();
           //t3.join();
        }
        catch (InterruptedException e){
            e.printStackTrace();
        }


        System.out.println(arrayList.size());

    }


}