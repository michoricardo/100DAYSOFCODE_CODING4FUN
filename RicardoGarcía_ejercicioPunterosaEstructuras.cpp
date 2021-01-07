#include <iostream>
using namespace std;
struct Persona{
  char nombre[30];
  int edad;
}persona,*puntero_persona = &persona;
void pedirDatos(); //prototipo de funcion
void mostrarDatos(Persona *);
int main() {
  pedirDatos();
  mostrarDatos(puntero_persona);
  
}
void pedirDatos(){
  cout<<"Digita tu nombre por favor"<<endl;
  cin.getline(puntero_persona->nombre,30,'\n');
  //el puntero señala hacia la posición de memoria que tiene la variable nombre
  cout<<"Digite su edad"<<endl;
  cin>>puntero_persona->edad; //guardamos en la posición que se llama edad
}
void mostrarDatos(Persona *puntero_persona){
  cout<<"\n Su nombre es el siguiente: "<<puntero_persona->nombre<<endl;
  cout<<"\n Su edad es : "<<puntero_persona->edad<<endl;

}