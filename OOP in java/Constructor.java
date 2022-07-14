import javax.swing.plaf.synth.SynthStyle;

public class Constructor{
    /*default Constructor : when we dont call any 
     constructor then java automatically call default 
     constructor is also known as no argument constructor
      
     */
    Constructor(){
        System.out.println(" badu want pink");
    }
    public static void main(String[] args) {
        Constructor obj = new Constructor();
    }
}