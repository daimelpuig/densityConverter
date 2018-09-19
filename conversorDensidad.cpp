//============================================================================
// Name        : conversorDensidad.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Conversor de Unidades de Densidad in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

const double gr_cm_lb_gal = 8.3454;

//********** Gramo/cm^3 a las demás *************
double gr_cm_3_a_lb_gal(double &unidad){
	return (unidad * 1000)/(0.264 * 453.6);
}

double gr_cm_3_a_lb_pg_2_1000ft(double &unidad){
	return 0;
}

double gr_cm_3_a_kg_m_3(double &unidad){
	return unidad * 1000;
}

double gr_cm_3_a_lb_ft_3(double &unidad){
	return unidad * 0.01602;
}

//********** Lb/gl a las demás *************
double lb_gl_gr_cm_3(double &unidad){
	return unidad * 0.1197;
}

double lb_gl_a_lb_pg_2_1000ft(double &unidad){
	return 0;
}

double lb_gl_a_kg_m_3(double &unidad){
	return (unidad * 0.264 * 1000 * 453.6) / 1000;
}

double lb_gl_a_lb_ft_3(double &unidad){
	return unidad * 7.48052;
}

//********** Kg/m^3 a las demás
double kg_m_3_gr_cm_3(double &unidad){
	return unidad / 1000;
}

double kg_m_3_a_lb_gl(double &unidad){
	return unidad * 0.0083454;
}

double kg_m_3_a_lb_ft_3(double &unidad){
	return unidad * 0.062428;
}

double kg_m_3_a_lb_pg_2_1000ft(double &unidad){
	return 0;
}

//********* lb/ft^3 a las demás **********
double lb_ft_3_a_gr_cm_3(double &unidad){
	return unidad * 0.0160185;
}

double lb_ft_3_a_lb_gl(double &unidad){
	return unidad * 0.133681;
}

double lb_ft_3_a_kg_m_3(double &unidad){
	return unidad * 16.0185;
}

double lb_ft_3_a_lb_pg_2_1000_ft(double &unidad){
	return 0;
}

//******** lb/pg^2*1000ft a las demás ***********
double lb_pg_2_1000_ft_a_gr_cm_3(double &unidad){
	return 0;
}

double lb_pg_2_1000_ft_a_lb_gl(double &unidad){
	return 0;
}

double lb_pg_2_1000_ft_a_kg_m_3(double &unidad){
	return 0;
}

double lb_pg_2_1000_ft_a_lb_ft_3(double &unidad){
	return 0;
}


int main() {
	cout << "Bienvenido al Conversor de unidades de densidad en C++"<<endl;
	cout << "Seleccione alguna de las siguientes opciones" << endl;
	int option;
	double unidad = 0;
	double valor = 0;
	cout << "1. Gramos sobre centimetros cubicos" << endl;
	cout << "2. Libra sobre galon" << endl;
	cout << "3. Kilogramos sobre metro cubico" << endl;
	cout << "4. Libra sobre pie cubico" << endl;
	cout << "5. Libra sobre pulgada cuadrada x 1000 ft" << endl;
	cin >> option;
	int option2;

	switch (option) {
			case 1:
				cout<< "De gr/cm3 a: " << endl;
				cout << "1. Libra sobre galon" << endl;
				cout << "2. Libra sobre pulgada cuadrada x 1000 ft" << endl;
				cout << "3. Kilogramos sobre metro cubico" << endl;
				cout << "4. Libra sobre pie cubico" << endl;
				cin >> option2;
				switch (option2) {
					case 1:
						cout << "De gr/cm^3 a lb/gal. Cuanto desea convertir: " << endl;
						cin >> unidad;
						valor = gr_cm_3_a_lb_gal(unidad);
						cout << "El valor es de: " << valor;
						break;
					case 2:
						cout << "De gr/cm3 a lb/pg^2*1000ft. Cuanto desea convertir: " << endl;
						cin >> unidad;
						valor = gr_cm_3_a_lb_pg_2_1000ft(unidad);
						cout << "El valor es de: " << valor;
						break;
					case 3:
						cout << "De gr/cm3 a Kg/m^3. Cuanto desea convertir: " << endl;
						cin >> unidad;
						valor = gr_cm_3_a_kg_m_3(unidad);
						cout << "El valor es de: " << valor << " Kg/cm^3";
						break;
					case 4:
						cout << "De gr/cm3 a lb/ft^3. Cuanto desea convertir: " << endl;
						cin >> unidad;
						valor = gr_cm_3_a_lb_ft_3(unidad);
						cout << "El valor es de: " << valor << " lb/ft^3";
						break;
					default:
						break;
				}
				break;
			case 2:
				cout<< "De lb/gl a: " << endl;
				cout << "1. Gramos sobre centímetros cúbicos" << endl;
				cout << "2. Libra sobre pulgada cuadrada x 1000 ft" << endl;
				cout << "3. Kilogramos sobre metro cúbico" << endl;
				cout << "4. Libra sobre pie cúbico" << endl;
				cin >> option2;
				switch (option2) {
				case 1:
					cout << "De lb/gl a gr/cm^3. Cuánto desea convertir: " << endl;
					cin >> unidad;
					valor = lb_gl_gr_cm_3(unidad);
					cout << "El valor es de: " << valor << "gr/cm^3";
					break;
				case 2:
					cout << "De lb/gl a lb/pg^2*1000ft. Cuánto desea convertir: " << endl;
					cin >> unidad;
					valor = lb_gl_a_lb_pg_2_1000ft(unidad);
					cout << "El valor es de: " << valor << "lb/pg^2*1000ft";
					break;
				case 3:
					cout << "De lb/gl a Kg/m^3. Cuánto desea convertir: " << endl;
					cin >> unidad;
					valor = lb_gl_a_kg_m_3(unidad);
					cout << "El valor es de: " << valor << " Kg/cm^3";
					break;
				case 4:
					cout << "De lb/gl a lb/ft^3. Cuánto desea convertir: " << endl;
					cin >> unidad;
					valor = lb_gl_a_lb_ft_3(unidad);
					cout << "El valor es de: " << valor << " lb/ft^3";
					break;
				default:
					break;
				}
				break;
			case 3:
				cout<< "De Kg/m^3 a: " << endl;
				cout << "1. Gramos sobre centímetros cúbicos" << endl;
				cout << "2. Libra sobre galón" << endl;
				cout << "3. Libra sobre pie cúbico" << endl;
				cout << "4. Libra sobre pulgada cuadrada x 1000 ft" << endl;
				cin >> option2;
				switch (option2) {
					case 1:
						cout << "De Kg/m^3 a gr/cm^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = kg_m_3_gr_cm_3(unidad);
						cout << "El valor es de: " << valor << " gr/cm^3";
						break;
					case 2:
						cout << "De Kg/m^3 a lb/gl. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = kg_m_3_a_lb_gl(unidad);
						cout << "El valor es de: " << valor << "lb/gl";
						break;
					case 3:
						cout << "De kg/m^3 a lb/ft^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = kg_m_3_a_lb_ft_3(unidad);
						cout << "El valor es de: " << valor << " lb/ft^3";
						break;
					case 4:
						cout << "De kg/m^3 a lb/pg^2*1000ft. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = kg_m_3_a_lb_pg_2_1000ft(unidad);
						cout << "El valor es de: " << valor << " lb/pg^2*1000ft";
						break;
					default:
						break;
					}
				break;
			case 4:
				cout<< "De lb/ft^3 a: " << endl;
				cout << "1. Gramos sobre centímetros cúbicos" << endl;
				cout << "2. Libra sobre galón" << endl;
				cout << "3. Kilogramos sobre metro cúbico" << endl;
				cout << "4. Libra sobre pulgada cuadrada x 1000 ft" << endl;
				cin >> option2;
				switch (option2) {
					case 1:
						cout << "De lb/ft^3 a gr/cm^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_ft_3_a_gr_cm_3(unidad);
						cout << "El valor es de: " << valor << " gr/cm^3";
						break;
					case 2:
						cout << "De lb/ft^3 a lb/gl. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_ft_3_a_lb_gl(unidad);
						cout << "El valor es de: " << valor << " lb/gl";
						break;
					case 3:
						cout << "De lb/ft^3 a kg/m^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_ft_3_a_kg_m_3(unidad);
						cout << "El valor es de: " << valor << " kg/m^3";
						break;
					case 4:
						cout << "De lb/ft^3 a lb/pg^2*1000ft. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_ft_3_a_lb_pg_2_1000_ft(unidad);
						cout << "El valor es de: " << valor << " lb/pg^2*1000ft";
						break;
					default:
						break;
					}
				break;
			case 5:
				cout<< "De lb/pg^2*1000ft a: " << endl;
				cout << "1. Gramos sobre centímetros cúbicos" << endl;
				cout << "2. Libra sobre galón" << endl;
				cout << "3. Kilogramos sobre metro cúbico" << endl;
				cout << "4. Libra sobre pie cúbico" << endl;
				cin >> option2;
				switch (option2) {
					case 1:
						cout << "De lb/pg^2*1000ft a gr/cm^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_pg_2_1000_ft_a_gr_cm_3(unidad);
						cout << "El valor es de: " << valor << " gr/cm^3";
						break;
					case 2:
						cout << "De lb/pg^2*1000ft a lb/gl. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_pg_2_1000_ft_a_lb_gl(unidad);
						cout << "El valor es de: " << valor << " lb/gl";
						break;
					case 3:
						cout << "De lb/pg^2*1000ft a kg/m^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_pg_2_1000_ft_a_kg_m_3(unidad);
						cout << "El valor es de: " << valor << " kg/m^3";
						break;
					case 4:
						cout << "De lb/pg^2*1000ft a lb/ft^3. Cuánto desea convertir: " << endl;
						cin >> unidad;
						valor = lb_pg_2_1000_ft_a_lb_ft_3(unidad);
						cout << "El valor es de: " << valor << " lb/ft^3";
						break;
					default:
						break;
				}
				break;
			default:
				break;
		}
	return 0;
}
