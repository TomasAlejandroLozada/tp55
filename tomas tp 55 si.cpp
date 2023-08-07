#include<bits/stdc++.h>
using namespace std;
 string InvertirPalabra(string palabra);
 int main(){
 	string palabra;
 	cout<< "Ingrese palabra: ";
 	getline(cin,palabra);
 	
 	string palabraInvertida=InvertirPalabra(palabra);
 	
 	cout<<"palabra invertida: "<<palabraInvertida<<endl;
 	return 0;
 }
string InvertirPalabra(string palabra){
	string palabraInvertida="";
	for (int i=palabra.length()-1; i>=0;i--){
		palabraInvertida += palabra[i];
	}
	return palabraInvertida;
}
