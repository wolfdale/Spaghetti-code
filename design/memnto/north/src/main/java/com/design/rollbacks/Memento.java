package com.design.rollbacks;

import com.design.model.Info;

/**
 * Memento for Info obj
 */
public class Memento {
    private Info info = null;

    // Intentionally left blank
    public Memento() {

    }

    // Deep copy
    public Memento(Info info){
        this.info = new Info(info.getName(), info.getDivision());
    }

    public Info getState() throws NullPointerException {
        if(this.info == null) {
            throw new NullPointerException("Invalid State !");
        }

        return this.info;
    }
}
