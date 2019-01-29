package com.company;

import java.util.Scanner;

public class Main {


    static ChainHashing[] dataTable = new ChainHashing[100];







    public  static void  insert(String name, String type){

        int key =0;

        if (dataTable[key]== null){

            dataTable[key] = new ChainHashing();
            dataTable[key].name = name;
            dataTable[key].type = type;
            dataTable[key].next = null;
            //System.out.println(ob.next);
        }
        else {

            ChainHashing temp =  dataTable[key];
            while (temp.next != null){

                temp = temp.next;
            }
            temp.next= new ChainHashing();
            temp.next.name = name;
            temp.next.type = type;
            temp.next.next = null;
        }

    }




    public  static void  search(ChainHashing ob, String name){


         if(ob.name == name ){

            System.out.println("data found");
            //  return;

        }

       else if (ob.name ==null || ob.next == null) {
            System.out.println("No Data Found");

           // return;
        }


        else
            {

            ob = ob.next;
            search(ob, name);

        }

    }


    public  static void  delete( String name){

        int key =0;

        ChainHashing temp = dataTable[key];
        ChainHashing prev=null;


        if (dataTable[key] == null){

            System.out.println("Empty node no "+ name +" found");
        }
       else if (dataTable[key].name == name){

            dataTable[key] = dataTable[key].next;
            System.out.println(name + " delete successfully ");

        }



       else {
            while (temp.name != name) {

                prev = temp;


                if (temp.next == null) {

                    System.out.println(name +"  not found");
                    return;
                }


                temp = temp.next;


            }

            prev.next = temp.next;

            System.out.println(name + " delete successfully ");

        }

    }

    public  static void showAll(){

        int key =0;



        for (int i =0; i<10; i++){

            ChainHashing temp = dataTable[i];



            if (temp != null){

                System.out.println("hasIndex("+i+"):");

                while (temp != null){

                    System.out.print(temp);

                    temp = temp.next;


                }
            }

            System.out.println();


        }


    }

    public  static  void  update(String name, String type){


        int key =0;

        ChainHashing temp = dataTable[key];
        ChainHashing prev=null;


        if (dataTable[key] == null){

            System.out.println("Empty node  "+ name +" not found");
        }
        else if (dataTable[key].name == name){

            dataTable[key].type = type;
            System.out.println(name + " update successfully ");

        }



        else {
            while (temp.name != name) {




                if (temp.next == null) {

                    System.out.println("Empty node  "+ name +" not found");
                    return;
                }



                temp = temp.next;


            }

            temp.type = type;

            System.out.println(name + " update successfully n");

        }

    }


    public  void  search(String name){


        int key =0;

        ChainHashing temp = dataTable[key];



        if (dataTable[key] == null){

            System.out.println("Empty node,  "+ name +" not found");
        }
        else if (dataTable[key].name == name){


            System.out.println(name +" : " +dataTable[key].name);

        }



        else {
            while (temp.name != name) {


                if (temp.next == null) {

                    System.out.println("Empty node,  "+ name +" not found");
                    return;
                }



                temp = temp.next;

            }


            System.out.println(name +" : " +temp.name);

        }



    }


    public  static  int hashValue(String name){

        int n=0;

        char arr[] = name.toCharArray();

        for (int i = 0; i<name.length(); i++){

            n+=arr[i];
            System.out.println(arr[i]);
        }


        return n%10;

/*
        char ch = 'a';
        int ascii = ch;
        // You can also cast char to int
        int castAscii = (int) ch;*/

    }





    public static void main(String[] args) {


        Scanner in = new Scanner(System.in);

        String namType = in.next();

        String[] nameTypeArr = namType.split(",");
        String name = nameTypeArr[0]; // 004
        String type = nameTypeArr[1]; // 034556


        System.out.println(name + type);




        hashValue("apel");


        insert("or", "ko");
        insert("Mamun", "Hasan");
        insert("orin", "mahmud");
        insert("orix", "mahmud");



        update("or","Alien");









    }
}