package com.company;

import javafx.embed.swing.JFXPanel;
import sun.awt.image.GifImageDecoder;

import javax.swing.*;

import java.awt.*;

import static com.sun.glass.ui.Cursor.setVisible;

public class Main extends JFrame{



     Main(){

        setTitle("Apel");

         GridLayout gridLayout = new GridLayout(5,1);
        setLayout(new BorderLayout(10,10));

        JPanel jPanel = new JPanel(gridLayout);

        JLabel jLabel = new JLabel("apel");
        JButton button[] = new JButton[5];

        button[0] = new JButton("NORTH");
         button[1] = new JButton("south");
         button[2] = new JButton("East");
         button[3] = new JButton("west");
         button[4] = new JButton("Center");


         //JLabel jLabel1 = new JLabel("apel");
         JButton button1[] = new JButton[5];

         button1[0] = new JButton("NORTH");
         button1[1] = new JButton("south");
         button1[2] = new JButton("East");
         button1[3] = new JButton("west");
         button1[4] = new JButton("Center");

         jPanel.add(button1[0]);
         jPanel.add(button1[1]);
         jPanel.add(button1[2]);
         jPanel.add(button1[3]);
         jPanel.add(button1[4]);



         add(button[0],BorderLayout.NORTH);
        add(button[1],BorderLayout.SOUTH);
         add(button[2],BorderLayout.EAST);
         add(button[3],BorderLayout.WEST);
         add(jPanel,BorderLayout.CENTER);


       setSize(400,400);
        setVisible(true);

    }

    public static void main(String[] args) {
	// write your code here

      Main main =new Main();




    }
}