package file;

import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {


        FileReader fr = new FileReader("a.txt");
        BufferedReader br=new BufferedReader(fr);
        FileWriter fw = new FileWriter("b.txt");
        BufferedWriter bw=new BufferedWriter(fw);
        String s=br.readLine();
        while(s!=null)
        {

            bw.write(s+"\n");
           // if(s==null) break;
             s=br.readLine();
            //s=s+"\n";

        }
        br.close();
        fr.close();

        bw.close();
        fw.close();
    }


}