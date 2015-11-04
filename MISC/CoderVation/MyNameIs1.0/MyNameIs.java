import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class MyNameIs {

    public static void main(String[] args) {

        String newName,trueName,query,result;
         Map name = new HashMap();
        Scanner sc=new Scanner(System.in);
        sc.useDelimiter(" |\\n");
        int n=sc.nextInt();
        int q=sc.nextInt();
        for(int i=0;i<n;i++){
            trueName=sc.next();
            newName=sc.next();
            name.put(newName,trueName);         //put or insert newName,TrueName in Map
        }
        for(int i=0;i<q;i++){
            query=sc.next();        
            if(name.get(query)!=null)           //find given new name in Map
                System.out.println(name.get(query));//print their real name
            else
                System.out.println("Name not found");

    }

}
}