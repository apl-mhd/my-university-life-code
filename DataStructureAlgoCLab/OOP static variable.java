package com.company;

public class StudentInfo {

    int id;
    String name;
    static  String uni = "United International University ";

    StudentInfo(int i, String nm){

        id = i;
        name = nm;
/*
        System.out.println("Id: 0"+id);
        System.out.println("Name: "+name);
        System.out.println("University: "+uni);
        System.out.println();
*/
    }

    void display(){

        System.out.println("Id: 0"+id);
        System.out.println("Name: "+name);
        System.out.println("University: "+uni);
        System.out.println();

    }




    public static void main(String[] args) {

        StudentInfo one = new StudentInfo(11161036,"Orko");
        StudentInfo two = new StudentInfo(11161234,"Orion Hunter");

        one.display();
        two.display();

    }
}