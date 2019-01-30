package com.company;

import java.util.Scanner;

public class Main {


    static ChainHashing[] dataTable = new ChainHashing[100];


    static String[] nameTypeArr;
    static String iname;
   static String itype;






    public  static void  insert(String name, String type){

        int key = hashValue(name);

        if (dataTable[key]== null){

            dataTable[key] = new ChainHashing();
            dataTable[key].name = name;
            dataTable[key].type = type;
            dataTable[key].next = null;

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






    public  static void  delete( String name){

        int key = hashValue(name);

        ChainHashing temp = dataTable[key];
        ChainHashing prev=null;


        if (dataTable[key] == null){

            System.out.println("Empty node no "+ name +" found");
        }
       else if (dataTable[key].name.equals(name)){

            dataTable[key] = dataTable[key].next;
            System.out.println(name + " delete successfully ");

        }



       else {
            while (!temp.name.equals(name)) {

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


        for (int i =0; i<10; i++){

            ChainHashing temp = dataTable[i];



            if (temp != null){

                System.out.println("hasIndex("+i+"):");

                while (temp != null){

                    System.out.print(temp);

                    temp = temp.next;


                }
            }


        }
        System.out.println();


    }

    public  static  void  update(){







        Scanner in = new Scanner(System.in);
        String name,type;



        System.out.println("Enter Name :");

        name =in.nextLine();

        System.out.println("Enter Type :");

        type =in.nextLine();

        int key = hashValue(name);

        ChainHashing temp = dataTable[key];
        ChainHashing prev=null;






        if (dataTable[key] == null){

            System.out.println("Empty node  "+ name +" not found");
        }
        else if (dataTable[key].name.equals(name)){

            dataTable[key].type = type;
            System.out.println(name + " update successfully ");

        }



        else {
            while (!temp.name.equals(name)  ) {


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


    public  static void search(String name){


        int key = hashValue(name);

        ChainHashing temp = dataTable[key];



        if (dataTable[key] == null){

            System.out.println("Empty node,  "+ name +" not found");
        }
        else if (dataTable[key].name.equals(name)){


            System.out.println(name +" : " +dataTable[key].name);

        }



        else {
            while (!temp.name.equals(name)) {


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
            //System.out.println(arr[i]);
        }


        return n%10;


    }


    public  static  void stringSplit(String namType){

        String[] nameTypeArr = namType.split(",");
         iname = nameTypeArr[0]; // 004
         itype = nameTypeArr[1]; // 034556




    }


    public  static  void  menubar() {


        while (true) {

            System.out.println("1. Insert :");
            System.out.println("2. Search :");
            System.out.println("3. Delete :");
            System.out.println("4. Show :");
            System.out.println("5. Update :");
            System.out.println("6. exit :");

            Scanner in = new Scanner(System.in);


            String namType;


            String n;

            n = in.nextLine();


            if (n.equals("1") == true) {


                namType = in.nextLine();

                stringSplit(namType);

                System.out.println(iname+" "+itype);

                insert(iname, itype);

            } else if (n.equals("2") == true) {

                iname = in.nextLine();

                search(iname);

            } else if (n.equals("3") == true) {

                iname = in.nextLine();

                delete(iname);

            } else if (n.equals("4") == true) {


                showAll();


            } else if (n.equals("5") == true) {


                update();

            } else if (n.equals("6") == true) {

                return;


            } else {
                System.out.println("Invalid input");
            }


        }
    }

        public static void main (String[]args){


        menubar();


        }



}