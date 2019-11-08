import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;


public class Main extends JFrame {
    public static void createGui(){
        Font font = new Font("Times New Roman", Font.BOLD, 16);
        JFrame frame = new JFrame("Test Frame");

        JTextArea area = new JTextArea();

        JMenuBar menubar = new JMenuBar();

        JMenu menu1 = new JMenu("Цвет");
        JMenu menu2 = new JMenu("Шрифт");

        JMenuItem blue = new JMenuItem("Синий");
        blue.setForeground(Color.blue);
        blue.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setForeground(Color.blue);
            }
        });
        menu1.add(blue);
        JMenuItem red = new JMenuItem("Красный");
        red.setForeground(Color.RED);
        red.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setForeground(Color.RED);
            }
        });
        menu1.add(red);
        JMenuItem black = new JMenuItem("Чёрный");
        black.setForeground(Color.black);
        black.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setForeground(Color.black);
            }
        });
        menu1.add(black);

        JMenuItem TMR = new JMenuItem("Times New Roman");
        TMR.setFont(new Font("Times New Roman", font.BOLD, 12) );
        TMR.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setFont(new Font("Times New Roman", font.BOLD, 16) );
            }
        });
        menu2.add(TMR);
        JMenuItem MSSS = new JMenuItem("MS Sans Serif");
        MSSS.setFont(new Font("MS Sans Serif", font.BOLD, 12) );
        MSSS.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setFont(new Font("MS Sans Serif", font.BOLD, 16) );
            }
        });
        menu2.add(MSSS);
        JMenuItem CN = new JMenuItem("Courier New");
        CN.setFont(new Font("Courier New", font.BOLD, 12) );
        CN.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                area.setFont(new Font("Courier New", font.BOLD, 16) );
            }
        });
        menu2.add(CN);

        menubar.add(menu1);
        menubar.add(menu2);


        frame.setJMenuBar(menubar);
        frame.add(area);
        frame.setPreferredSize(new Dimension(270, 225));
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }


    public static void main(String[] args) {
        javax.swing.SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                createGui();
            }
        });
    }
}