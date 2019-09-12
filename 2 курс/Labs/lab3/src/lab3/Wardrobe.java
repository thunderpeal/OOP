package lab3;

class Wardrobe extends Furniture{
    private int shelfCount;
    public Wardrobe(String color, double cost, String material, int shelfCount){
        super(color,cost,material);
        this.shelfCount=shelfCount;
    }
    public int getShelfCount(){
        return shelfCount;
    }
    public void setShelfCount(int shelfCount){
        this.shelfCount=shelfCount;
    }
    public void to_String(){
        System.out.println(this.getColor() +" "+this.getMaterial()+ " Wardrobe with "
                + this.getShelfCount() + " shelves only for "+this.getCost());
    }
}