#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numfactura, contador;
    double precio, factura, subtotalDetalle = 0, subtotal=0, descuento=0, isv=0, totalpagar, cantidad;
    string nombreCliente, codigoProducto, nombreproducto, respuesta="S";
    cout <<"Ingrese el numero de factura:";
    cin >>numfactura;
    cout <<"Ingrese el nombre del cliente:";
    cin >>nombreCliente;

    while (respuesta=="S")
    {
        cout <<"Ingrese el codigo del producto:";
        cin >>codigoProducto;
        cout <<"Ingrese el nombre del producto:";
        cin >>nombreproducto;
        cout <<"Ingrese la cantidad del producto:";
        cin >>cantidad;
        cout <<"Ingrese el precio del producto:";
        cin >>precio;
        subtotalDetalle = cantidad * precio;
        subtotal+=subtotalDetalle;
        cout <<"El subtotal del producto es:"  <<subtotalDetalle <<endl;
        cout <<"Desea otro producto:";
        cin >>respuesta;
    }   
    
    return 0;
}