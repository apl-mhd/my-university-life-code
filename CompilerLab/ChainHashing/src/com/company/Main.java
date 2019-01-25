package com.company;

public class Main {





    public  static void   iterator(ChainHashing ob)
    {
        if (ob.name == null){

            System.out.println("noo data found");
            return;
        }

        System.out.println(ob);

        if(ob.next != null) {
            ob = ob.next;
            iterator(ob);
        }


    }


    public  static void  insert(ChainHashing ob,String name, String type){


        if (ob.name == null){
            ob.name = name;
            ob.type = type;
            ob.next = null;
            //System.out.println(ob.next);
        }
        else if (ob.next == null){

            ob.next = new ChainHashing();
            ob.next.name = name;
            ob.next.type = type;
            ob.next.next = null;
        }

        else{
            ob = ob.next;
            insert(ob,name,type);
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


    public  static void  delete(ChainHashing ob, String name){


        if(ob.name == name ){

            ob = ob.next;
            System.out.println("data delete");
             return;

        }

        else if (ob.name ==null || ob.next == null) {

            System.out.println("No Data Found");

            return;
        }


        else
        {

            ob = ob.next;
            search(ob, name);

        }

    }




    public  static void   change(InnerClass ob){

        ob.a =100;

    }

    public static void main(String[] args) {




        ChainHashing[] dataTable = new ChainHashing[100];



        for (int i=0; i<100; i++){
            dataTable[i] =  new ChainHashing();

        }







        iterator(dataTable[0]);
        insert(dataTable[0], "or", "ko");
        insert(dataTable[0], "ro", "ok");
        insert(dataTable[0], "oor", "koo");


        System.out.println("_______");

        delete(dataTable[0], "or");

        iterator(dataTable[0]);






    }
}