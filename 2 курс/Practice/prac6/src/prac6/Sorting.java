package prac6;
import java.util.ArrayList;
import java.lang.*;
public class Sorting {
    private static ArrayList<Student> SortUnsorted(ArrayList<Student> a, int lo, int hi) {
        if (hi <= lo)
            return a;
        int mid = lo + (hi - lo) / 2;
        SortUnsorted(a, lo, mid);
        SortUnsorted(a, mid + 1, hi);
        ArrayList<Student> buf = (ArrayList<Student>)a.clone();

        for (int k = lo; k <= hi; k++)
            buf.set(k, a.get(k));

        int i = lo, j = mid + 1;
        for (int k = lo; k <= hi; k++) {

            if (i > mid) {
                a.set(k, buf.get(j));
                j++;
            } else if (j > hi) {
                a.set(k, buf.get(i));
                i++;
            } else if (buf.get(j).compareTo(buf.get(i))<0) {
                a.set(k, buf.get(j));
                j++;
            } else {
                a.set(k, buf.get(i));
                i++;
            }
        }
        return a;
    }


    public static void main(String[] args) {
        ArrayList<Student> a = new ArrayList<Student>();
        ArrayList<Student> b = new ArrayList<Student>();

        a.add(new Student("INBO-03-18", "Sascha", 20));
        a.add(new Student("INBO-04-18", "Slava", 18));
        a.add(new Student("INBO-03-18", "Slava",20));
        a.add(new Student("INBO-03-18", "sascha",18));
        a.add(new Student("INBO-03-18", "sascha",19));
        b.add(new Student("INBO-03-18", "Alex", 19));
        b.add(new Student("INBO-01-18", "Pascha", 19));
        b.add(new Student("INBO-04-18", "Tolya", 18));
        b.add(new Student("INBO-03-18", "Tver", 2012));
        a.addAll(b);

        a = SortUnsorted(a, 0, a.size() -1);
        for (Student g: a){
            System.out.println(g.toString());
        }
    }
}