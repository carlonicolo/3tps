<<<<<<< HEAD
public class Main {
    public static void main(String[] args) {
        System.out.println("Hello, World!");
=======
import Lab1.*;

public class Main {
    public static void main(String[] args) {

        System.out.println("Hello Welcome to Java");
        Animale pippo = new Animale("Pippo");

        System.out.println("Il nome dell'oggetto pippo è: " + pippo.getNome());
        pippo.setNome("PIPPO");
        System.out.println("ora il nome è diventato: " + pippo.getNome());

        System.out.println(pippo);

        pippo.eatFood(1000);
        System.out.println(pippo);
        pippo.goToWalk(100);
        System.out.println(pippo);

        Animale pluto = new Animale("Pluto",10,100,false);
        System.out.println(pluto);

>>>>>>> 73adff311f684b2df1bb26e5ab87c7050d5a9076
    }
}