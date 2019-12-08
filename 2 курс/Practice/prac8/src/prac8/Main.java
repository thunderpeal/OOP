package prac8;

public class Main {
    public static void main(String[] args) {
        UnfairWaitList a = new UnfairWaitList();
        a.add("I");
        a.add("am");
        a.add("Iron");
        a.add("Man");
        System.out.println(a.toString());
        System.out.println(a.isEmpty());
        System.out.println(a.contains("Man"));
        a.remove("Iron");
        System.out.println(a.toString());
    }
}
