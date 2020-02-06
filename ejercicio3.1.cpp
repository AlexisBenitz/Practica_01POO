#include <iostream>

using namespace std;
class Gato{
unsigned int suEdad;
unsigned int suPeso;

void Maullar(){
cout << "miauuuu" << endl;
}
void imprimedatos(){
cout << suPeso<< endl;
cout << suEdad<< endl;
}
};
int main(void){
float myFloat;
Gato Pelusa;
Pelusa.suEdad= 2;
Pelusa.suPeso= 3;
Pelusa.Maullar();
Pelusa.imprimedatos();

}
/// Marca 6 errores en los que practicamente no se puede acceder a los atributos de la clase.





