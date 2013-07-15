import java.util.*;

public class MadLibs {

	/**
	 * @param args
	 */
	public static void main(String[] args) {

		Random r = new Random();
		Scanner s = new Scanner(System.in);
		System.out.println("write an adjective");
		String adjective = s.nextLine();
		System.out.println(adjective);
		System.out.println("Write a Verb");
		String verb = s.nextLine();
		System.out.println(verb);
		System.out.println("Write a place");
		String place = s.nextLine();
		System.out.println(place);
		System.out.println("Write an animal");
		String animal = s.nextLine();
		System.out.println(animal);
		System.out.println("Write a famous person"); 
		String person = s.nextLine();
		System.out.println(person);
		System.out.println("Write an place");
		String place1 = s.nextLine();
		System.out.println("Write an object");
		String object = s.nextLine();
		System.out.println(object);
		System.out.println("Write a language");
		String language =s.nextLine();
		if (r.nextInt(2)==0){
		System.out.println("The " + adjective + animal + verb + "all over africa with " + person);}
		else{ 
		System.out.println("The" + object + " was thrown all the way to " + place + " where they spoke only " + language);}
		
		
		
		
	}

}
