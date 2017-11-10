import java.io.*;
import java.rmi.*; 
class class1 
{
 public void m1() throws RemoteException 
{
 System.out.println("m1 in class1"); } }

 class class2 extends class1 
{
  public void m1() throws IOException 
{  
   System.out.println("m1 in class2");

} }

class ExceptionTest2 
 { 
public static void main(String args[])
 {
   class1 obj = new class1();
  try{ 
obj.m1(); 
} catch(RemoteException e){ System.out.println("ioexception"); }

} }
