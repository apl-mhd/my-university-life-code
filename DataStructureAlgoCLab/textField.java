package com.company;

import javax.swing.*;
import javax.swing.JPasswordField;
import javax.swing.JTextField;
import javax.swing.JOptionPane;


import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class TextField extends JFrame {


    public final JTextField textField1;
    public final JTextField textField2;
    public final JTextField textField3;
    public final JPasswordField passwordField;


    public TextField(){

        super("Teseting jatextfiel");

        setLayout(new FlowLayout());

        textField1 = new JTextField(10);
        add(textField1);

        textField2= new JTextField("Enter text Here");
        add(textField2);


        textField3 = new JTextField("Uneditable text field", 21);
        textField3.setEditable(false);
        add(textField3);

        passwordField = new JPasswordField("Hidden text");
        add(passwordField);

        TextFieldHandler ob = new TextFieldHandler();

        textField1.addActionListener(ob);
        textField2.addActionListener(ob);
        textField3.addActionListener(ob);
        passwordField.addActionListener(ob);


    }


    public class TextFieldHandler  implements ActionListener {

        @Override
        public void actionPerformed(ActionEvent e) {

            String string = "null";

            if(e.getSource() == textField1)

                string = "texTfield1 "+ e.getActionCommand();


            if(e.getSource() == textField2)

                string = "texTfield2 "+ e.getActionCommand();



            if(e.getSource() == textField3)

                string = "texTfield3 "+ e.getActionCommand();



            if(e.getSource() == passwordField)

                string = "passwordField "+ e.getActionCommand();


              JOptionPane.showMessageDialog(null,string);
        }
    }

}






package com.company;

public class Main {


    public static void main(String[] args) {


        TextField textField =  new TextField();
        textField.setSize(350,100);
        textField.setVisible(true);
    }
}