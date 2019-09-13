package prac3;

class Square extends Rectangle {
    Square(){
        this.length = 2;
        this.width = 2;
        this.color = "red";
        this.filled = false;
    }
    Square(double side){
        this.length = side;
        this.width = side;
        this.color = "red";
        this.filled = false;
    }
    Square(double side, String color, boolean filled){
        this.length = side;
        this.width = side;
        this.color = color;
        this.filled = filled;
    }

    public double getSide(){
        return width;
    }
    public void setSide(double side){
        this.width = side;
        this.length = side;
    }

    @Override
    public void setWidth(double side) {
        super.setWidth(side);
    }

    @Override
    public void setLength(double side) {
        super.setLength(side);
    }

    @Override
    public String toString() {
        return "Shape: square, side: "+this.length+", color: "+this.color;
    }
}
