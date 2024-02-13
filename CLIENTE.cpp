#include <iostream>
#include <string>

using namespace std;

class Cliente {
private:
  string nombre;
  string telefono;
  int edad;

public:
  Cliente(string nombre, string telefono, int edad) {
    this->nombre = nombre;
    this->telefono = telefono;
    this->edad = edad;
  }

  void comprar() {
    cout << "cliente " << nombre << " ha realizado una compra." << endl;
  }
  void reclamar() {
    cout << "cliente " << nombre << " ha presentado un reclamo." << endl;
  }

  void devolver() {
    cout << "cliente " << nombre << " ha realizado una devolucion." << endl;
  }
  string getNombre() { return nombre; }
  string getTelefono() { return telefono; }
  int getEdad() { return edad; }
};
int main() {
  Cliente cliente1("Yashiro", "3328205105", 18);
  cliente1.comprar();
  cliente1.reclamar();
  cliente1.devolver();
  cout << "Nombre del cliente: " << cliente1.getNombre() << endl;
  cout << "Telefono del cliente: " << cliente1.getTelefono() << endl;
  cout << "Edad del cliente: " << cliente1.getEdad() << endl;

  return 0;
}

