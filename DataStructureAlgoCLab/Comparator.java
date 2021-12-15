package com.company;

public class Product implements Comparable{


    String productName;
    int price;

    public Product(String productName, int price) {
        this.productName = productName;
        this.price = price;
    }


    @Override
    public String toString() {
        return productName+" "+price;
    }

    @Override
    public int compareTo(Object o) {

        Product x = (Product)o;
        return this.productName.compareTo(x.productName);
    }
}