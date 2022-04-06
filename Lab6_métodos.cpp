#include <iostream>

//librerias C++

using namespace std;
using std::iostream; 


//MANERA RECURSIVA DE VISUALIZAR  LA SUMA 


void suma(double x,double y,double z){
	//cout<<p<<endl;
	//cout<<*p<<endl;
	z=x+y;
}

//DEIFNO FUNCIÓN DE IMPRIRMIR 
void imprimir(double *x,int n,int m){
	//cout<<a<<endl;
}

//INICIALIZAO 

int main(){
    
    //Defino variables 
	double a=2;
	double *p;
	
	//& para definir el lugar que tiene en la memoria de a en la nueva variable 
	p=&a;
	cout<<p<<endl;
	
	//Valor de la memoria 
	
	cout<<*p<<endl;
	cout<<*(&a)<<endl;
	double b[2][3]={{1,2,3},{4,5,6}};
	cout<<b<<endl;
	cout<<&b[0][0]<<endl;
	double *q;
	q=&b[0][0];
	cout<<"pos mde memoria de b"<<endl;
	for(int i=0;i<6;i++){

		cout<<q<<endl;
		cout<<*q<<endl;
		q++;
	}
	cout<<"tamaño de 0x7ffe69fb72a0: "<<sizeof(0x7ffe69fb72a0)<<endl;
	
	//Ejm con funcion
	double x=1,y=3,z;
	suma(x,y,z);
	cout<<"z="<<z<<endl;
	
	double c[2]={1,2};
	
	
	//cout<<imprimir(c,2,3); No pude entender el error en esta línea de código 
	
	//El resto del programa corre bien linea a linea , 
	// guardando valores en la  memoria para cada posición 

	return 0;
}