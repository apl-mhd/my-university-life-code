package com.company;

import javafx.print.Collation;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class Main {

    public static void main(String[] args) {

        ArrayList<String> ob = new ArrayList<>();

        ob.add("orko");
        ob.add("orin");
        ob.add("Sabi");
        ob.add("kutaa");

        System.out.println(ob);

        Collections.sort(ob);

        System.out.println(ob);

        Student ob1 = new Student(5);
        Student ob2 = new Student(4);
        Student ob3 = new Student(3);
        Student ob4 = new Student(2);
        Student ob5 = new Student(1);

        ArrayList<Student> arr = new ArrayList<>();

        arr.add( new Student(5));
        arr.add( new Student(4));
        arr.add(new Student(3));
        arr.add( new Student(2));
        arr.add( new Student(1));

        Collections.sort(arr, new SortByRoll());

        for(int i=0; i<arr.size(); i++) {
            System.out.println(arr.get(i).n);

        }



    }
}


package com.company;

public class Student implements Comparable<Student>{


    public int n;

    public Student(int n) {
        this.n = n;
    }

    @Override
    public int compareTo(Student o) {

        return (this.n - o.n);
    }


}



package com.company;

import java.util.Comparator;

public class SortByRoll implements Comparator<Student> {


    public int compare(Student a, Student b)
    {
        return a.n - b.n;
    }
}