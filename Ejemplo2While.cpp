package Ejemplowhile2;
import java.util.*;

public class NAsteriscos {
	public static void main (String[] args) {
		Scanner entrada = new Scanner (System.in); 
	int num1=1;
	int num=1;
	
	System.out.println("Introduce el numero de asteriscos que deseas mostrar: ");
	num1 = entrada.nextInt() ;

	while(num<=num1) {
		System.out.print(" * ");
		num++;	 
	}
	num1++;
	}
}
