package com.company;

public class AccountInfo {

    int accountNo;
    String name;
    float amount;

    void insert(int a, String nm, float amnt){

        accountNo = a;
        name = nm;
        amount = amnt;

    }

    void deposit(float amnt){

        amount +=amnt;

        System.out.println("Diposited amount "+amount);
    }

    void withDraw(float amnt){

        if(amnt> amount)
            System.out.println("insufficient balance ");
        else{

            amount -=amnt;
            System.out.println(amount +"tk " + "withdraw successfully");
        }


    }


    void display(){


        System.out.println("ID: "+accountNo );
        System.out.println("Name: "+name );
        System.out.println("Balance is: " +amount );
    }


    void checkBalance(){

        System.out.println("Balance: " +amount );

    }


    public static void main(String[] args) {

        AccountInfo one = new AccountInfo();

        one.insert(1,"orko",1000);

        one.display();
        one.checkBalance();
        one.deposit(1203);
        one.checkBalance();
        one.withDraw(9);


    }


}