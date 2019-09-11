package com.company;

public class BookTest {
    public static void main(String[] args) {
        Book book1 = new Book();
        Book book2 = new Book("Kranik", "Chak Palanik", 2007, 4.7);

        book2.setAuthor("Stigmata");
        System.out.println("rate of book1 is "+book1.getRate());
        book1.print();
        book2.print();
    }
}
