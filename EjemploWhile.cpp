package EjemploWhile;
import java.util.*;

public class Ejerciciowhile {
	public static void main (String[] args) {
		Scanner entrada = new Scanner (System.in);
		int numero=0;
		int suma=0;
		
		System.out.println("Introduce un numero mayor a 0: ");
		numero = entrada.nextInt() ;
		
		while(numero>=0) {
			suma = suma + numero;
			System.out.println("Introduce un valor negativo para terminar el programa: ");
			numero = entrada.nextInt();
		}
		System.out.println("La suma es: "+suma);
	}

}
