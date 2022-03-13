https://coderanch.com/t/342138/java/switching-JPanels-pressing-buttons
https://www.google.com/search?client=ubuntu&channel=fs&q=java+swing+switch+between+panels&ie=utf-8&oe=utf-8

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import javax.swing.text.Document;
  
public class MS extends JFrame implements ActionListener {
    private JButton btnStakes;
    private JButton btnContacts;
    private JTextArea text = new JTextArea("hello world");
    private KlantenOverzichtFrame klanten = new KlantenOverzichtFrame();
  
    public MS(String title) {
        super(title);
        btnStakes = new JButton("stakes");
        btnContacts = new JButton("contacts");
        btnStakes.addActionListener(this);
        btnContacts.addActionListener(this);
        text.setFont(text.getFont().deriveFont(28f));
        getContentPane().add(btnStakes, "North");
        getContentPane().add(btnContacts, "South");
        setSize(800,600);
        setLocationRelativeTo(null);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }
  
    public void actionPerformed(ActionEvent event) {
        if (event.getSource() == btnStakes) {
            getContentPane().remove(klanten);
            getContentPane().add(text, BorderLayout.CENTER);
            text.setCaretPosition(text.getDocument().getLength());
            text.requestFocusInWindow();
        }
  
        if (event.getSource() == btnContacts) {
            getContentPane().remove(text);
            getContentPane().add(klanten, BorderLayout.CENTER);
        }
  
        //((JComponent)getContentPane()).revalidate();
        getContentPane().validate();
        getContentPane().repaint();
    }
  
    public static void main(String[] args) {
        JFrame.setDefaultLookAndFeelDecorated(true);
        new MS("MS");
    }
}
  
class KlantenOverzichtFrame extends JPanel {
    private JTable klantenTabel;
  
    public KlantenOverzichtFrame() {
        super(new BorderLayout());
        String[] colNames = { "column 1", "column 2", "column 3" };
        int rows = 16, cols = 3;
        Object[][] data = new Object[rows][cols];
        for(int row = 0; row < rows; row++)
            for(int col = 0; col < cols; col++)
                data[row][col] = "item " + (row*cols + col+1);
        DefaultTableModel model = new DefaultTableModel(data, colNames);
        klantenTabel = new JTable(model);
  
        //Create the scroll pane and add the table to it.
        JScrollPane scrollPane = new JScrollPane(klantenTabel);
  
        //Add the scroll pane to this panel.
        add(scrollPane, BorderLayout.CENTER);
        add(new JButton("test"), BorderLayout.SOUTH);
    }
}