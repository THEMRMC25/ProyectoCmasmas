#include <iostream>
#include<string>
using namespace std;
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

class Farmacia:public Categoria
{
	public:
		Farmacia(string Producto){
			isfound=Categoria::compareTo(Producto,Productos,3);
		}
		bool isfound;	
	private:
		string Productos[3]={"paracetamol","medicina","vitamina"};
};


int main(){
		//this is a example of product intro to the client
	string producto = "medicina";
	
	 Farmacia mifarm(producto);
	 cout<<mifarm.isfound;
}

	