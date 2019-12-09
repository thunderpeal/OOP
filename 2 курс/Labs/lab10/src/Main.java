import java.util.LinkedList;
import java.util.List;

public class Main {
    public static void main(String [] args){
        String [] str = {"1","2","3","4","5"};

        List <String> list = new LinkedList();

        for(int i=0;i< str.length; i++){
            list.add(str[i]);
            System.out.print(list.get(i));
        }
    }
}