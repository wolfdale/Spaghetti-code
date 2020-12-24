package com.design;

import com.design.model.Info;
import com.design.rollbacks.Memento;
import com.design.rollbacks.MultiState;
import com.design.rollbacks.SingleState;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        MultiState multi = new MultiState();
        SingleState single = new SingleState();
        Info i1 = new Info("Runner", "Kill");
        multi.saveState(i1);
        single.saveState(i1);

        i1.setDivision("Accounts");

        multi.saveState(i1);

        i1.setName("SkyLake");

        multi.saveState(i1);

        // intentionally not saving state
        i1.setName("Nemesis");
        single.saveState(i1);


        Memento m1 = multi.getState(0);
        System.out.println(m1.getState());

        Memento m2 = single.getState();
        System.out.println(m2.getState());
    }
}
