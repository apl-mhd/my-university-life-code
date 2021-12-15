import java.util.ArrayList;
import java.util.Iterator;

public class ArrayListClass {


    public static void main(String[] args) {


        ArrayList<Integer> arrayList = new ArrayList<>();
        arrayList.add(1);
        arrayList.add(2);
        arrayList.add(3);
        arrayList.add(4);
        arrayList.add(5);


        for(int i=0; i<5; i++){
            arrayList.remove(i);
        }


        /*Iterator<Integer> it = arrayList.iterator();

        while (it.hasNext()){ //susing iterator no error

           Integer aa = it.next();

            System.out.println(aa);

            it.remove();

        }*/

        /*System.out.println(arrayList.size());

        for(int i=arrayList.size()-1; i>=0; i--){ //remove first to last no error
            arrayList.remove(i);
        }*/

        System.out.println(arrayList.size());

    }
}