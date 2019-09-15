import java.util.Scanner;

public class Main {

    public static int var10(int a, int s){
        s += a%10;
        a/=10;
        if (a>=1){
            s*=10;
            s=var10(a,s);
        }
        return s;
    }
    public static int var11(){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int s = 0;
        if (n==0){
            int m = in.nextInt();
            if (m==0){
                return s;
            }
        }
        else {
            if (n == 1) {
                s=1;
            }
        }
        return var11()+s;

    }
    public static void var12() {
        java.util.Scanner in = new java.util.Scanner(System.in);
        int n = in.nextInt();
        if (n > 0) {
            if (n % 2 == 1) {
                System.out.println(n);
                var12();
            } else {
                var12();
            }
        }
    }

    public static void main(String[] args) {
        System.out.println("Тест задания номер 10.");
        Scanner in = new Scanner(System.in);
        System.out.print("Input a number A: ");
        int a = in.nextInt();
        System.out.println(var10(a,0));
        System.out.println();
        System.out.println("Тест задания номер 11.");
        System.out.println(var11());
        System.out.println();
        System.out.println("Тест задания номер 12.");
        var12();
        in.close();
    }
}
