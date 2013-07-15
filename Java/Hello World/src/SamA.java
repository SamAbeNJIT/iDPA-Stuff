import java.util.*;
public class SamA {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		System.out.println("Hello Sam");
		Scanner Sam = new Scanner (System.in);
		System.out.println("How are you today?");
		String answer = Sam.nextLine();
		System.out.println (answer);
		System.out.println("How old are you?");
		String answer1 = Sam.nextLine();
		System.out.println (answer1);
		Random r = new Random(); 
		System.out.println (r.nextInt(10));
	}

}
