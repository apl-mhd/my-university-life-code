package com.company;

public class StudentInfo {

    int id;
    String name;
    static  String uni = "United International University ";

    static  int x=0;

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

    StudentInfo(){

        x +=1;
        System.out.println("Static: "+x);

    }




    public static void main(String[] args) {

        StudentInfo  one = new StudentInfo();
        StudentInfo  two = new StudentInfo();
        StudentInfo  three = new StudentInfo();

    }
}