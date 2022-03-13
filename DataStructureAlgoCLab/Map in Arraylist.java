package com.company;

import java.util.*;


public class Main {

    public static void main(String[] args) {
	// write your code here


        ArrayList<HashMap<Integer,Integer>> ob[] = new ArrayList[10];

        ob[0] = new ArrayList<HashMap<Integer, Integer>>();

        HashMap<Integer, Integer> mp = new HashMap<Integer, Integer>();

        mp.put(10,20);

        ob[0].add(mp);

        //int a = ob[0].get(0).get(10);

        HashMap A = ob[0].get(0);


        Map<String, ArrayList<String>> map = new HashMap<String, ArrayList<String>>();

        map.put("a",new ArrayList<String>());

        map.get("a").add("10");

        Iterator it = map.entrySet().iterator();

        while (it.hasNext()) {
            Map.Entry pairs = (Map.Entry)it.next();
            
            
            System.out.println(pairs.getKey() + " = " + pairs.getValue());
            
            String b = (String) pairs.getKey();
            
        }




    }
}