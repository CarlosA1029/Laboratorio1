#include <iostream>
#include <stdlib.h>
using namespace std;
//Clase Factura
class Factura{
	private:
	//Atributos
	string pieza;
	string descripcion;
	double cantidad;
	double precio;
	double total;
	
	public:
		//Constructores y funciones.
		Factura();
		void setFactura(string, string, int, double, double);
		string getPieza();
		string getDescripcion();
		int getCantidad();
		double getPrecio();
		void ferreteria();
		double obtenerMontoFactura();
	
};
//Constructor
Factura::Factura(){
	
}
//Metodo Set
void Factura::setFactura(string _pieza, string _descripcion, int _cantidad, double _precio, double _total){
pieza= _pieza;
descripcion= _descripcion;
cantidad= _cantidad;
precio= _precio;
total=_total;
}
//Metodos get
string Factura::getPieza(){
	return pieza;
}

string Factura::getDescripcion(){
	return descripcion;
}

int Factura::getCantidad(){
	return cantidad;
}

double Factura::getPrecio(){
	return precio;
}
//Funcion de calculo de total
double Factura::obtenerMontoFactura(){
	total=precio*cantidad;
	if(total<=0){
		total=0;
	}else{
		return total;
}
}

int main() {
	Factura f1;
	string codigo;
	string pieza;
	double cantidad;
	double precio;
	cout<<"Ingrese codigo: "<<endl;
	cin>>codigo;
	cout<<"Ingrese pieza: "<<endl;
	cin>>pieza;
	cout<<"Ingrese Cantidad: "<<endl;
	cin>>cantidad;
	cout<<"Ingrese precio: "<<endl;
	cin>>precio;
	f1.setFactura(codigo,pieza,cantidad,precio,f1.obtenerMontoFactura());
	cout<<"-----------Factura de Ferreteria La Mejor------------"<<endl;
	cout<<"El numero de pieza es: "<<f1.getPieza()<<endl;
	cout<<"La descripcion es: "<<f1.getDescripcion()<<endl;
	cout<<"La cantidad es cantidad: "<<f1.getCantidad()<<endl;
	cout<<"El precio es: "<<f1.getPrecio()<<endl;
	cout<<"El total es: "<<f1.obtenerMontoFactura();
	
	return 0;
}



