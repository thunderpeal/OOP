package prac11;

public class Variable implements Expression {
    private String name;
    public Variable(String nam) {
        name = nam;
    }

    public double evaluate(double param) {
        return param;
    }
}