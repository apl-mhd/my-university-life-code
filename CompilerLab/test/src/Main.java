import java.util.function.BiConsumer;

public class Main {



    String name;

   public void change(Main x){

       System.out.println(x);

       x.name ="this is change";

   }

    public static void main(String[] args) {


        Splendor ob = new Splendor();

        ob.run();



    }
}
