package lab3;

public class FurnitureShop {
    public static void main(String[] args) {
        Table table1 = new Table("Red", 5099, "Wood", "for work");
        Wardrobe w1 = new Wardrobe("Brown", 8099, "Steel", 15);
        System.out.println("This is what we have in our store: ");
        w1.to_String();
        table1.to_String();
        w1.setCost(2000);
        System.out.print("By the way you can get a wardrobe with a new price! Only for ");
        System.out.println(w1.getCost());

    }
}
