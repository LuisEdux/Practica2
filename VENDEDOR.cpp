#include <iostream>
#include <string>

class Vendedor {
private:
    std::string nombre;
    int productos;

public:
    Vendedor(std::string nombre, int productos) : nombre(nombre), productos(productos) {}

 void vender(int cantidad) {
if (productos >= cantidad) {
productos -= cantidad;
   std::cout << nombre << " ha vendido " << cantidad << " productos." << std::endl;
  } else {
   std::cout << "No hay suficientes productos en inventario para vender." << std::endl;   }
    }
    void actualizarProductos(int nuevaCantidad) {
   productos = nuevaCantidad;
    std::cout << "La cantidad de productos ha sido actualizada a: " << productos << std::endl;
    }

    std::string obtenerNombre() const {
    return nombre;
    }
    int obtenerProductos() const {
    return productos;
    }
};

int main() {
    Vendedor vendedor("Luis", 10);
    vendedor.vender(5);
    std::cout << "Nombre del vendedor: " << vendedor.obtenerNombre() << std::endl;
    std::cout << "Cantidad de productos en inventario: " << vendedor.obtenerProductos() << std::endl;
    vendedor.actualizarProductos(15);
    std::cout << "Cantidad de productos en inventario actualizada: " << vendedor.obtenerProductos() << std::endl;

    return 0;
}

