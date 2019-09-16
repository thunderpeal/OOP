import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class LabExample extends JFrame
{
    public int milan = 0;
    public int r_m = 0;
    JPanel[] pnl = new JPanel[2];
    JButton button1 = new JButton(" AС Milan");
    JButton button2 = new JButton(" Real Madrid");
    JLabel jlabel1 = new JLabel("Result 0 x 0");
    JLabel jlabel2 = new JLabel("Last scorer: N/A");
    JLabel jlabel3 = new JLabel("Winner: DRAW");
    Font fnt = new Font("Times new roman",Font.BOLD,20);
    public LabExample()
    {
        super("Example");
        setLayout(new FlowLayout());
        setSize(240,230);

        setLayout(new GridLayout(2,1));
        add(jlabel1);
        add(jlabel2);
        add(jlabel3);
        pnl[0]=new JPanel();
        pnl[1]=new JPanel();
        pnl[0].setLayout(new BorderLayout());
        pnl[1].setLayout(new BorderLayout());
        pnl[0].add(button1,BorderLayout.WEST);
        pnl[0].add(button2,BorderLayout.EAST);
        pnl[0].add(jlabel1,BorderLayout.SOUTH);
        pnl[1].add(jlabel2,BorderLayout.NORTH);
        pnl[1].add(jlabel3,BorderLayout.WEST);
        add(pnl[0]);
        add(pnl[1]);

        button1.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent ae)
            {
                milan+=1;
                if (milan>r_m){
                    jlabel3.setText("Winner: AC Milan");
                }
                else if(milan==r_m){
                    jlabel3.setText("Winner: DRAW");
                }
                jlabel2.setText("Last scorer: AC Milan");
                jlabel1.setText("Result "+ milan +" x "+ r_m);
            }
        });
        button2.addActionListener(new ActionListener(){
            public void actionPerformed(ActionEvent ae)
            {
                r_m+=1;
                if (milan<r_m){
                    jlabel3.setText("Winner: Real Madrid");
                }
                else if(milan==r_m){
                    jlabel3.setText("Winner: DRAW");
                }
                jlabel2.setText("Last scorer: Real Madrid");
                jlabel1.setText("Result "+ milan +" x "+ r_m);
            }
        });
    }

    public static void main(String[]args)
    {
        new LabExample().setVisible(true);
    }
}
