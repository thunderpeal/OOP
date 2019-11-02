package prac2;

public class TestAuthor {
    public static void main(String[] args) {
        Author a1 = new Author(
                "Jacob", "jacob@gmail.com", 'm');
        System.out.println(a1.ToString());
        System.out.println(a1.getName());
        a1.setEmail("not_jacob@gmail.com");
        System.out.println(a1.getEmail());
    }
}