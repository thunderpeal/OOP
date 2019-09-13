package prac3;

class Rectangle extends Shape {
    protected double width;
    protected double length;

    public Rectangle(){
        this.width = 5;
        this.length = 4;
        this.color = "red";
        this.filled = false;
    }
    public Rectangle(double width, double length){
        this.width = width;
        this.length = length;
        this.color = "red";
        this.filled = false;
    }
    public Rectangle(double width, double length, String color, boolean filled){
        this.width = width;
        this.length = length;
        this.color = color;
        this.filled = filled;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public double getLength() {
        return length;
    }

    public void setLength(double length) {
        this.length = length;
    }

    @Override
    public double getArea(){
        return width*length;
    }
    @Override
    public double getPerimeter(){
        return (width+length)*2;
    }
    @Override
    public String toString(){
        return "Shape: rectangle, length: "+this.length+", width: "+this.width+", color: "+this.color;
    }
}
