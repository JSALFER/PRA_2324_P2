#include <iostream> 
#include <vector> 

using namespace std;

template <typename T> 

int busquedaBinaria(T x, vector<T>& arr, int ini, int fin){
    if(ini > fin){
        return -1;
    }
    else{
        int medio = (ini + fin) / 2;
        if(arr[medio] == x){
            return medio;
        }
        else if(arr[medio] > x){
            return busquedaBinaria(x, arr, ini, medio - 1);
        }
        else{
            return busquedaBinaria(x, arr, medio + 1, fin);
        }
    }
}

template <typename T> 

int busquedaBinaria_inv(T x, vector<T>& v, int ini, int fin){
    if(ini > fin){
        return -1;
    }
    else{
        int medio = (ini + fin) / 2;
        if(v[medio] == x){
            return medio;
        }
        else if(v[medio] > x){
            return busquedaBinaria_inv(x, v, medio + 1, fin);
        }
        else{
            return busquedaBinaria_inv(x, v, ini, medio - 1);
        }
    }
}

//MÉTODO DE GOOGLE

template <typename T> 

void quickSort(vector<T>& v, int ini, int fin){
    int central, i, j;
    double pivote;
    central = (ini + fin) / 2;
    pivote = v[central];
    i = ini;
    j = fin;
    do{
        while(v[i] < pivote){
            i++;
        }
        while(v[j] > pivote){
            j--;
        }
        if(i <= j){
            double temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);
    if(ini < j){
        quickSort(v, ini, j);
    }
    if(i < fin){
        quickSort(v, i, fin);
    }
}

template <typename T>

void quickSort2(vector<T>& v, int ini, int fin){
    int i, j;
    double pivote;
    pivote = v[ini];
    i = ini;
    j = fin;
    do{
        while(v[i] < pivote){
            i++;
        }
        while(v[j] > pivote){
            j--;
        }
        if(i <= j){
            double temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }while(i <= j);
    if(ini < j){
        quickSort(v, ini, j);
    }
    if(i < fin){
        quickSort(v, i, fin);
    }
}

template <typename T> 

void print(vector<T>& v){
    cout << "v = ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}         
