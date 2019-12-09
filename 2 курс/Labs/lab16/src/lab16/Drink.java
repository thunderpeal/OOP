package lab16;

import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class Drink implements Alcohol {

    String name;
    String consist;
    String consist1;
    String consist2;
    String consist3;
    double size;
    String price;

    Drink(){
        name = ("Pina-Colada");
        consist = "rome";
        consist1 = "juice";
        consist2 = "fruits";
        consist3 = "milk2";
        size = 0.7;
        price = "four-hundred-rubles";
    }
    public String drinking() {
        return (name +" "+ consist +" "+ consist1 +" "+ consist2 +" "+ consist3 +" "+ price);
    }
}