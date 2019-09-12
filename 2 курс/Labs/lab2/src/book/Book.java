package book;

public class Book {
    private String name;
    private String author;
    private int publication_year;
    private double rate;

    public Book(){
        this.name= "Master and Margarita";
        this.author= "Bulgakov";
        this.publication_year= 1967;
        this.rate = 5.0;
    }

    public Book(String name, String author, int p_y, double rate){
        this.name= name;
        this.author=author;
        this.publication_year=p_y;
        this.rate = rate;
    }

    public void setName(String name){
        this.name = name;
    }
    public void setAuthor(String author){
        this.author = author;
    }
    public void setPublication_year(int publ){
        this.publication_year = publ;
    }

    public String getName(){
        return name;
    }
    public String getAuthor(){
        return author;
    }
    public int getPublication_year(){
        return publication_year;
    }
    public double getRate(){
        return rate;
    }
    public void print(){
        System.out.println(author+"-"+name+ " ("+ publication_year+") rate: "+rate);
    }
}

