package com.company;

import java.awt.*;
import javax.swing.*;
public class PanelExample {
    PanelExample()
    {
        JFrame f= new JFrame("Panel Example");
        /*JPanel panel=new JPanel();

        panel.setLayout(new GridLayout(3,2));
        panel.setBounds(0,0,200,200);
        panel.setBackground(Color.gray);
        JButton b1=new JButton("Button 1");
        b1.setBounds(50,100,80,30);
        b1.setBackground(Color.yellow);
        JButton b2=new JButton("Button 2");
        b2.setBounds(100,100,80,30);
        b2.setBackground(Color.green);
        panel.add(b1); panel.add(b2);
        */


        //f.removeAll();
        f.add(new PanelDesign().homePage());
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
    }
    public static void main(String args[])
    {
        new PanelExample();
    }
}



package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public  class  PanelDesign implements ActionListener {

    @Override
    public void actionPerformed(ActionEvent e) {

    }

    JPanel overLoad(JPanel ob){


        return ob;
    }



    static JPanel  nextPage(){

        JPanel panel=new JPanel();


        panel.setLayout(new GridLayout(3,2));
        panel.setBounds(0,0,200,200);
        panel.setBackground(Color.gray);
        JButton b1=new JButton("BackPage");

        b1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {


                new PanelDesign().homePage();
            }
        });

        b1.setBounds(50,100,80,30);
        b1.setBackground(Color.yellow);
        JButton b2=new JButton("Button 2");
        b2.setBounds(100,100,80,30);
        b2.setBackground(Color.green);
        panel.add(b1); panel.add(b2);


        return panel;

    }


    JPanel homePage(){

        JPanel panel=new JPanel();


        panel.setLayout(new GridLayout(3,2));
        panel.setBounds(0,0,200,200);
        panel.setBackground(Color.gray);
        JButton b1=new JButton("Next");

        b1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
              new PanelDesign().nextPage();
            }
        });

        b1.setBounds(50,100,80,30);
        b1.setBackground(Color.yellow);
        JButton b2=new JButton("Button 2");
        b2.setBounds(100,100,80,30);
        b2.setBackground(Color.green);
        panel.add(b1); panel.add(b2);


        return panel;

    }


}