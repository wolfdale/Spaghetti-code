package com.design.rollbacks;

import com.design.model.Info;

import java.util.LinkedList;
import java.util.List;

public class MultiState {
    List<Memento> multiState = new LinkedList<>();

    public Memento getState(int x){
        Memento m = null;

        try {
            m = multiState.get(x);
        }
        catch (IndexOutOfBoundsException ex){
            return new Memento();
        }

        return m;
    }

    public void saveState(Info info){
        Memento m = new Memento(info);
        multiState.add(m);
    }
}
