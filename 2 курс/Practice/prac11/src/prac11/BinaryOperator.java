package prac11;

abstract public class BinaryOperator implements Expression {
    protected Expression fOp;
    protected Expression sOp;

    abstract public double evaluate(double param);
}
