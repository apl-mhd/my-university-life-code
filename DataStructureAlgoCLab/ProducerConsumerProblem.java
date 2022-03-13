package producerConsumer;

public class Q{


   public static int  n;

    //static  int count;

    boolean flag = false;

   synchronized void  put(int n){


       while (flag){

           try {
               wait();

           }
           catch (InterruptedException e){e.printStackTrace();}
       }


           this.n=n;
           System.out.println("put: "+n);
           flag = true;
           notify();


    }

  synchronized int get(){

       while (!flag){

           try {
               wait();
           }
           catch (InterruptedException e){e.printStackTrace();}
       }



       flag = false;
        System.out.println("Get: "+n);
      notify();

      return n;
    }

}