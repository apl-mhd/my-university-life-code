package one172;


import java.io.IOException;

public class TestExceptionError {
        public static void main(String[] args) {
            try {
                whoIs("IOException");
            }


            catch (IOException e) {
                e.printStackTrace();
            }
            catch (Exception e) {
                e.printStackTrace();
            }

            finally{
                System.out.println("Always executes.");
            }
            System.out.println("Which exception should be handled?");
        }
        public static void whoIs(String n) throws IOException {
            System.out.println("Who is "+n+"?");
        }
    }