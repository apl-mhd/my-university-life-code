package com.company;

import java.awt.image.ImagingOpException;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;

public class Main {

    public static void main(String[] args) throws IOException{


        String a[]="aa fadf afa".split(" ");

      //  a = null.split(" ");

        System.out.println(a[0]+a[2]);


        //System.out.println(name[0]+name[1]);





        FileReader fileReader = new FileReader("Country.txt");
        BufferedReader bufferedReader = new BufferedReader(fileReader);


        String s = bufferedReader.readLine();


        String arr[] = s.split(" ");

        ArrayList<Country> ob = new ArrayList<>();

//        ob.add(new Country(arr[0],arr[1],arr[1]));


        int count=0;

        while (true){


            ob.add(new Country(arr[0],arr[1],arr[1]));
            System.out.println(s);
            s= bufferedReader.readLine();
            if(s==null) break;
            arr = s.split(" ");

            //count++;

        }


        fileReader.close();
        bufferedReader.close();

        Collections.sort(ob);

        System.out.println("after sort");

        for (Country i:ob){

            String x = i.countryName+" "+i.independt+" "+i.language;

            System.out.println(x);
            //System.out.println(i);
        }


    }
}