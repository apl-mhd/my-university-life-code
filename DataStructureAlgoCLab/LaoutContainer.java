package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class FlowLaout extends JFrame {


    private  final JButton leftButton;
    private  final JButton centerButton;
    private  final JButton rightButton;

    private final FlowLayout layout;
    private final Container container;


    public FlowLaout(){
        super("This is flow layout");
        layout = new FlowLayout();
        container = getContentPane();

        setLayout(layout);

        leftButton = new JButton("Left");
        add(leftButton);
        leftButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                layout.setAlignment(FlowLayout.LEFT);
                layout.layoutContainer(container);
            }
        });


        centerButton = new JButton("Center");
        add(centerButton);
        centerButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                layout.setAlignment(FlowLayout.CENTER);
                layout.layoutContainer(container);
            }
        });



        rightButton = new JButton("Right");
        add(rightButton);
        rightButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                layout.setAlignment(FlowLayout.RIGHT);
                layout.layoutContainer(container);
            }
        });





    }








    public static void main(String[] args) {
	// write your code here


        FlowLaout flowLaout = new FlowLaout();


        flowLaout.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        flowLaout.setSize(300,75);
        flowLaout.setVisible(true);

    }
}