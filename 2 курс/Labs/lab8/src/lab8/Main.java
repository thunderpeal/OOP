package lab8;
import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        try(FileWriter writer = new FileWriter("C:\\Users\\peals\\OneDrive\\Рабочий стол\\OOP\\2 курс\\Labs\\lab8\\src\\lab8\\test.txt", false);){
            System.out.println("Введите строку текста: ");
            Scanner in = new Scanner(System.in);
            String s = in.nextLine();
            in.close();
            writer.write(s);
            writer.flush();
        }catch(IOException ex){
            System.out.println(ex.getMessage());
        }
    }
}
