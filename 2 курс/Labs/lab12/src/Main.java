import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        String p;
        boolean notLongEnough=false;
        boolean r=false, uppercase=false, number=false, lowercase=false, underline=false;
        Scanner in = new Scanner(System.in);
        System.out.print("Input a password: ");
        p = in.nextLine();
        char[] chars = p.toCharArray();
        for (int i=0;i<p.length();i++) {
            if (p.length()<8){
                notLongEnough=true;
            }
            if((chars[i]>64)&&(chars[i]<91)) {
                uppercase=true;
            }
            else if((chars[i]>96)&&(chars[i]<123)) {
                lowercase=true;
            }
            else if(chars[i]=='_') {
                underline=true;
            }
            else if((chars[i]>47)&&(chars[i]<58)) {
                number=true;
            }else
            {
                r=true;
            };
        }
        if(r) {
            System.out.println("Error! Some symbols are not allowed");
        }else if(uppercase&&lowercase&&number&&!notLongEnough){
            System.out.println("Good password");
        }else {
            System.out.println("Bad password");
        }
    }

}