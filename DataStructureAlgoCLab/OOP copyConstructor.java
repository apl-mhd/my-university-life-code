package com.company;

public class Main {


    int id;
    String name;

    Main(int i, String nm){

        id =i;
        name = nm;
    }

    Main(Main copy){

        id = copy.id;
        name = copy.name;

    }

    void display(){

        System.out.println("ID :"+id+" Name: "+name);
    }



    public static void main(String[] args) {

        Main one = new Main(1,"orko");
        Main two = new Main(one);

        one.display();
        two.display();




    }
}