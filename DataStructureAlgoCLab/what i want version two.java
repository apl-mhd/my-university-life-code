package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Main  extends JFrame implements ActionListener{

    @Override
    public void actionPerformed(ActionEvent e) {

        getContentPane().removeAll();
        getContentPane().add(anotherPanel.foo());


        getContentPane().validate();
        getContentPane().repaint();
    }

    AnotherPanel anotherPanel = new AnotherPanel();

    public Main() {

        super("hello");

        setLayout(new FlowLayout());
        JButton button1 = new JButton("Main panel");

        getContentPane().add(button1);

        button1.addActionListener(this);

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(500,500);
        setVisible(true);
    }

    public static void main(String[] args) {


        new Main();



    }
}


package com.company;

import javax.swing.*;
import java.awt.*;

public class AnotherPanel extends JPanel {


    AnotherPanel(){



    }

    JPanel foo(){

        JPanel jPanel = new JPanel();

        jPanel.setLayout(new FlowLayout());

        JButton button = new JButton("Hello I am Another panel");

        jPanel.add(button);
        return jPanel;
    }
}