#include <iostream>
using namespace std;

int main(){
    float area, promedio, areaCirculo, perimetro;
    int opcion = 0;
    float pi = 3.1416;
    cout<< "Ingrese la opción que desea operar: 1 - Área de un cuadrado. 2 - Perímetro de un cuadrado. 3 - Promedio de n cantidades. 4 - Área de un círculo. "<<endl;
    cin>> opcion;


    //uso del switch case
    
    switch (opcion){
        case 1: 
        float a;
        cout<<"Ingrese el valor para calcular el área de un cuadrado: ";
        cin>> a;
        area = a*a;
        cout<<"El área del cuadrado es: "<<area;
        break;

        case 2:
        float v1;
        cout<<"Ingrese el valor para calcular el perímetro de un cuadrado: ";
        cin>> v1;
        perimetro = v1*4;
        cout<<"El perímetro del cuadrado es: "<<perimetro;
        break;

        case 3: 
        float n1, n2, n3, n4;
        cout<<"Ingrese los 4 datos a operar: ";
        cin>> n1;
        cin>> n2; 
        cin>> n3;
        cin>> n4;
        promedio = (n1+n2+n3+n4)/4;
        cout<<"El promedio de los 4 datos es: "<<promedio;
        break;

        case 4:
        float radio;
        cout<<"Ingrese el radio del círculo: ";
        cin>> radio;
        pi = 3.1416;
        areaCirculo = pi*(radio*radio);
        cout<<"El área del círculo es: "<<areaCirculo;
        break;
        
        default:
        cout<<"Opción no válida.";
        break;

    }
    return 0;
}