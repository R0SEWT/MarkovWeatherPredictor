#pragma once
#include <vector>
#include <fstream>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class MatrizTransicion
{
private:
	int dias_consultados;
	int dias_pronostico;
	string city;

	vector <int> clima_data;
	vector<vector<double>> matriz_transicion;
	vector<vector<double>> potencia_matriz;

public:
	MatrizTransicion(int dias_consultados, vector<short> limites, string city);		// crea matriz maniana
	~MatrizTransicion();


	void updateCity();
	void actulizarClimaData();
	void getClimaData();
	void procesarClimaData(vector<short> limites);


	void contarManianaMatriz();
	void updateMatrizN(int n);					// crea matriz n dias
	double getPercMatriz(int i, int j);
	void generateMatrizTransicion(vector<int> cont_estados);


	string getFecha();
	vector<int> contarCadaEstado();

	double potenciaMatriz(int x, int y);
	vector<vector<double>> multiplicarMatrices(vector<vector<double>> A,vector<vector<double>> B);

	

};
