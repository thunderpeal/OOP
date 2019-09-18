package lab4;

class Planets implements Nameable {
    public String name;
    public int whenFound;
    public boolean isInSolarSystem;

    public Planets(String name, int whenFound, boolean isInSolarSystem){
        this.name = name;
        this.whenFound = whenFound;
        this.isInSolarSystem = isInSolarSystem;
    }
    public void getName(){
        System.out.println("The name of this planet is "+name);
    }
}
