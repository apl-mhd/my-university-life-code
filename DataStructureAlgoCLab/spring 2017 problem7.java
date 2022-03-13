//problem a



public  static <T extends Comparable<T>> void sort(ArrayList<T> arr, Boolean tf){

        if(!tf){

            Collections.sort(arr, new Comparator<T>(){

                @Override
                public  int compare(T a, T b){

                    return a.compareTo(b);
                }
            });
        }

        else
            Collections.sort(arr,new Comparator<T>(){


                @Override
                public  int compare(T a, T b){

                    return b.compareTo(a);
                }
            });

    }
















import java.util.ArrayList;
import java.util.Collections;

public class TestGeneric {
//problem b    

public static void main(String[] args) {



        ArrayList<BankAccount> accounts=new ArrayList<BankAccount>();
        accounts.add(new BankAccount("Rasha", "011123", 12000));
        accounts.add(new BankAccount("Keya", "011124", 10500));
        accounts.add(new BankAccount("Asad", "011125", 100000));

        Collections.sort(accounts);
        System.out.println("Accounts sorted in Ascending order:");
        for(BankAccount b: accounts)
            System.out.println(b);
    }
}
class BankAccount  implements Comparable<BankAccount>{


    String name, id;
    double balance;
    public BankAccount(String name, String id, double balance){
        this.name = name;
        this.id = id;
        this.balance = balance;
    }




    @Override
    public int compareTo(BankAccount o) {

        return (int)this.balance -(int)o.balance;
    }




    @Override
    public String toString() {

        return name+"-"+id+"-"+(int)balance;
    }
}