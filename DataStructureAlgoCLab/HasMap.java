package com.company;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) throws IOException {


        FileReader fileReader = new FileReader("PersonalInformation.txt");
        BufferedReader bufferedReader = new BufferedReader(fileReader);


        String s = bufferedReader.readLine();


        String arr[] = s.split(" ");
        ArrayList<Person> ob = new ArrayList<>();
        ArrayList<Person> ob2 = new ArrayList<>();


        HashMap<Person,Boolean> hashMap = new HashMap<>();


        Person a = new Person("Apel","Mahmud","123");
        Person b = new Person("Apel","Mahmud","123");

        ob2.add(a);
        ob2.add(b);


        while (true){


            ob.add(new Person(arr[0],arr[1],arr[2]));
            System.out.println(s);
            s= bufferedReader.readLine();
            if(s==null) break;
            arr = s.split(" ");

        }

        hashMap.put(ob.get(0),true);


        fileReader.close();
        bufferedReader.close();

        Collections.sort(ob);

        System.out.println("after sort");

        for (Person i:ob){

            String x = i.firstName+" "+i.lastName+" "+i.pid;
            System.out.println(x);
            //System.out.println(i);
        }

        System.out.println("\nnew person information\n");

        String info;
        String infoArr[] = new String[3];

        Scanner in = new  Scanner(System.in);

        info = in.nextLine();
        infoArr = info.split(" ");
        System.out.println(infoArr[0]+infoArr[1]+infoArr[2]);


        Person infoOb =new Person(infoArr[0],infoArr[1],infoArr[2]);
        //ob.add(infoOb);





//        FileWriter fileWriter = new FileWriter("PersonalInformation.txt");

        if (null == hashMap.get(infoOb)){

            FileWriter fileWriter = new FileWriter("PersonalInformation.txt");

            ob.add(infoOb);
            hashMap.put(infoOb, true);

            fileWriter.write(infoArr[0]+" "+infoArr[1]+" "+infoArr[2]+"\n");
            System.out.println("write to file successfully");
            fileWriter.close();
        }
        else
            System.out.println("this user already exist");


    }
}



package com.company;

public class Person  implements Comparable<Person>{


    String firstName;
    String lastName;
    String pid;


    public Person(String firstName, String lastName, String pid) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.pid = pid;
    }


    public  int hashCode(){
            System.out.println("In hashcode");
            int hashcode = 0;
            hashcode += pid.hashCode();
            return hashcode;

    }

    public boolean equals(Object obj){
        System.out.println("In equals");
        if (obj instanceof Person) {
            Person pp = (Person) obj;
            return (pp.pid.equals(this.pid));
        } else {
            return false;
        }
    }


    @Override
    public String toString() {
        return firstName;
    }


    @Override
    public int compareTo(Person o) {
        return firstName.compareTo(o.lastName);
    }
}