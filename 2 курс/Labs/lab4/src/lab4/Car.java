package lab4;

class Car implements Nameable {
    public String name;
    public int year;
    public int cost;
    public Car(String name, int year, int cost){
        this.name = name;
        this.year = year;
        this.cost = cost;
    }
    public void getName(){
        System.out.println("The full name of the car is "+name);
    }
}
