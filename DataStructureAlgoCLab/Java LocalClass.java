package localClass;
import java.lang.*;

//import com.sun.org.apache.xpath.internal.operations.String;

public class LocalClassExample {

    String a;

  static   java.lang.String regular= "[^0-9]";

   static void validet(java.lang.String ... arg ){


        class PhoneNumber{


        java.lang.String numbervalid = null;
            public PhoneNumber(java.lang.String number) {
                 number = number.replaceAll(regular,"");

                 if(number.length() == 11)
                     numbervalid = number;

            }


        }


        for(String n:arg){


            PhoneNumber ob = new PhoneNumber(n);

            if(ob.numbervalid!=null)
                System.out.println("valid number :"+ob.numbervalid);
            else
                System.out.println("not valid");


        }

    }


    public static void main(String[] args) {

       //LocalClassExample ob = new LocalClassExample();

       validet("384u3889","01710-453438");

    }

}