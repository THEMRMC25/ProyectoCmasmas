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

//--//

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

//--//

class Despensa:public Categoria{
    Datos data;
public:
    Despensa(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,4));
        data.setNombreCategoria("despensa");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[4]={"huevos","leche","pan","azucar"};
};

//--//

class Electronica:public Categoria{
    Datos data;
public:
    Electronica(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,4));
        data.setNombreCategoria("electrónicos");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[4]={"refrigerador","television","impresora","computadora"};
};

//--//

class Deporte:public Categoria{
    Datos data;
public:
    Deporte(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,4));
        data.setNombreCategoria("deportivos");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[4]={"Balon futbol","pesa","raqueta"};
};

//--//

class Belleza:public Categoria{
    Datos data;
public:
    Belleza(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,4));
        data.setNombreCategoria("artículos de Belleza");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[4]={"rimer","pintura de uña","crema","limpiador facial"};
};

//--//

class Ropa:public Categoria{
    Datos data;
public:
    Ropa(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,5));
        data.setNombreCategoria("Prendas de ropa");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[5]={"camisa","vestido","pantalon","zapatos","palyera"};
};

//--//

class Servicios:public Categoria{
    Datos data;
public:
    Servicios(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,5));
        data.setNombreCategoria("Servicios");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[5]={"luz","agua","internet","video","Musica"};
};

//--//

class Infante:public Categoria{
    Datos data;
public:
    Infante(string Producto){
        data.setIsfound(Categoria::compareTo(Producto,Productos,4));
        data.setNombreCategoria("Bebés y niños");
    }
    Datos getData(){
        return data;
    }
private:
    string Productos[4]={"pañales","toallas humedas","carreola","juguete"};
};


int main(){
    //this is a example of product intro to the client
    string producto = "medicina";

    Farmacia mifarm(producto);
    Despensa midesp(producto);
    Electronica mielectro(producto);
    Deporte midepo(producto);
    Belleza mibelle(producto);
    Ropa miropa(producto);
    Servicios miservi(producto);
    Infante mibebe(producto);

    cout<<mifarm.getData().getIsfound()<<"\n";
    cout<<mifarm.getData().getNombreCategoria()<<"\n";
}

