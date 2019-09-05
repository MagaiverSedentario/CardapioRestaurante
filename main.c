#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
	char *pe;
	float pen;
	char *pp;
	float ppr;
	char *ps;
	float pso;
	float v;
}pedido;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int ent;
	int prap;
	int user;
	pedido p;
	p.pe = (char *) malloc(60);
	p.pp = (char *) malloc(70);
	p.ps = (char *) malloc(50);
	
	menu:
	
	printf("++++++++++++++++++++++ TEMAKERIA DO CASSEB ++++++++++++++++++++++");
	printf("\nMENU:\n");
	printf("\n(1) Entrada\n(2) Prato Principal\n(3) Sobremesa\n(4) Finalizar Pedido\n\n");
	scanf("%d", &user);
	
	if(user == 1){
		system("cls");
		printf("++++++++++++++++++++++ ENTRADA ++++++++++++++++++++++\n\n");
		printf("O que você quer comer para a entrada? Nós temos algumas opções como:\n\n");
		printf("1. Enrolado de Camar�o com Cream Cheese................R$ 6.90\n");
		printf("2. Isca de Peixe.......................................R$ 6.90\n");
		printf("3. Bolinho de Peixe....................................R$ 14.90\n");
		printf("4. Batata Frita........................................R$ 14.90\n");
		printf("5. Shitake com Legumes.................................R$ 25.00\n");
		printf("6. Carpaccio de Polvo..................................R$ 25.00\n");
		
		printf("\n0. Para voltar\n");
	
		printf("\nQual vai ser a sua escolha?\n\n"); 
		scanf("%d", &ent);
		if(ent == 0){
			system("cls");
			goto menu;
		}
		else if(ent == 1){
			p.pe = "Enrolado de Camar�o com Cream Cheese";
			p.pen = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(ent == 2){
			p.pe = "Isca de Peixe";
			p.pen = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(ent == 3){
			p.pe = "Bolinho de Peixe";
			p.pen = 14.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(ent == 4){
			p.pe = "Batata Frita";
			p.pen = 14.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(ent == 5){
			p.pe = "Shitake com Legumes";
			p.pen = 25.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(ent == 6){
			p.pe = "Carpaccio de Polvo";
			p.pen = 25.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
	}
	else if(user == 2){
		system("cls");
		printf("+++++++++++++++++ PRATO PRINCIPAL +++++++++++++++++\n\n");
		printf("Para entrada n�s temos algumas op��es como:\n\n");
		printf("1. Salm�o Completo (com cebolhinha e cream cheese ou maionese)....R$ 25.00\n");
		printf("2. Salm�o com Shimeji (com cream cheese)..........................R$ 25.00\n");
		printf("3. Kani (Kani-kama e pepino)......................................R$ 37.90\n");
		printf("4. Calif�nia (Kani-kama, pepino e fruta)..........................R$ 37.90\n");
		printf("5. Salm�o com Camar�o.............................................R$ 40.00\n");
		printf("6. Temaki do Mau (Salm�o, cream cheese e camar�o empanado)........R$ 45.00\n");
		
		printf("\n0. Para voltar\n");
	
		printf("\nQual vai ser a sua escolha?\n\n"); 
		scanf("%d", &prap);
		if(prap == 0){
			system("cls");
			goto menu;
		}
		else if(prap == 1){
			p.pp = "Salm�o Completo (com cebolhinha e cream cheese ou maionese)";
			p.ppr = 25.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 2){
			p.pp = "Salm�o com Shimeji (com cream cheese)";
			p.ppr = 25.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 3){
			p.pp = "Kani (Kani-kama e pepino)";
			p.ppr = 37.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 4){
			p.pp = "Calif�nia (Kani-kama, pepino e fruta)";
			p.ppr = 37.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 5){
			p.pp = "Salm�o com Camar�o";
			p.ppr = 40.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 6){
			p.pp = "Temaki do Mau (Salm�o, cream cheese e camar�o empanado)";
			p.ppr = 45.00;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
	}
	else if(user == 3){
		system("cls");
		printf("+++++++++++++++++ SOBREMESA +++++++++++++++++\n\n");
		printf("Para sobremesa n�s temos algumas op��es como:\n\n");
		printf("1. Pudim de Lek ite.................................................R$ 6.90\n");
		printf("2. Petit Gateau...................................................R$ 6.90\n");
		printf("3. Sorvete Kibon..................................................R$ 6.90\n");
		printf("4. Mousse de Chocolate............................................R$ 6.90\n");
		printf("5. Banana Caramelizada............................................R$ 6.90\n");
		printf("6. Rolinho de Chocolate...........................................R$ 6.90\n");
		
		printf("\n0. Para voltar\n");
	
		printf("\nQual vai ser a sua escolha?\n\n"); 
		scanf("%d", &prap);
		if(prap == 0){
			system("cls");
			goto menu;
		}
		else if(prap == 1){
			p.pp = "Pudim de Leite";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 2){
			p.ps = "Petit Gateau";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 3){
			p.ps = "Sorvete Kibon";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 4){
			p.ps = "Mousse de Chocolate";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 5){
			p.ps = "Banana Caramelizada";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}
		else if(prap == 6){
			p.ps = "Rolinho de Chocolate";
			p.pso = 6.90;
			system("cls");
			printf("Pedido feito.");
			getch();
			system("cls");
			goto menu;
		}	
	}
	else if(user == 4){
		system("cls");
		printf("PEDIDOS:\n\n");
		printf("Entrada: \n%s - R$ %.2f\n\nPrato Principal: \n%s - R$ %.2f\n\nSobremesa: \n%s - R$ %.2f", p.pe, p.pen, p.pp, p.ppr, p.ps, p.pso);
		printf("\n\nValor total do pedido: %.2f", p.pen+p.ppr+p.pso);
	}
	return 0;
	}