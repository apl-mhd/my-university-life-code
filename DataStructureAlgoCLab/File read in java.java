package com.company;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;

public class Main {
    public static void main(String[] args) {

        FileReader fr = null;
        BufferedReader br = null;
        try {
            fr = new FileReader("input.txt");
            br = new BufferedReader(fr);

            String crLine;
            while((crLine = br.readLine()) != null){
                System.out.println(crLine);
            }

            //br = new BufferedReader(new FileReader("input.txt"));
        }
        catch (IOException x) {
            System.out.println("File not found");
        }
        finally {
            try {
                if (br != null)
                    br.close();
                if (fr != null)
                    fr.close();
            } catch (IOException e) { }
        }
    }
}