#include <iostream>
#include <string>

using namespace std;

class Usuario {
  private:
    string nombre;
    string telefono;
    int edad;
    string contrasena;

  public:
    Usuario(string nombre, string telefono, int edad, string contrasena) {
      this->nombre = nombre;
      this->telefono = telefono;
      this->edad = edad;
      this->contrasena = contrasena;
    }


    string getNombre() { return nombre; }
    string getTelefono() { return telefono; }
    int getEdad() { return edad; }
    string getContrasena() { return contrasena; }

    void setNombre(string nombre) { this->nombre = nombre; }
    void setTelefono(string telefono) { this->telefono = telefono; }
    void setEdad(int edad) { this->edad = edad; }
    void setContrasena(string contrasena) { this->contrasena = contrasena; }

    void mostrarInformacion() {
      cout << "Nombre: " << nombre << endl;
      cout << "Telefono: " << telefono << endl;
      cout << "Edad: " << edad << endl;
      cout << "Contrasena: " << contrasena << endl;
    }
};

int main() {

  Usuario usuario("Alexis", "331096330", 30, "kk");

  usuario.mostrarInformacion();

  usuario.setNombre("Gabi");
  usuario.setEdad(25);

  cout << endl << "Informacion actualizada:" << endl;
  usuario.mostrarInformacion();

  return 0;
}

