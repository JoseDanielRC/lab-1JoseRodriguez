#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std:: endl;
using std::string;
	void funcion1(string cadena){// ejercicio 1 parte uno
		int suma=0;
		if(cadena[0]==cadena[cadena.length()-1]){
     		   	suma+=cadena[0]-'0';
		}

		for(int i=0;i<=cadena.length()-2;i++){
       			 if(cadena[i]==cadena[i+1]){
       			 suma+=cadena[i]-'0';
        		}
		}
	cout<<suma<<endl;
	}
	void funcion2(string cadena){// parte 2 del ejercicio uno, que tiene un metodo diferente para calcular la suma
    		int suma=0;
		for(int i=0;i<=cadena.length()/2-1;i++){
       		 if(cadena[i]==cadena[i+cadena.length()/2]){
       			 suma+=cadena[i]-'0';
			 suma+=cadena[i]-'0';
       			 }	
		}
	cout<<suma<<endl;

	}
	void perfecto(int numero){// metodo que determina si un numero es perfecto
		int suma=0;
		for(int j=1;j<numero;j++){
			if(numero % j == 0){
				cout<<j<<" ";
				suma+=j;
			}
		}
		cout<<"conclucion:"<<endl;
		if(suma==numero){
		cout<<"El numero  "<<numero<<" es perfecto"<<endl;
		}
		else{
		cout<<numero<<" no es perfecto"<<endl;
		}
	}
	void secuencia(string cadena){
		int repite;// boolean que determina si se repite una letra
		for(int i=0;i<cadena.length()-1;i++){
			for(int j=i;j<cadena.length();j++){
				if(cadena[i]==cadena[j]){
				repite++;
					if(repite>1){
					cout<<"Epale al parecer repetiste una letra"<<endl;
					i=cadena.length();
			}	
				}

			}
			repite=0;
		}
	}

int main(){
	int opcion=0;
	int numero=0;
	string secuencias="";
        cout<<"Buenas talentoso usuario, ingresa una opcion\n"// siendo amigable con el usuario
                "1.Captcha\n"
                "2.Numero perfecto\n"
                "3.Permutaciones\n"<<endl;
                cin>>opcion;
	int ejercicio=0;
	string cadena="l";
        	switch(opcion){
                case 1://ejercicio 1

                        cout<<"Opciones:\n"
                                "1.Secuencia sencilla\n"
                                "2.Secuencia doble\n"<<endl;
                                cin>>ejercicio;
                                while(cadena.length()%2!=0){
                                cout<<"Ingrese su cadena"<<endl;
                                cin>>cadena;
                                }
                                switch(ejercicio){
                                        case 1:
                                                funcion1(cadena);
                                                break;
                                        case 2:
                                        funcion2(cadena);
                                                break;
                                }

                        break;
		
		case 2:// ejercicio 2
			cout<<"Bienvenido, hoy vamos a determinar si un numero es perfecto\n"
				"Ingresa un numero"<<endl;
			cin>>numero;
			perfecto(numero);
			
                        break;
                case 3:// ejercicio 3
			cout<<"Ingrese una secuencia"<<endl;
			cin>>secuencias;
			secuencia(secuencias);
                        break;
        }

}
