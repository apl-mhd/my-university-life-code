package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class BorderLayoutFrame extends JFrame implements ActionListener{


    private final JButton[] buttons;
    private static final String[] names = {"Hide North", "Hide South",
            "Hide East","Hide West","Hide Center"};

    private final BorderLayout layout;

    BorderLayoutFrame(){

        super("Border layout frame");
        layout = new BorderLayout();
        setLayout(layout);
        buttons = new JButton[names.length];
        for (int i=0; i<names.length; i++){

            buttons[i] = new JButton(names[i]);
            //buttons[i].addActionListener(this);

        }

        buttons[0].addActionListener(this);
        buttons[1].addActionListener(this);
        buttons[2].addActionListener(this);
        buttons[3].addActionListener(this);
        buttons[4].addActionListener(this);


        add(buttons[0],BorderLayout.NORTH);
        add(buttons[1],BorderLayout.SOUTH);
        add(buttons[2],BorderLayout.EAST);
        add(buttons[3],BorderLayout.WEST);
        add(buttons[4],BorderLayout.CENTER);


    }


    @Override
    public void actionPerformed(ActionEvent e) {


        for (JButton button : buttons){

            if (e.getSource()==button){

                button.setVisible(false);
            }
            else
                button.setVisible(true);

        }

        layout.layoutContainer(getContentPane());
    }

    public static void main(String[] args) {
        BorderLayoutFrame ob = new BorderLayoutFrame();
        ob.setSize(400,400);
        ob.setVisible(true);

    }
}