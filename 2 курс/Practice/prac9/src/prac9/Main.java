package prac9;

import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        HashMap<String, String> map = new HashMap<>();
        map.put("Zuev Andrey Sergeevich", "192820");
        map.put("Ivanov Ivan Ivanovich", "89102");
        map.put("Maksakova Larisa Vitalevna", "019245");
        System.out.println(map);

        Scanner in = new Scanner(System.in);
        System.out.print("Vvedite FIO: ");
        String FIO = in.nextLine();
        System.out.print("Vvedite INN: ");
        String INN = in.nextLine();
        in.close();

        try {
            String inn = new String(map.get(FIO));
            if (!inn.equals(INN)){
                throw new BadINNException("Wrong INN");
            }
            else {
                System.out.println("That's correct");
            }
        }
        catch(BadINNException e){
            System.out.println("Ooops, please, get your current INN and try again later");
        }
    }
}

