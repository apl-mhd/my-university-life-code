package com.company;

/**
 * Created by common on 12/6/2017.
 */
public class Child extends Parent{

    void displayParent(String name){

        System.out.println("child");

    }

    Child(){


        displayParent("Child");

    }
}


package com.company;

/**
 * Created by common on 12/6/2017.
 */
public class Parent {

    String name;

    void displayParent(String name){

        this.name = name;
        System.out.println(name);
    }

    Parent(){

        displayParent("Parent");
    }
}