package com.company;

import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.HashMap;
import java.util.Random;

public class Main {

    public static void main(String[] args)  throws Exception{
	// write your code here

        Random rand = new Random();


        FileWriter fw = new FileWriter("number.txt");
        BufferedWriter bw = new BufferedWriter(fw);

        HashMap<Integer, Boolean> unique = new HashMap();


        for (int i=0; i<500;) {


            int number = rand.nextInt(2212)+999;

            if(unique.containsKey(number))
                continue;
            else {

                bw.write(i+". "+"1803"+""+number+"\n");
                unique.put(number,true);
               // System.out.println(number);

                i++;
            }
        }

        bw.close();
        fw.close();
    }
}