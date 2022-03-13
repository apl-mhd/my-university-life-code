package com.company;

import java.util.HashMap;
import java.util.Iterator;
import java.util.Set;

public class Main {

    public static void main(String[] args) {
	// write your code here

        HashMap<String, Integer> hashMap = new HashMap<>();

        hashMap.put("Apel",36);
        hashMap.put("Sabi", 234);
        hashMap.put("Orin",33);
        hashMap.put("Nawshin",45);
        System.out.println(hashMap.size());

        Set keyset = hashMap.keySet();

        Iterator<String> it = keyset.iterator();

        while (it.hasNext()){

            System.out.println(hashMap.get(it.next()));
        }
    }
}