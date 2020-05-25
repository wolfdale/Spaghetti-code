import java.util.concurrent.atomic.AtomicInteger;
class ThreadSafeSingleton {

    private static ThreadSafeSingleton oddInstance;
    private static ThreadSafeSingleton evenInstance;
    private static AtomicInteger atomicInteger = new AtomicInteger(1); 
    private ThreadSafeSingleton(){}
   
    public static synchronized ThreadSafeSingleton getInstance() {
        if (null == oddInstance && atomicInteger.get() % 2 != 0) {
            oddInstance = new ThreadSafeSingleton();
            System.out.println("Odd Instance");
        }
        else if(null == evenInstance) {
            evenInstance = new ThreadSafeSingleton();
            System.out.println("Even Instance");
        }
        
        if (atomicInteger.getAndIncrement() %2 == 0) {
            evenInstance.callEven();
            return evenInstance; 
        } else {
            oddInstance.callOdd();
            return oddInstance; 
        }
    }
    

    public void callEven(){
        System.out.println("This is Even call");
    }
    
    public void callOdd(){
        System.out.println("This is Odd call");
    }
    public void showMsg(){
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
