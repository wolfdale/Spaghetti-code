 import java.util.concurrent.BlockingQueue;
 import java.util.concurrent.LinkedBlockingQueue;
 class ProducerConsumerSolution {
     public static void main(String[] args) {
         BlockingQueue < Integer > sharedQ = new LinkedBlockingQueue < Integer > ();
         Producer p = new Producer(sharedQ);
         Consumer c = new Consumer(sharedQ);
         p.start();
         c.start();
     }
 }
 class Producer extends Thread {
     private BlockingQueue < Integer > sharedQueue;
     public Producer(BlockingQueue < Integer > aQueue) {
         super("PRODUCER");
         this.sharedQueue = aQueue;
     }
     public void run() {
         {
             for (int i = 0; i < 10; i++) {


                 try {
                     System.out.println(getName() + " produced " + i);
                     sharedQueue.put(i);
                     Thread.sleep(200);
                 } catch (InterruptedException e) {
                     e.printStackTrace();
                 }
             }
         }
     }
 }

 class Consumer extends Thread {
     private BlockingQueue < Integer > sharedQueue;
     public Consumer(BlockingQueue < Integer > aQueue) {
         super("CONSUMER");
         this.sharedQueue = aQueue;
     }
     public void run() {
         try {
             while (true) {
                 Integer item = sharedQueue.take();
                 System.out.println(getName() + " consumed " + item);
             }
         } catch (InterruptedException e) {
             e.printStackTrace();
         }
     }
 }
