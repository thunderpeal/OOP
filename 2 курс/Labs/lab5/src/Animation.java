import java.awt.*;
import java.awt.event.*;
class Animation extends Frame
{
    private Image[] img=new Image[25];
    private int count;
    Animation (String s)
    {
        super(s);
        setSize(348, 365);
        MediaTracker tr=new MediaTracker(this);
        for (int k=0; k<24; k++)
        {
            img[k]=getToolkit().getImage("src/"+(k)+".gif");
            tr.addImage(img[k],0);
        }
        try
        {
            tr.waitForAll();
        }
        catch (InterruptedException e){}
        setVisible(true);
    }
    public void paint(Graphics g)
    {
        g.drawImage(img[count%23], 15, 45, this);
    }
    public void update(Graphics g) {paint(g); }
    public void go()
    {
        while(count<230)
        {
            repaint();
            try
            {
                Thread.sleep(45);
            }
            catch (InterruptedException e){}
            count++;
        }
    }
    public static void main(String[] args)
    {
        Animation anim_window=new Animation("Lab5");
        anim_window.go();
        anim_window.addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent ev)
            {
                System.exit(0);
            }
        });
    }
}