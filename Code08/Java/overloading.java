//Output In Object
class TestClass{
    void probe(Integer x) { System.out.println("In Integer"); } 
    
    void probe(Object x) { System.out.println("In Object"); } 
    
    void probe(Long x) { System.out.println("In Long"); } 
    
    public static void main(String[] args){
        String a = "hello"; 
        new TestClass().probe(a); 
    }
}
