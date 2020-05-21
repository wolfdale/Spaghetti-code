import java.util.concurrent.CountDownLatch;
public class CodeDemo
{
    public static void main (String[] args) throws java.lang.Exception
    {
        CountDownLatch cdl = new CountDownLatch(3);
        Thread t1 = new Thread(new RandomThread("T1", cdl));
        Thread t2 = new Thread(new RandomThread("T2", cdl));
        Thread t3 = new Thread(new RandomThread("T3", cdl));
        t1.start();
        t2.start();
        t3.start();

        try{
            cdl.await();
        }catch(InterruptedException e){
            System.out.println("Exception Occured");
        }
        System.out.println("Done Processing");
    }
}

class RandomThread implements Runnable{
    String threadName;
    CountDownLatch cdl;
    public RandomThread(String threadName, CountDownLatch cdl){
        this.threadName = threadName;
        this.cdl = cdl;
    }

    public void run(){
        System.out.println("Thread Running.. Thread Name " + threadName);
        cdl.countDown();
    }
}
