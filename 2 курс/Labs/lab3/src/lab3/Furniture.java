package lab3;

public abstract class Furniture {
    private String color;
    private double cost;
    private String material;

    public Furniture(String color, double cost, String material){
        this.color=color;
        this.cost=cost;
        this.material=material;
    }
    public String getColor(){
        return color;
    }
    public double getCost(){
        return cost;
    }
    public String getMaterial(){
        return material;
    }
    public void setCost(int cost){
        this.cost=cost;
    }
}