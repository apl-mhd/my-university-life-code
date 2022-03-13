//source : https://forum.processing.org/one/topic/how-to-create-a-2d-arraylist.html

package com.company;

import com.sun.tools.javac.util.Pair;

import java.util.*;

public class Main {

    public static void main(String[] args) {



        ArrayList<ArrayList<String>> name = new ArrayList<ArrayList<String>>();

        name.add(new ArrayList<String>());

        name.get(0).add("Apel"); //name[0][0]
        name.get(0).add("Mahmud");//name[0][1]


        name.add(new ArrayList<String>());

        name.get(1).add("Sabi");//name[1][0]
        name.get(1).add("Nawshin");//name[1][1]


        for(ArrayList<String> lists: name){

            for (String list: lists){

                System.out.print(list+" ");
            }

            System.out.println();
        }

        System.out.println(name.get(1).get(1));


    }
}