package prac11;

public class Substract extends BinaryOperator implements Expression {
    public Substract(Expression first, Expression second) {
        fOp = first;
        sOp = second;
    }

    public double evaluate(double param) {
        return fOp.evaluate(param) - sOp.evaluate(param);
    }
}