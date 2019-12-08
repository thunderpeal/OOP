package prac8;
import java.util.Collection;

/**
 * интерфейс для реализации основных функций очереди
 * @param <E>
 */
public interface IWaitList<E> {
    void add(E element);
    E remove();
    boolean contains(E element);
    boolean containsAll(Collection<E> c);
    boolean isEmpty();
}
