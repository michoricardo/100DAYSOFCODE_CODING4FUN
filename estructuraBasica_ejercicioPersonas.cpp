#include <iostream>
using namespace std;
struct personita{
  char nombre[20];
  int edad;
}
persona1 ={"Richii",26},
persona2={"Juanito",15},
persona3;

int main() {
  cout<<"La persona uno es: "<<persona1.nombre<<endl;
  cout<<"Su edad es :"<<persona1.edad<<endl;
  cout<<"La persona 2 es: "<<persona2.nombre<<endl;
  cout<<"La edad 2 es: "<<persona2.edad<<endl;
  cout<<"Digite un nombre para una tercera persona"<<endl;
  cin.getline(persona3.nombre,20,'\n');
  cout<<"Digite una edad para una tercera persona"<<endl;
  cin>>persona3.edad;
  cout<<"La persona 3 es:"<<persona3.nombre<<endl;
  cout<<"La edad 3 es:"<<persona3.edad<<endl;
}