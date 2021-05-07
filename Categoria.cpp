#include <iostream>
#include<string>
using namespace std;

class Datos
{
	public:
		//setter
		void setIsfound(bool isfound){
			isfoundC = isfound;
		}
		void setNombreCategoria(string NombreCategoria){
			NombreCategoriaC = NombreCategoria;
		}
		//getter
		bool getIsfound(){
			return isfoundC;
			
		}
		string getNombreCategoria(){
			return NombreCategoriaC;
		}
	private:
		bool isfoundC;
		string NombreCategoriaC;
	
};

class Categoria
{
	public:
		bool compareTo(string Producto,string categoriaCompare[],int size){
			for(int i=0;i<size;i++){
			
				if(Producto==categoriaCompare[i]){
					isFound=true;
					break;
				}else{
					isFound=false;
				}
			}
			return isFound;
		};
	private:
		bool isFound;
};
    

class Farmacia:public Categoria{
	Datos data;
	public:
		Farmacia(string Producto){
			data.setIsfound(Categoria::compareTo(Producto,Productos,3));
			data.setNombreCategoria("farmacia");
		}
		Datos getData(){
			return data;
		}	
	private:
		string Productos[3]={"paracetamol","medicina","vitamina"};
};


int main(){
	//this is a example of product intro to the client
	string producto = "medicina";
	
	 Farmacia mifarm(producto);
	 cout<<mifarm.getData().getIsfound()<<"\n";
	 cout<<mifarm.getData().getNombreCategoria()<<"\n";
}

	