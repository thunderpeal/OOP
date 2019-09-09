package com.company;

public class Main {

    public static void main(String[] args) {
      Author a1 = new Author(
              "Jacob", "jacom@gmail.com", 'm');
      System.out.println(a1);
      System.out.println(a1.getName());
      a1.setEmail("not_jacob@gmail.com");
      System.out.println(a1.getEmail());

    }
}
