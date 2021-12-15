package com.company;

/**
 * Created by common on 12/13/2017.
 */
public class Person {

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

import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
	// write your code here

        ArrayList<Person> personArrayList =new ArrayList<>();
        Person p1 = new Person("Orko","036",2);
        Person p2 = new Person("ORange","126",20);
        Person p3 = new Person("Apple","236",30);
        Person p4 = new Person("Orko","536",50);

        personArrayList.add(p1);
        personArrayList.add(p2);
        personArrayList.add(p3);
        personArrayList.add(p4);


      //  personArrayList.remove(p1);
       // personArrayList.clear();



        for(Person a:personArrayList)
            System.out.println(a);

    }
}


/*
 public int compareTo(Person o) {


        return o.name.compareTo(this.name);
    }
*/