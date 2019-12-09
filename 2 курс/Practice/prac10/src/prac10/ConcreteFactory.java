package prac10;

public abstract class ConcreteFactory implements ComplexAbstractFabrick {
    public Complex createComplex() {
        System.out.println("Создано новое комплексное число: ");
        return new Complex();
    }

    public Complex CreateComplex(int real, int image) {
        System.out.println(real + " + " + image+"i");
        return new Complex();
    }
}
