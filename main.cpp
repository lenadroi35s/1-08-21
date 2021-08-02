#include <iostream>
#include<time.h>
using namespace std;

//1)Función que devuelve el elemento máximo del vector
void maximo_de_vec(){
    int ar;
    cout << "Ingrese cual es la cantidad del vector_";
    cin >> ar;
    int v[ar];
    for(int x=0; x<ar; x++){
        cout << "Ingrese el digito #" << x << ": ";
        cin >> v[x];
    }
    int ma = v[0];
    for(int i=1; i<ar; i++){
        if(ma<v[i]){
            ma = v[i];
        }
    }
    cout << "El mayor digito es:" << ma << endl;
}
// 2)Función que devuelve el elemento mínimo del vector
void minimo_de_vec(){
    int car;
    cout << "Ingrese cual es la cantidad del vector: ";
    cin >> car;
    int vt[car];
    for(int w=0; w<car; w++){
        cout << "Ingrese el digito #" << w << ": ";
        cin >> vt[w];
    }
    int me = vt[0];
    for(int a=1; a<car; a++){
        if(me>vt[a]){
            me = vt[a];
        }
    }
    cout << "El menor digito es:" << me << endl;
}
//3)Función que devuelve por referencia el elemento mínimo y máximo del vector
void vec_aleatorio (){
    int cv;
    cout<<"Ingrese la cantidad de valores aleatorios que desea generar"<<endl;
    cin>>cv;
    int vect[cv];
    srand(time(0));
    for(int b=0; b<cv; b++){
        vect[b]=rand();
        cout<<endl<<vect[b]<<endl;
    }
}
int main(){
    maximo_de_vec();
    minimo_de_vec();
    vec_aleatorio();
}