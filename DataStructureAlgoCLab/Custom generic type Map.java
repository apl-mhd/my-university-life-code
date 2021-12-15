package com.company;

import java.util.HashMap;
import java.util.Map;

public class MyMap<T,V> {


    T key;
    V value;


 static    HashMap a = new HashMap();


    void put(T key,V value){

        a.put(this.key = key,this.value = value);



    }


    public T get(T key){


        return (T) a.get(this.key);
    }


}