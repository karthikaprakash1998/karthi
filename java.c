 public class NumberToWord  
 {
    private static final String[] specialNames = {
        "",
        " thousand",
        " million",
        " billion",
        " trillion",
        " quadrillion",
        " quintillion"
    };
    
    private static final String[] tensNames = {
        "",
        " ten",
        " twenty",
        " thirty",
        " forty",
        " fifty",
        " sixty",
        " seventy",
        " eighty",
        " ninety"
    };
    
    private static final String[] numNames = {
        "",
        " one",
        " two",
        " three",
        " four",
        " five",
        " six",
        " seven",
        " eight",
        " nine",
        " ten",
        " eleven",
        " twelve",
        " thirteen",
        " fourteen",
        " fifteen",
        " sixteen",
        " seventeen",
        " eighteen",
        " nineteen"
    };
    
    private String convertLessThanOneThousand(int number) {
        String c;
        
        if (number % 100 < 20){
            c = numNames[number % 100];
            number /= 100;
        }
        else {
            c = numNames[number % 10];
            number /= 10;
            
            c= tensNames[number % 10] + c;
            number /= 10;
        }
        if (number == 0) return c;
        return numNames[number] + " hundred" + c;
    }
    
    public String convert(int number) {

        if (number == 0) { return "zero"; }
        
        String prefix = "";
        
        if (number < 0) {
            number = -number;
            prefix = "negative";
        }
        
        String c= "";
        int place = 0;
        
        do {
            int n = number % 1000;
            if (n != 0){
                String s = convertLessThanOneThousand(n);
                c= s + specialNames[place] + current;
            }
            place++;
            number /= 1000;
        } while (number > 0);
        
        return (prefix + c).trim();
    }
    
    public static void main(String[] args) {
        NumberToWord obj = new NumberToWord();
        System.out.println("*** " + obj.convert(123456789));
        System.out.println("*** " + obj.convert(-55));
    }
}



