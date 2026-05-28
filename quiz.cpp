#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class productos{
// Atributos
public:
    std::string nombre;

    int cantidad;

private:
    int precio;

public:
    
    void setNombre(std::string n) {
        nombre = n;
    }

    void setPrecio(int p) {
        precio = p;
    }
    std::string getNombre() {
        return nombre;
    }

    int getPrecio() {
        return precio;
    }
};
// Clase producto que hereda de productos
class producto : public productos {

    private:
    int cantidad;
    int total;
    int descuento;
    int precioFinal;
public:
    void setCantidadProductos(int g) {
        cantidad = g;
    }

    int getCantidadProductos() {
        return cantidad;
    }

    void setTotalidad(int g) {
        total = g;
    }

    int getTotalidad() {
        return total;
    }

    void setDescuento(int d) {
        descuento = d;
    }
    int getDescuento() {
        return descuento;
    }
    void setPrecioFinal(int pf) {
        precioFinal = pf;
    }
    int getprecioFinal(int pf) {
        return precioFinal;
    }

    void mostrarInfo() {
        std::cout << "\n--- INFORMACION DEL PRODUCTO ---\n";
        std::cout << "Nombre: " << getNombre() << "\n";
        std::cout << "precio: " << getPrecio() << "\n";
        std::cout << "cantidad: " << cantidad << "\n";
        std::cout << "total: " << total << "\n";
        std::cout << "descuento: " << descuento << "%\n";
        std::cout << "valor a pagar: " << precioFinal << "\n";
    }
};

int main() {
    // Crear un objeto de la clase producto
    producto obj;

    std::string nombre;
    int precio;
    int cantidad;
    int precioFinal;
    int descuento;

    std::cout << "Ingrese el nombre del producto: ";
    std::getline(std::cin, nombre);
    obj.setNombre(nombre);

    std::cout << "Ingrese el precio del producto: ";
    std::cin >> precio;
    obj.setPrecio(precio);

    std::cout << "Ingrese la cantidad del producto: ";
    std::cin >> cantidad;
    obj.setCantidadProductos(cantidad);

    std::cout << "Ingrese el descuento del producto: ";
    std::cin >> descuento;
    obj.setDescuento(descuento);

    int total = precio * cantidad;
   
    precioFinal = (total * descuento) / 100;
    precioFinal = total - precioFinal;
    obj.setTotalidad(total);
    obj.setPrecioFinal(precioFinal);
    obj.mostrarInfo();

    
    return 0;

    
}
