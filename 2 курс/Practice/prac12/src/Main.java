import java.util.Scanner;
import java.lang.CharSequence;

public class Main {

    public static void main(String[] args) {
        String s1,s2 = null,v;
        Scanner in = new Scanner(System.in);
        System.out.print("Input a phone number: ");
        s1 = in.nextLine();
        char[] chars = s1.toCharArray();

        if(chars[0]=='8') {
            chars[0]='7';
        }
        if(chars[0]=='+') {
            for(int i=0;i<11;i++) {
                chars[i]=chars[i+1];
            }

        }
        s2="+"+chars[0]+" ("+chars[1]+chars[2]+chars[3]+") "+chars[4]+chars[5]+chars[6];
        s2=s2+' '+chars[7]+chars[8]+' '+chars[9]+chars[10];


        System.out.println(s2);
    }

}