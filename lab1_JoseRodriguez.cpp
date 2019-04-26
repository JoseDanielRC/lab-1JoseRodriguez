#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std:: endl;
using std::string;
	void funcion1(string cadena){
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
	void funcion2(string cadena){
    		int suma=0;
		for(int i=0;i<=cadena.length()/2-1;i++){
       		 if(cadena[i]==cadena[i+cadena.length()/2]){
       			 suma+=cadena[i]-'0';
			 suma+=cadena[i]-'0';
       			 }	
		}
	cout<<suma<<endl;

	}
	void perfecto(int numero){
		int suma=0;
		for(int j=1;j<numero;j++){
			if(numero % j == 0){
				cout<<j<<" ";
				suma+=j;
			}
		}
		cout<<"conclucion:"<<endl;
		if(suma==numero){
		cout<<"El numero"<<numero<<"es perfecto"<<endl;
		}
		else{
		cout<<numero<<"no es perfecto"<<endl;
		}
	}

int main(){
	int opcion=0;
	int numero=0;
        cout<<"Buenas talentoso usuario, ingresa una opcion\n"
                "1.Captcha\n"
                "2.Numero perfecto\n"
                "3.Permutaciones\n"<<endl;
                cin>>opcion;
	int ejercicio=0;
	string cadena="l";
        	switch(opcion){
                case 1:

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
		
		case 2:
			cout<<"Bienvenido, hoy vamos a determinar si un numero es perfecto\n"
				"Ingresa un numero"<<endl;
			cin>>numero;
			perfecto(numero);
			
                        break;
                case 3:
                        break;
        }

}
