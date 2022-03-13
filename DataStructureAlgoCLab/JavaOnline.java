package finalAssignment;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main extends JFrame {

  public   JButton buttons[] = new JButton[7];

    static Main a;

    public Main(){

        super("Assignment One");
        setLayout(new FlowLayout());
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE );

        buttons[0] = new JButton("Add");
        buttons[1] = new JButton("Remove");
        buttons[2] = new JButton("Save");
        buttons[3] = new JButton("Sort By First Name");
        buttons[4] = new JButton("Sort By Last Name");
        buttons[5] = new JButton("Sort By PID");
        buttons[6] = new JButton("Search");


        for(int i=0; i<7; i++)
            add(buttons[i]);

        buttons[0].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.add();
            }
        });


        buttons[1].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.remove();
            }
        });



        buttons[2].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.save();
            }
        });
        buttons[3].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.sortByFirstName();
            }
        });

        buttons[4].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.sortByLastName();
            }
        });

        buttons[5].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.sortByPID();
            }
        });

        buttons[6].addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                Update.serch();
            }
        });





        // buttons[1].addActionListener(new TestClass(buttons[1]));


        setSize(800,400);
        setVisible(true);

    }

    public static void main(String[] args) {


     a =  new Main();


    }
}



.................................................................
package finalAssignment;

import java.io.*;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class Update {


    static ArrayList<Person> arrayList = new ArrayList<>();
    static HashMap<Person,Boolean> hashMap = new HashMap<>();


   static void dataLoadFromfile() throws IOException{ /*data load from file*/

       if (1==1) {

           FileReader fileReader = new FileReader("PersonalInformation.txt");
           BufferedReader bufferedReader = new BufferedReader(fileReader);


           String s = bufferedReader.readLine();


           String arr[] = s.split(" ");
           HashMap<Person, Boolean> hashMap = new HashMap<>();

           while (true) {

               arrayList.add(new Person(arr[0], arr[1], arr[2]));
               //System.out.println(s);
               s = bufferedReader.readLine();
               if (s == null) break;
               arr = s.split(" ");
           }


           fileReader.close();
           bufferedReader.close();

     /*      for (Person o:arrayList){

               System.out.println("put in hash map: "+o);
               hashMap.put(o,true);
           }*/

        /*   System.out.println("x "+arrayList.get(0));
           hashMap.put(arrayList.get(0),true);
           System.out.println(hashMap.get(arrayList.get(0)));
*/

       }

       else throw  new IOException("not found");


    }

    static  {
        try {
            Update.dataLoadFromfile();

           // System.out.println("tostring "+arrayList.get(0)+"\n");
        }
        catch (IOException e){

            System.out.println("Error");
        }
    }

    static  void add(){

            for (Person o:arrayList){

             //  System.out.println("put in hash map: "+o);
               hashMap.put(o,true);
           }

        Scanner in = new Scanner(System.in);


        System.out.println("Please Enter Your First Name Last Name and PID(same line):\n");
        String info = in.nextLine();
        String infoArr[] = info.split(" ");

        Person ob = new Person(infoArr[0],infoArr[1],infoArr[2]);
        //System.out.println("after input: "+ob);

       // hashMap.put(ob,true);
      //  System.out.println(hashMap.size());


        if(null == hashMap.get(ob)){

            arrayList.add(ob);

           // System.out.println("arralist size "+arrayList.size());
        }
        else{

            System.out.println("Allready exist");
        }


        //System.out.println("tostring "+arrayList.get(0));



    }


static  void writeTofile() throws IOException{

   // System.out.println("write time arraylist size "+arrayList.size());

        if(1==1) {
            FileWriter fileWriter = new FileWriter("PersonalInformation.txt");
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            for (Person i : arrayList) {

                String line = i.firstName + " " + i.lastName + " " + i.pid + "\n";



                bufferedWriter.write(line);
     //           System.out.println("Write :"+line);


            }

            bufferedWriter.close();
            fileWriter.close();
        }

        else throw new IOException("Error");
    }



    static  void remove(){

        Scanner in = new Scanner(System.in);
        System.out.println("Enter PID for remove");

        String pidStr = in.nextLine();

        for(Person i:arrayList){


            if(i.pid.equals(in)){

                arrayList.remove(i);

                hashMap.remove(i);
            }

        }


    }

    static  void save(){

       try {

           writeTofile();
       }
       catch (IOException e){


       }


    }

    static  void sortByFirstName(){

        Collections.sort(arrayList, new SortByFirstName());
        System.out.println("Sor By FirstName:\n");

        for(Person i:arrayList){
            System.out.println(i);
        }



    }

    static  void sortByLastName(){

        Collections.sort(arrayList, new SortByLastName());
        System.out.println("Sort By Last Name:\n");
        for(Person i:arrayList){

            System.out.println(i);
        }

    }

    static  void sortByPID(){

        Collections.sort(arrayList, new SortByPID());
        System.out.println("Sort By PID:\n");
        for(Person i:arrayList){

            System.out.println(i);
        }

    }

    static  void serch(){

        Scanner in = new Scanner(System.in);
        System.out.println("Enter PID For Search: ");

        String pidStr = in.next();

        for(Person i:arrayList){

            if(i.pid.equals(pidStr)){

                System.out.println(i);
            }

            else
                System.out.println("PID not Found:");
        }

    }


}
..............................................
package finalAssignment;

import java.util.Comparator;

public class SortByLastName implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.lastName.compareTo(o2.lastName);
    }
}

.........................................

package finalAssignment;

import java.util.Comparator;

public class SortByPID implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.pid.compareTo(o2.pid);
    }
}




package finalAssignment;

import java.util.Comparator;

public class SortByFirstName implements Comparator<Person> {

    @Override
    public int compare(Person o1, Person o2) {
        return o1.firstName.compareTo(o2.firstName);
    }
}