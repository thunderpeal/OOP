package prac8;

public class UnfairWaitList<E> extends WaitList<E> {
    public UnfairWaitList(){
        super();
    }

    public void remove(E element){
        if (content.size() != 1){
            content.remove(element);
        }
    }

    public void moveToBack(E element){
        content.add(element);
    }
}
