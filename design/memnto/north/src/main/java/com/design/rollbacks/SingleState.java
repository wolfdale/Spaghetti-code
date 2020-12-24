package com.design.rollbacks;

import com.design.model.Info;

public class SingleState {
    Memento singleHold = null;

    public Memento getState() {
        return this.singleHold == null ? new Memento() : this.singleHold;
    }

    public void saveState(Info info) {
        this.singleHold = new Memento(info);
    }

}
