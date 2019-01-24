package com.company;

public class Main {



    public  static void   iterator(ChainHashing ob)
    {

        System.out.println(ob);

        if(ob.next != null) {
            ob = ob.next;
            iterator(ob);
        }


    }


    public  static void  insert(ChainHashing ob,String name, String type){


        if (ob.next == null){

            ob.next = new ChainHashing();
            ob.next.name = name;
            ob.next.type = type;
            ob.next.next = null;
            //System.out.println(ob.next);
        }

        else{
            ob = ob.next;
            insert(ob,name,type);
        }

    }

    public  static void   change(InnerClass ob){

        ob.a =100;

    }

    public static void main(String[] args) {;

        ChainHashing[] dataTable = new ChainHashing[100];
        dataTable[0] = new ChainHashing();


        /*First level*/
        dataTable[0].name = "Orko";
        dataTable[0].type = "Orin";
        dataTable[0].next = null;

        insert(dataTable[0], "or", "ko");
        insert(dataTable[0], "ro", "ok");
        insert(dataTable[0], "oor", "koo");
        
        dataTable[0].next = dataTable[0].next.next;








       iterator(dataTable[0]);






    }
}
