class ThreadSafeSingleton {

    private static ThreadSafeSingleton instance;
    
    private ThreadSafeSingleton(){}
   
    // DCL 
    public static ThreadSafeSingleton getInstance(){
        if(instance == null){
            synchronized(ThreadSafeSingleton.class) {
                if(instance == null) {
                    instance = new ThreadSafeSingleton();
                    System.out.println("Creating new instance");
                }
            }
        }
        
        return instance;
    }

    public void showMsg(){
        System.out.println("Showing MSG");
    }
}

class Runner {
    public static void main(String[] args) {
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
        ThreadSafeSingleton.getInstance().showMsg();
    }
}
