package summer2017;

import java.util.InputMismatchException;

public class Test {


    static void display() {

        if (1 == 1)
            throw new InputMismatchException("Error");
    }


    public static void throwException(int num) {
        if (num % 2 == 0)
            throw new InputMismatchException("Can't be an even number.");

        if (num == 5)
            throw new InputMismatchException("Can't be multiple of five");

    }

    public static void main(String[] args) {
        try {


            try {
                throwException(4);
            } catch (InputMismatchException e) {
                System.out.println(e.getMessage());

                throwException(5);
            } finally {
                System.out.println("aaa");
            }
        }
        catch (InputMismatchException e){
            System.out.println("aa"+e.getMessage());
        }

    }

}