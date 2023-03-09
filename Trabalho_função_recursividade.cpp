#include<conio.h>
#include<iostream>
using namespace std; 

char menu();
int  mult3 ();
int maior();
void somatoria();
int somatoriar(int);
int fatorial();
void lerfibo();
int fibo(int);


char sair();
char voltar();

int main(){
	setlocale(LC_ALL, "portuguese");
	char opcao='N';
	while (opcao != 'S'){
		opcao=menu();
		switch (opcao) {
			case '1' : { mult3 (); break;}
			case '2' : { maior(); break;}
			case '3' : { somatoria(); break;}
			case '4' : { fatorial(); break;}
			case '5' : { lerfibo(); break;}
			case '6' : { opcao = sair(); break;}
			default : { cout<<"\n\nOpcao invalida. Tecle algo para continuar..."; getch(); }
						
			}
		}
	}
	
		char menu(){
	char op;
	system("cls"); //LIMPA A TELA
	cout<<"\t\tOpções:\n\n";
	cout<<"\t\t1 - Descobrir se o número e multiplo de 3 \n\n";
	cout<<"\t\t2 - Número consecutivo fazer media,soma,maior e menor\n\n";
	cout<<"\t\t3 - Somatiria regressiva \n\n";
	cout<<"\t\t4 - calculo fatorial \n\n";
	cout<<"\t\t5 - Calculo Fibonacci \n\n";
	cout<<"\t\t6 - Sair do programa\n\n";
	cout<<"\t\tEscolha a opção: ";
	op=toupper(getche());
		return op;
}

char sair(){
	system("cls");
	char sair='N';
	cout<<"\n\n\n\t\t\tDeseja encerrar o programa? (S/N) : ";
	sair=toupper(getche());
	if (sair=='S') {
		cout<<"\n\n\n\t\t\tSaindo do programa...";
		getch();
		
	} 
	return sair;
}

char voltar(){
	system("cls");
	cout<<"\n\n\n\t\t\t Voltar à tela inicia...";
	getch();
}



int mult3(){
	system("cls");
	int mult;
	cout<<"\n\n\n\t\t\t Digite um número: ";
	cin>> mult;
	if(mult % 3==0){
		cout<<"\n\n\n\t\t\t Sim o número: " <<mult<< " é multiplo de 3.";
	}
	else{
		cout<<"\n\n\n\t\t\t Ele não é multiplo de 3 ";
	}
	getch();
	voltar();
	
}

int maior(){
	system("cls");
	int soma=0,cont=0, vet[10],i=0, media=0, conta;
	for( i=0; i<10; i++){
		cout<< "\n\n\n\t\t\t Digite um número:";
		cin>> vet[i];
		soma += vet[i];
		media += vet[i];
		cont++;
		if(vet[i]==vet[i-1]+1){
			conta=i;
			i=10;
		}
	}
	
	cout<<"\n\n\n\t\t\t soma é: " <<soma;
	cout<<"\n\n\n\t\t\t media é: "<< media/ cont;
	
		int maior = vet[0];
		int menor = maior;
	
	for(i=0; i<cont; i++){
		if(vet[i]>=maior){
			maior=vet[i];
		}
		if(vet[i]<=menor){
			menor=vet[i];
		}
	}
	
	cout<< "\n\n\n\t\t\t Maior valor é: " << maior;
	cout <<"\n\n\n\t\t\t Menor valor é: " << menor;
	
	getch();
	voltar();
}

void somatoria(){
	system("cls");
	int valor;
	cout<< "\n\n\n\t\t\t Digite valor que você queira fazer a somatoria: ";
	cin>> valor;
	cout<< "\n\n\n\t\t\t O valor da somatoria de ("<< valor << ") é " << valor+somatoriar(valor-1);
	
	getch();
	voltar();
}

int somatoriar(int som	){
	if(som == 1){
		return 1;
	}
	else{
		return som + somatoriar(som-1);
	}
	
	getch();
}

int fatorial(){
	system("cls");
	int f=0, res=1;
	cout<<"\n\n\n\t\t\t Digite o Fatoria: ";
	cin>> f;
	for(int fat= f; fat>1; fat--){
		res*= fat;
	}
	
	cout<<"\n\n\n\t\t\t Fatoria de "<<f<<" é "<<res;
	
	getch();
	voltar();
	
}

void lerfibo(){
	system("cls");
	int fabi, resl;
	cout<< "\n\n\n\t\t\t Digite valor para fazer a sequencia da Fibonacci: ";
	cin>> fabi;
	for(int i=0; i<fabi; i++){
		resl=fibo(i);
		cout<< " " <<resl<<" - ";
		
	}
	getch();
	voltar();
}

int fibo(int x){
	if ((x == 0)|| (x==1))
       return (x);
    else
       return ((fibo(x-1) + fibo(x-2)));
}





