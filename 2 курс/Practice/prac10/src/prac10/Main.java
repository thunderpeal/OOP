package prac10;

public class Main {
    public static void main(String[] args) {

        ConcreteFactory factory = new ConcreteFactory() {
        };
        factory.createComplex();
        factory.CreateComplex(6, 7);

        ConcreteFactory factory2 = new ConcreteFactory() {
        };
        factory2.createComplex();
        factory2.CreateComplex(5, 2);

        ConcreteFactory factory3 = new ConcreteFactory() {
        };
        factory3.createComplex();
        factory3.CreateComplex(-5, 2);
    }
}
