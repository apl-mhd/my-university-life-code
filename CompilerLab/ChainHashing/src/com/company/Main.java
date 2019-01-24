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

    public  static void   change(InnerClass ob){

        ob.a =100;

    }

    public static void main(String[] args) {


        ChainHashing[] dataTable = new ChainHashing[100];



        for (int i=0; i<100; i++){

            dataTable[i] =  new ChainHashing();


        }

        //System.out.println(dataTable[0].name);


        iterator(dataTable[0]);



        insert(dataTable[0], "or", "ko");
        insert(dataTable[0], "ro", "ok");
        insert(dataTable[0], "oor", "koo");
        iterator(dataTable[0]);






    }
}