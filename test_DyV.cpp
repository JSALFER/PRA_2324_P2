#include <iostream> 
#include "DyV.h"
#include <vector> 
#include <chrono>

using namespace std; 

int main(){

    cout << "****************" << endl;
    cout << "BÚSQUEDA BINARIA" << endl;
    cout << "****************" << endl << endl;
    
    cout << "**VECTORES ASCENDENTES" << endl;
    vector<int> v{-2, 0, 1, 3, 5, 7, 10, 13, 15, 20};
    cout << "Prueba con int y buscar 7" << endl;
    print(v);
    int res1 = busquedaBinaria(7, v, 0, 10);
    if(res1 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res1 << endl << endl;
    }
    
    cout << "Prueba con int y buscar 4" << endl;
    int res2 = busquedaBinaria(4, v, 0, 10);
    if(res2 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res2 << endl << endl;
    }
    
    cout << "Prueba con char y buscar 'f'" << endl;
    vector<char> c{'a', 'f', 'j', 'l', 'p', 's'};
    print(c);
    int res3 = busquedaBinaria('f', c, 0, 6);
    if(res3 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res3 << endl << endl;
    }
        
    cout << "Prueba con char y buscar 'b'" << endl;
    int res4 = busquedaBinaria('b', c, 0, 6);
    if(res4 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res4 << endl << endl;
    }
    
    cout << "**VECTORES DESCENDENTES" << endl;
    cout << "Prueba con int y buscar 12" << endl;
    vector<int> r{20, 15, 12, 8, 3, 0, -1};
    print(r);
    int res5 = busquedaBinaria_inv(12, r, 0, r.size());
    if(res5 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res5 << endl << endl;
    }
    
    cout << "Prueba con char y buscar 'x'" << endl;
    vector<char> arr{'z', 't', 'q', 'm', 'h', 'b'};
    print(arr);
    int res6 = busquedaBinaria_inv('x', arr, 0, arr.size());
    if(res6 == -1){
        cout << "El valor buscado no se ha encontrado." << endl << endl;
    }
    else{
        cout << "El valor buscado se encuentra en la posición: " << res6 << endl << endl;
    }
     
    cout << "**********" << endl;
    cout << "QUICK SORT" << endl;
    cout << "**********" << endl << endl;
    
    vector<int> s{5, 4, 0, 9, 3, 8};
    print(s);
    
    //Medir tiempo de cómputo
    
    auto start = chrono::system_clock::now();
    quickSort(s, 0, s.size());
    auto end = chrono::system_clock::now();
    chrono::duration<float, milli> duration = end - start;
    
    print(s);
    cout << "Time: " << duration.count() << "s" << endl;
    
    return 0;
}
