#include <iostream>

using namespace std;

int main(){
	
	const int MAX = 50;
	int A[MAX][MAX];
	int B[MAX][MAX];
	int C[MAX][MAX];
	int NUM;
	
	do{
		cout<<"Ingrese la cantidad de elementos: ";
		cin>>NUM;
	}while(NUM<0 || NUM>MAX);
	
	for(int filas=0;filas<NUM;filas++){
		for(int columnas=0;columnas<NUM;columnas++){
			cout<<"A "<<"["<<filas+1<<"]["<<columnas+1<<"] = ";
			cin>>A[filas][columnas];
			cout<<"B "<<"["<<filas+1<<"]["<<columnas+1<<"] = ";
			cin>>B[filas][columnas];
			C[filas][columnas] = A[filas][columnas]+B[filas][columnas];
		}
	}
	
	cout<<endl;
	cout<<"Matriz A:"<<endl;
	for(int i=0;i<NUM;i++){
		for(int j=0;j<NUM;j++){
			cout<<"A "<<"["<<i+1<<"]["<<j+1<<"] = "<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Matriz B:"<<endl;
	for(int i=0;i<NUM;i++){
		for(int j=0;j<NUM;j++){
			cout<<"B "<<"["<<i+1<<"]["<<j+1<<"] = "<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<"Matriz C (A+B):"<<endl;
	for(int i=0;i<NUM;i++){
		for(int j=0;j<NUM;j++){
			cout<<"C "<<"["<<i+1<<"]["<<j+1<<"] = "<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
