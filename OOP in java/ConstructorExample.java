 public class ConstructorExample {

    // Data Memnber
    String str;

    // Parameterize Constructor it has specific number of parameterize constructor 
    ConstructorExample (String s) {
        str = s;
    }

    public void show() {
        System.out.println(str);
    }

    public static void main(String[] args) {
        // This would invoke Parameterize Constructor of the class
        ConstructorExample obj = new ConstructorExample("elon gedam ");
        obj.show();
    }
    
}