package com.api.mutithread;

public class ThreadViaRunnable implements Runnable{
	Thread t;
	ThreadViaRunnable(){
		t = new Thread(this,"Thread");
		t.start();
	}
	
	@Override
	public void run() {
		try {
			for(int i=0;i<10;i++) {
				Thread.sleep(1000);
				System.out.println("In Thread "+i);
			}
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
	}
	
	public static void main(String[] arg) {
		ThreadViaRunnable tvr = new ThreadViaRunnable();
		try {
			for(int i=0;i<10;i++) {
				Thread.sleep(500);
				System.out.println("Main Thread" + i);
			}
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		try {
			tvr.t.join();
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
		System.out.println("Exit Main");
	}
	
}
