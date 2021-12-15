package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main  extends JFrame implements ActionListener{

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource()==button1) System.out.println("I am button one");
        if(e.getSource()==button2) System.out.println("I am button two");
    }

    JButton button1;
    JButton button2;

     Main ob;
    public Main() {

        super("menu");
        setLayout(new FlowLayout());


        button1 = new JButton("button 1");
         button2 = new JButton("button 2");



        add(button1);add(button2);

        button1.addActionListener(new AnotherClass(button1));
        button2.addActionListener(new AnotherClass2(button2));

/*

        button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("apel mah");
            }
        });
*/





        JMenuBar jMenuBar = new JMenuBar();
        JMenu menu = new JMenu("File");
        JMenu home = new JMenu("Home");
        JMenu help = new JMenu("Help");

        JMenu subMenu = new JMenu("Submenu");


        jMenuBar.add(menu); //menu
        jMenuBar.add(home);
        jMenuBar.add(help);

        //add menu item

        JMenuItem menuItem1 = new JMenuItem("menuItem 1");
        JMenuItem menuItem2 = new JMenuItem("menuItem 2");
        JMenuItem menuItem3 = new JMenuItem("menuItem 3");

        menu.add(menuItem1);
        menu.add(menuItem2);
        menu.add(menuItem3);
        menu.add(subMenu);

        setJMenuBar(jMenuBar);
        setSize(400,400);
        setVisible(true);
    }

    public static void main(String[] args) {
	// write your code here

        new Main();
    }
}


package com.company;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AnotherClass implements ActionListener {


    JButton ob;

    AnotherClass(JButton ob){

        this.ob =ob;
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource()==ob)
            System.out.println("I am button 1");

    }
}



 class AnotherClass2 implements ActionListener {


    JButton ob;

    AnotherClass2(JButton ob){

        this.ob =ob;
    }

    @Override
    public void actionPerformed(ActionEvent e) {

        if(e.getSource()==ob)
            System.out.println("Iam button two!");

    }
}