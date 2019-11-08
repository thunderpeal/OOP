package lab3;

class Table extends Furniture {
    private String type;

    public Table(String color, double cost, String material, String type){
        super(color, cost, material);
        this.type = type;

    }

    public String getType(){
        return type;
    }
    public void setType(String type){
        this.type = type;
    }
    public void to_String(){
        System.out.println(this.getColor() +" "+this.getMaterial()+ " " +  " Table " + this.getType()+" only for "
                +this.getCost());
    }
}