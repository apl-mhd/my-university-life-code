package com.company;

import javax.xml.soap.Text;
import java.util.*;

public class Main {

    public static void main(String[] args) {

        ArrayList<Person> personArrayList = new ArrayList<>();

        Person arr[] = new Person[4];
        arr[0] = new Person("Apel","36");
        arr[1] = new Person("Sabi","36");
        arr[2] = new Person("Orin","36");
        arr[3] = new Person("Nawsin","36");

        personArrayList.add(arr[0]);
        personArrayList.add(arr[1]);
        personArrayList.add(arr[2]);
        personArrayList.add(arr[3]);


        ArrayList<String> ar = new ArrayList<>();
        ar.add("apel");
        ar.add("Orko");
        ar.add("Orin");

        for (Iterator<Person> it = personArrayList.iterator(); it.hasNext();) {

            if(it.next().firstName.equals("Apel")) {
                it.remove();

                System.out.println("remove successfully");
            }
        }

        System.out.println(personArrayList.size());

        /*for(Person i: personArrayList){

            System.out.println(i);
         if(i.firstName.equals("Sabi")){
                   System.out.println("Name found");
                   personArrayList.remove(arr[1]);

            }
        }*/
/*


        System.out.println(personArrayList.size());

        System.out.println(Test.arrayList);

        Test.arrayList.remove("Apel 1");

        System.out.println(Test.arrayList);

        Test ob = new Test();

        ob.arrayList.add("Nawshin 2");

        System.out.println(Test.arrayList);

        ob.add("Sabi 36");
        ob.remove(0);

        ob.writeToFile();
*/



    }
}
package com.company;

public class Person {

    String firstName;
    String id;

    public Person(String firstName, String id) {
        this.firstName = firstName;
        this.id = id;
    }


    public String toStrsing() {
        return firstName+" "+id;
    }
}