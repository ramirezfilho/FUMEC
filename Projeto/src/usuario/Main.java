package usuario;

import java.util.Scanner;
	

public class Main {

	public static void main(String[] args) {
	Scanner leia = new Scanner (System.in);	
		
		// Programa diagn�stico Fisioterapia
		int opcao = 0;
		int selecao = 0;
		
		System.out.println("\n01 - Cabe�a"
				+ "\n02 - Ombro"
				+ "\n03 - Joelho"
				+ "\n04 - P�");
		System.out.println("Digite a parte do corpo: ");
		opcao = leia.nextInt();
		
		//Caso o usu�rio selecione Cabe�a
		switch (opcao) { 
			case 1: System.out.println("\n1) Olhos"
					+ "\n2) Ouvidos"
					+ "\n3) Boca"
					+ "\n4) Nariz");
			System.out.println("Selecione a doen�a: ");
			selecao = leia.nextInt();
			
			//Imprime o tratamento dependendo do local selecionado
			System.out.println("Diagn�stico: ");
					switch (selecao){
					case 1:System.out.println("Usar �culos");;break;
					case 2:System.out.println("Passar cotonete");; break;
					case 3:System.out.println("Escovar os dentes!");; break;
					case 4:System.out.println("Limpar as meleca");; break;
					}; break;
			
			
			//Caso o usu�rio selecione ombro
			case 2:; break;
			case 3:; break;
			case 4:; break;
		}
		leia.close();
	
	}
	
}
