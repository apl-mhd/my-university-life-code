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


    public  static void  delete( String name){


        ChainHashing temp = dataTable[0];
        ChainHashing prev=null;

        if (dataTable[0].name == name){

            dataTable[0] = dataTable[0].next;
            System.out.println(name + "delete successfully /n");
            return;
        }



        while (temp.name !=name){

            prev = temp;


            if (temp.next == null){

                System.out.println("data not found");
                return;
            }


            temp = temp.next;


        }

        prev.next = temp.next;

        System.out.println(name + " delete successfully ");

    }

    public  static void showAll(){

        ChainHashing temp = dataTable[0];

        while (temp != null){

                System.out.println(temp.name);

            temp = temp.next;


        }
    }




    public  static void   change(InnerClass ob){

        ob.a =100;

    }

    public static void main(String[] args) {



        insert("or", "ko");
        insert("Mamun", "Hasan");
        insert("orin", "mahmud");


        showAll();

        delete("or");

        showAll();

      







    }
}