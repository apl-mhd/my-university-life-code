public class Main {


    String name;


   public void change(Main x){

       System.out.println(x);

       x.name ="this is change";

   }

    public static void main(String[] args) {

        Main ob = new Main();
        Main ob2 = new Main();

        System.out.println(ob);

        ob.name="ork";


        ob.change(ob);

        System.out.println(ob.name);

        ob2 =ob;



        System.out.println(ob2);

    }
}
