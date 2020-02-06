#include <iostream>

using namespace std;
class Gato{
public:
unsigned int suEdad;
unsigned int suPeso;

void Maullar(){
cout << "miauuuu" << endl;
}
void imprimedatos(){
cout << "Edad:" << endl;
cout << suEdad<< endl;
cout << "Peso en Kg:" << endl;
cout << suPeso<< endl;

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
