#include <iostream>
using namespace std;


double calcularIMC(double p , double a){
	return p / (a * a);
}

string nivelDePeso (double imc){
	if(imc<18.5){
		return "bajo peso";
		
	}
	else if (imc=18.5 && imc<=24.9){
		return "normal";
	}
	else if (imc>=25 && imc<=29.9){
		return "sobre peso";
	}
	else if (imc>=30 && imc<=34.9){
		return "obesidad";
	}
}

int main () {
	double peso, altura;
	cout<< "ingrese el peso (kg): "<<endl;
	cin>> peso;
	cout<< "ingrese la altura (m): "<<endl;
	cin>> altura;
	
	cout<< "\nsu nivel de peso es: "<<nivelDePeso(calcularIMC(peso, altura));
	
	
	
}

