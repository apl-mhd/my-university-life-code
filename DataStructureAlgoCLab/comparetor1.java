package com.company;

import javax.print.attribute.standard.MediaSize;
import java.util.ArrayList;
import java.util.Collections;

public class Main {


    public static void main(String[] args) {
	// write your code here

        ArrayList<Person> personArrayList =new ArrayList<>();
        Person p1 = new Person("Xerox","036",2);
        Person p2 = new Person("ORange","126",20);
        Person p3 = new Person("Apple","236",30);
        Person p4 = new Person("Erko","536",50);

        personArrayList.add(p1);
        personArrayList.add(p2);
        personArrayList.add(p3);
        personArrayList.add(p4);


        NameComparator n = new NameComparator();
        IDComparator id = new IDComparator();
        AgeComparator ag = new AgeComparator();

        Collections.sort(personArrayList,n);


      //  personArrayList.remove(p1);
       // personArrayList.clear();



        for(Person a:personArrayList)
            System.out.println(a);

    }
}



package com.company;

/**
 * Created by common on 12/13/2017.
 */
public class Person implements Comparable<Person>{


    @Override
    public int compareTo(Person o) {


        return o.name.compareTo(this.name);
    }

    String name;
    String ID;
    int age;

    public Person(String name, String ID, int age) {
        this.name = name;
        this.ID = ID;
        this.age = age;
    }

    public boolean equals(Object o){

        if(this == o)
            return true;

        if(o.getClass() !=this.getClass()){

            return false;
        }

        Person p =  (Person)o;

        return name.equals(p.name);
    }

    public String toString(){


        return  name+" "+ID+" "+age;
    }

}
package com.company;

import java.util.Comparator;

/**
 * Created by common on 12/13/2017.
 */
public class NameComparator implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.name.compareTo(o2.name);
    }
}

package com.company;

import java.util.Comparator;

/**
 * Created by common on 12/13/2017.
 */
public class IDComparator implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.ID.compareTo(o2.ID);
    }
}

package com.company;

import java.util.Comparator;

/**
 * Created by common on 12/13/2017.
 */
public class AgeComparator implements Comparator<Person> {


    @Override
    public int compare(Person o1, Person o2) {
        return o1.age- o2.age;
    }

 public int hashCOde(){
        
        return name.hashCode();
    }


}