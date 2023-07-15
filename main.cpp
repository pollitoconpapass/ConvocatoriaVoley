#include <iostream>
using namespace std;

void JugadorasVoley() {
	int num_jug;
	float suma = 0, prom = 0;
	int cont_lib = 0, cont_mat = 0, cont_lev = 0;
	int lib, mat, lev; 
	cout << "Ingrese el numero de jugadoras: "; cin >> num_jug;

	//--- INICIALIZAR EL ARREGLO ---
	float* matadorcitas = new float[80];
	srand(time(NULL));

	for (int i = 0; i < num_jug; i++) {
		matadorcitas[i] = 155 + rand() % (221 - 155);
		cout << "Estatura de la jugadora " << i + 1 << " es: " << matadorcitas[i] << "cm." << endl;
	}

  //--- PROMEDIO DE ESTATURA ---
	for (int i = 0; i < num_jug; i++) {
		suma += matadorcitas[i];
		prom = suma / float(num_jug);
	}
  cout << "El promedio de tallas de las jugadoras es de: " << prom << "cm. " << endl;

	//--- DETERMINAR JUGADORAS ---
	cout << endl;
	cout << "Liberos: " << endl;
	for (int i = 0; i < num_jug; i++) {
		if (matadorcitas[i] >= 155 && matadorcitas[i] <= 169) { //-> Libero
			//lib = i+1;
      cont_lib++;
			cout << "Jugadora " << i+ 1 << endl;
		}
	}

	cout << endl;
	cout << "Levantadoras: " << endl;
	for (int i = 0; i < num_jug; i++) {
		if (matadorcitas[i] >= 170 && matadorcitas[i] <= 185) { //-> Levantadoras
			lev = i+1;
      cont_lev++;
			cout << "Jugadora " << lev << endl;
		}
	}

	cout << endl;
	cout << "Matadoras: " << endl; 
	for (int i = 0; i < num_jug; i++) {
		if (matadorcitas[i] > 185) { //-> Matadoras
			mat = i+1;
      cont_mat++;
			cout << "Jugadora " << mat << endl;
		}
	}
	
//Conclusiones
	cout << "\nTotal de Liberos:  " << cont_lib << endl;
	cout << "Total de Levantadoras:  " << cont_lev << endl;
	cout << "Total de Matadoras:  " << cont_mat << endl;

	if (cont_mat < (num_jug * 0.50)) {
		cout << "\nRealizar nueva convocatoria. " << endl;
	}
	else {
		cout << "\nConvocatoria exitosa." << endl;
	}

}

int main() {
	JugadorasVoley();
	return 0;
}
