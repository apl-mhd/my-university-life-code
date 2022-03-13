package com.company;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class GridLayoutFrame extends JFrame implements ActionListener{




    private final JButton[] buttons;
    private static final String[] names ={"One","Two","Three","Four","Five","Six"};
    private boolean toggle = true;
    private final Container container;
    private final GridLayout gridLayout1;
    private final GridLayout gridLayout2;



    public GridLayoutFrame() {

        super("Gridlayout Demo");

        gridLayout1 = new GridLayout(2,3,5,5);
        gridLayout2 = new GridLayout(3,2);

        setLayout(gridLayout1);
        container = getContentPane();

        buttons = new JButton[names.length];

        for (int i=0; i<names.length; i++){

            buttons[i]=new JButton(names[i]);
            add(buttons[i]);
            buttons[i].addActionListener(this);
        }

    }


    @Override
    public void actionPerformed(ActionEvent e) {

        if(toggle)
            container.setLayout(gridLayout2);
        else
            container.setLayout(gridLayout1);
        toggle = !toggle;

        container.validate();
    }

    public static void main(String[] args) {
	// write your code here


        GridLayoutFrame ob = new GridLayoutFrame();
        ob.setSize(300,200);
        ob.setVisible(true);


    }
}