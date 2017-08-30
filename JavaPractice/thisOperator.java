class XChange {
 
    private int myValue = 0;
    //No effect
    public void showOne(int myValue){
        myValue = myValue;
    }
 
    public void showTwo(int myValue){
        this.myValue = myValue;
    }    
    public static void main(String[] args) {
        XChange ct = new XChange();
        //No effect
        ct.showOne(100);
        System.out.println(ct.myValue);
        ct.showTwo(200);
        System.out.println(ct.myValue);
    }
}
