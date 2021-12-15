package com.company;

import java.io.*;
import java.util.ArrayList;
import java.util.Collections;

public class FileClass {





    public static void main(String[] args) throws IOException {

        FileReader fileReader = new FileReader("input.txt");
        BufferedReader bufferedReader = new BufferedReader(fileReader);

        FileWriter fileWriter = new FileWriter("output.txt");
        BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

        String name = bufferedReader.readLine();

        /*Human ob = new Human("Orko", "Orkut");
        Human o2 = new Human("Orko", "Orkut");
*/
        ArrayList<Human> arr = new ArrayList<>();

        while (name != null) {

            String nameArr[] = name.split(" ");
            arr.add(new Human(nameArr[0],nameArr[1]));
//            System.out.println(name);
            name = bufferedReader.readLine();
        }



        bufferedReader.close();
        fileReader.close();

        System.out.println(arr);



        Collections.sort(arr);


        for(Human i:arr){

            bufferedWriter.write(i.firstName+" "+i.lastName+"\n");
        }


        bufferedWriter.close();
        fileWriter.close();


    }


}





package com.company;

import java.util.Comparator;

public class Human implements Comparable <Human> {
    String firstName;
    String lastName;

    public Human(String firstName, String lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    @Override
    public  int compareTo(Human ob){

        return firstName.compareTo(ob.firstName);
    }

    /*@Override
    public String toString() {


        return firstName+" "+lastName;
    }*/
}