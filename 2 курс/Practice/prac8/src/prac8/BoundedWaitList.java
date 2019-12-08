package prac8;

public class BoundedWaitList<E> extends WaitList<E>{
    /**
     * поле вместимость
     */
    private int capacity;

    public BoundedWaitList(int capacity) {
        super();
        this.capacity = capacity;
    }

    int getCapacity() {
        return capacity;
    }

    @Override
    public void add(E element) {
        if (content.size() < capacity) {
            content.add(element);
        }
    }

    @Override
    public String toString() {
        String s = "BoundedWaitList: ";
        for (E element: content) {
            s += element + " ";
        }
        return s;
    }
}
