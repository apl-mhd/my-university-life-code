package com.company;

import javax.xml.soap.Text;
import java.util.ArrayList;
import java.util.HashMap;

public class Main {

    public static void main(String[] args) {


        System.out.println(Test.arrayList);

        Test.arrayList.remove("Apel 1");

        System.out.println(Test.arrayList);

        Test ob = new Test();

        ob.arrayList.add("Nawshin 2");

        System.out.println(Test.arrayList);

        ob.add("Sabi 36");
        ob.remove(0);

        ob.writeToFile();



    }
}



package com.company;

import java.io.*;
import java.util.ArrayList;
import java.util.HashMap;

public class Test {


    static ArrayList<String> arrayList = new ArrayList<>();



  static   {
        try {
            FileReader fileReader = new FileReader("text.txt");
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String line = bufferedReader.readLine();

            while (true){

                arrayList.add(line);
                //System.out.println(line);
                line= bufferedReader.readLine();
                if(line==null)break;

            }


            bufferedReader.close();
            fileReader.close();
        }
        catch (IOException e){


        }


    }

   //static ArrayList<Person> arrayList = new ArrayList<>();




    static    void add(String name){

      arrayList.add(name);

        System.out.println("\nAfter add: \n"+arrayList);

    }


  static   void remove(int index){

        arrayList.remove(arrayList.get(index));

      System.out.println("\nAfter remove: \n"+arrayList);


  }

  void writeToFile(){

      try {

          FileWriter fileWriter = new FileWriter("text.txt");
          BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

          for(String i:arrayList){
              //System.out.println(i);

              bufferedWriter.write(i+"\n");
          }


          bufferedWriter.close();
          fileWriter.close();


      }
      catch (IOException e){

          System.out.println();
      }

  }

}