#include <iostream> 
#include <vector> 

using namespace std;

int mochila(int W, int p[], int b[], int n){
  vector<vector<int>> K(n + 1, vector<int>(W + 1));
  
  //Construir tabla K[][]
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= W; j++){
      if(i == 0 || j == 0){
        K[i][j] = 0;
      }
      else if(p[i - 1] <= j){
        K[i][j] = max(b[i - 1] + K[i - 1][j - p[i - 1]], K[i - 1][j]);
      }
      else{
        K[i][j] = K[i - 1][j];
      }
    }
  }
  
  //Imprimir la matriz
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= W; j++){
      cout << K[i][j] << "  ";
    }
    cout << endl;
  }
  
  return K[n][W];
}

int main(){
  int p[] = {9, 6, 5};
  int b[] = {38, 40, 24};
  int W = 15;
  int n = sizeof(p) / sizeof(p[0]);
  int res = mochila(W, p, b, n);
  cout << "El beneficio máximo es de: " << res << endl;
  return 0;
}
