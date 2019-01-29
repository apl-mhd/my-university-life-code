package com.company;

public class Main {


    static ChainHashing[] dataTable = new ChainHashing[100];





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


    public  static void  insert(String name, String type){


        if (dataTable[0]== null){

            dataTable[0] = new ChainHashing();
            dataTable[0].name = name;
            dataTable[0].type = type;
            dataTable[0].next = null;
            //System.out.println(ob.next);
        }
        else {

            ChainHashing temp =  dataTable[0];
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



        insert("or", "ko");
        insert("Mamun", "Hasan");



        System.out.println(dataTable[0]);
        System.out.println(dataTable[0].next);

        dataTable[0] = dataTable[0].next;

        






        /*iterator(dataTable[0]);
        insert(dataTable[0], "or", "ko");
        insert(dataTable[0], "ro", "ok");
        insert(dataTable[0], "oor", "koo");


        System.out.println("_______");

        delete(dataTable[0], "or");

        iterator(dataTable[0]);
*/





    }
}