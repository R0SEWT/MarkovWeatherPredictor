#include "MatrizTransicion.h"
#include<time.h>


MatrizTransicion::MatrizTransicion(int dias_consultados, vector<short> limites,  string city) {

	if (dias_consultados < 60 || dias_consultados > 90) {
		dias_consultados = 80;
	}

	this->dias_consultados = dias_consultados;
	this->city = city;

	updateCity();	// actualizamos la ciudad en el archivo correspondiente
	
	/** Base de datos 
	* 0 = TS, 1 = PS, 2 = PN, 3 = TN
	*
	* n n-1 n-2 ... 3   2   1   0   [Dias antes de hoy]
	* 0  1   3  ... 2   1   1   2   [Estado]
	*
	**/
	
	clima_data.assign(dias_consultados, 0);
	getClimaData();
	procesarClimaData(limites);

	// Matriz

	/**
	 *       TS  PS  PN  TN   [Entrada]
	 *   TS      (a)
	 *   PS
	 *   PN
	 *   TN
	 *
	 *   [Salida]
	 *
	 *   a = (cuantos manianas de PS son TS) / Total PS
	 **/
	
	contarManianaMatriz(); // Almacena cuantos de los siguientes en estado X tienen al dia siguien como Y [entrada,salida]
	vector<int> cont_estados(4);
	cont_estados = contarCadaEstado();   // Contar en cada pos y almacena en el indice correspondiente al estado

	generateMatrizTransicion(cont_estados);

	// falta validar el resultado estocastico

}
MatrizTransicion::~MatrizTransicion() {

}


void MatrizTransicion::getClimaData() {

	actulizarClimaData();

	string name_fich = this->city + "_data_90days_" + getFecha() + ".txt";

	ifstream fichero(name_fich);
	if (!fichero.is_open())
	{
		cout << "Error al abrir " + name_fich + "\n";
		exit(EXIT_FAILURE);
	}
	string linea; 

	for (int i = 0; i < dias_consultados; i++) {
		getline(fichero, linea);
		clima_data[i] = stoi(linea);
	}

	fichero.close();



}

void MatrizTransicion::updateMatrizN(int n) {
	if (n < 1 || n>4) {
		n = 1;
	}
	dias_pronostico = n;

	potencia_matriz = { {1, 0, 0, 0},
							{0, 1, 0, 0},
							{0, 0, 1, 0},
							{0, 0, 0, 1} };
	for (int i = 0; i < dias_pronostico; i++) {
		potencia_matriz = multiplicarMatrices(potencia_matriz, matriz_transicion);
	}
}
double MatrizTransicion::getPercMatriz(int i, int j) {
	return matriz_transicion[i][j];
}
double MatrizTransicion::potenciaMatriz(int x, int y) {
	return potencia_matriz[x][y];
}

vector<vector<double>> MatrizTransicion::multiplicarMatrices(vector<vector<double>> A,
	vector<vector<double>> B) {
	// validar matriz cuadrada
	if (A.size() == B.size() && B[0].size() == A.size() && A[0].size()) {

		int filas_columnas = A.size();

		vector<vector<double>> resultado(filas_columnas,
			vector<double>(filas_columnas, 0));

		// Multiplicar las matrices
		for (int i = 0; i < filas_columnas; i++) {
			for (int j = 0; j < filas_columnas; j++) {
				for (int k = 0; k < filas_columnas; k++) {
					resultado[i][j] += A[i][k] * B[k][j];
				}
			}
		}

		return resultado;
	}
	return A;
}

void MatrizTransicion::updateCity() {

	ofstream fichero_ciudad("city.txt");
	if (!fichero_ciudad)
	{
		cout << "Error al abrir ciudad.dat\n";
		exit(EXIT_FAILURE);
	}

	fichero_ciudad << this->city;

	fichero_ciudad.close();
}

string MatrizTransicion::getFecha() {
	// fecha y hora actual
	time_t* now = new time_t;
	*now = time(0);

	// ojb time_t a estructura tm
	struct tm* tiempoLocal = new struct tm;

	localtime_s(tiempoLocal, now);

	// espacio suficiente para el char
	char fechaHora[32];
	strftime(fechaHora, sizeof(fechaHora), "%Y-%m-%d", tiempoLocal);

	return fechaHora;
}
/**
* Clima actual <= limite superior para estado o iteracion
* 30 <= 25 [0]	Totalmente soleado
* 30 <= 50 [1]	Parcialmente soleado -> guardamos en esa misma posicion
* Procesar clima requiere 4 limites superirores en ascendente, last 100%
* 
**/
void MatrizTransicion::procesarClimaData(vector<short> limites) {
	for (int i = 0; i < clima_data.size(); i++) {
		for (int j = 0; j < limites.size(); j++) {
			if (clima_data.at(i) <= limites.at(j)) {	
				clima_data.at(i) = j;
				break;
			}
		}
	}
}

void MatrizTransicion::contarManianaMatriz() {
	matriz_transicion.assign(4, vector<double>(4, 0));

	for (int i = 0; i < clima_data.size() - 1; i++) {
		matriz_transicion[clima_data[i + 1]][clima_data[i]] += 1;
	}
}

vector<int> MatrizTransicion::contarCadaEstado() {

	vector<int> contEstados(4,0);
	for (int i = 0; i < clima_data.size() - 1;
		i++) { // no se contabiliza el ultimo ya que no se contabilizo ennn la
		// matriz
		contEstados[clima_data[i]] += 1;
	}
	return contEstados;
}


void MatrizTransicion::generateMatrizTransicion(vector<int> cont_estados) {
	for (int i = 0; i < matriz_transicion.size(); i++) {
		for (int j = 0; j < matriz_transicion[0].size(); j++) {
			if (cont_estados[j] != 0) {
				matriz_transicion[i][j] /= cont_estados[j]; //ctos manianas de ps[1] son ts[0] / cts ps [1]
				// ya en matriz	/ ctos en indice columna donde estamos en matriz
			}
			
		}
	}
}


void MatrizTransicion::actulizarClimaData() {	

	char* ruta_fichero = new char[150];
	ruta_fichero = "\"python main.py\"";
		
	system(ruta_fichero);
	_sleep(3000);


}