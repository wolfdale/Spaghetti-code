package com.design.model;

public class Info {
    public Info(String name, String division) {
        this.name = name;
        this.division = division;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getDivision() {
        return division;
    }

    public void setDivision(String division) {
        this.division = division;
    }

    @Override
    public String toString() {
        return this.name + " " + this.division;
    }

    private String name;

    private String division;
}
