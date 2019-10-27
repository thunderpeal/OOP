import java.util.*;

public class Main {
    public static void game(){
        ArrayDeque<Integer> player1 = new ArrayDeque<>();
        ArrayDeque<Integer> player2 = new ArrayDeque<>();

        ArrayList<Integer> deck = new ArrayList<>(10);
        for (int i = 0; i < 10; i++){
            deck.add(i);
        }
        Collections.shuffle(deck);
        for (int i = 0; i < 5; i++){
            player1.add(deck.get(i));
            player2.add(deck.get(9-i));
        }
        int count = 0;
        System.out.println(player1);
        System.out.println(player2);
        while (player1.size()!=0 && player2.size()!=0 && count < 106){
            int a = player1.pollFirst();
            int b = player2.pollFirst();
            if (a>b){
                player1.addLast(a);
                player1.addLast(b);
            }
            else{
                player2.addLast(b);
                player2.addLast(a);
            }
            count+=1;

        }
        if (count==106){
            System.out.println("botva");
        }
        else if (player1.size()==0) {
            System.out.print("player2 ");
            System.out.println(count);
        }
        else{
            System.out.print("player1 ");
            System.out.println(count);
        }
    }
    public static void main(String[] args) {
        game();
    }
}