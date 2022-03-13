package com.company;

import java.util.HashMap;

public class Main {

    public static void main(String[] args) {
	// write your code here

        HashMap<Object,Integer> hashMap = new HashMap<>();

        HashMap<Person,Boolean> personHashMap = new HashMap<>();


        String a="a";
        String b="a";

        hashMap.put(a,10);
        hashMap.put(b,20);

        //System.out.println(hashMap.size());

        Person arr[] = new Person[5];
        arr[0] = new Person("Apel","36");
        arr[1] = new Person("Sabi","36");
        arr[2] = new Person("Orin","36");
        arr[3] = new Person("Nawsin","36");
        arr[4] = new Person("Nawsin","36");

/*
        if(arr[4].equals(arr[3]))
            System.out.println(true);
        else
            System.out.println(false);

*/


        personHashMap.put(arr[0],true);
        personHashMap.put(arr[1],true);
        personHashMap.put(arr[2],false);

        System.out.println(personHashMap.size());

        System.out.println(personHashMap.get(arr[0]));
        System.out.println(personHashMap.get(arr[2]));




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


    public  int hashCode(){

        int hashcode=0;
        hashcode +=id.hashCode();

        return hashcode;
    }

 /*   @Override
    public String toString() {
        return firstName+" "+id;
    }
*/


    public boolean equals(Object o){

        if (o instanceof Person) {
            Person p = (Person) o;
        return id==p.id;
        }
        else
            return false;
    }
}