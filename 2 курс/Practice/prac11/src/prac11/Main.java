package prac11;

public class Main {
    public static void main(String[] args) {
        double arg = 44;
        System.out.println(new Add(new Substract(new Multiply(new Variable("x"), new Variable("x")),
                new Multiply(new Const(3), new Variable("x"))), new Const(2)).evaluate(arg));
    }
}
