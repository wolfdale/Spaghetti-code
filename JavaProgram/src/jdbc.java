import java.sql.*;

public class jdbc{
   static final String JDBC_DRIVER = "com.mysql.jdbc.Driver";  
   static final String DB_URL = "jdbc:mysql://localhost/emp";
   static final String USER = "root";
   static final String PASS = "oir";
   
   public static void main(String[] args) {
   Connection conn = null;
   Statement stmt = null;
   try{
      Class.forName("com.mysql.jdbc.Driver");
      System.out.println("Connecting to database...");
      conn = DriverManager.getConnection(DB_URL,USER,PASS);
      System.out.println("Creating statement...");
      stmt = conn.createStatement();
      String sql;
      sql = "SELECT * FROM employee";
      ResultSet rs = stmt.executeQuery(sql);
      while(rs.next()){
         int id  = rs.getInt("ID");
         String name = rs.getString("name");
         String city = rs.getString("city");
         System.out.print("ID: " + id);
         System.out.print(", Name: " + name);
         System.out.println(", city: " + city);
      }
      rs.close();
      stmt.close();
      conn.close();
   }catch(SQLException se){
      se.printStackTrace();
   }catch(Exception e){
      e.printStackTrace();
   }
   finally{
	   s	try{
         if(stmt!=null)
            stmt.close();
      }catch(SQLException se2){
      }
      try{
         if(conn!=null)
            conn.close();
      }catch(SQLException se){
         se.printStackTrace();
      }
   }
   
   }
}
