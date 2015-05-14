#include <iostream>
#include<cstdlib>
#include<fstream>


##include "stdio.h"
using namespace std;
class clientes
{
protected:
        char cliente[20];
};
class cuentas:public clientes
{
   protected:
        int cuenta;
};
class bancos:public cuentas
{
   protected:
        char banco[20];
};
class cajeros:public bancos
{
    private:
        int cajero;
    public:
        int alta_catalogos(ofstream & cliente_salida,ofstream & banco_salida);
        int operaciones();
        int reportes_estadisticas();
        void imprimir_catalogos();
};
int cajeros::alta_catalogos(ofstream & cliente_salida,ofstream & banco_salida)
{
    int opc=0;
    while(opc!=7)
    {
        cout<<"**Menu Principal**"<<endl;
        cout<<"1.Alta Clientes \n2.Alta Bancos\n3.Alta Cuentas\n4.Alta Cajeros\n5.Operaciones\n6. Impresion\n7.Fin\n";
        cin>>opc;
        switch(opc)
            {
                case 1:
                cout<<"Dame el nombre del cliente"<<endl;
                cin>>cliente;
                system("cls");
                break;
                case 2:
                cout<<"Dame el nombre del banco"<<endl;
                cin>>banco;
                system("cls");
                break;
                case 3:
                cout<<"Dame el numero de cuenta"<<endl;
                cin>>cuenta;
                system("cls");
                break;
                case 4:
                cout<<"Dame el numero de cajero"<<endl;
                cin>>cajero;
                system("cls");
                break;
                case 5:
                    system("pause");
                    system("cls");
                    operaciones();
                break;
                case 6:
                    imprimir_catalogos();
                    system("pause");
                    system("cls");
                    alta_catalogos(cliente_salida,banco_salida);
                default:
                    cout<<"Terminado";
                return 0;
                break;
            }

    }

}
int cajeros::operaciones()
{
   int opc=0;

    while(opc!=8)
    {
        cout<<"**Menu Operaciones**"<<endl;
        cout<<"1. Retiro de efectivo\n2. Consulta de saldos\n3. Depositos\n4. Pago con tarjeta\n5. Transferencia de fondos\n6. Cobro por comisiones\n7.Reportes y estadisticas\n8.Menu principal";
        cin>>opc;
        switch(opc)
            {
                case 1:

                    cout<<"hola"<<endl;
                break;
                case 2:

                    cout<<"hola"<<endl;
                break;
                case 3:

                    cout<<"hola"<<endl;
                break;
                case 4:

                    cout<<"hola"<<endl;
                break;
                case 5:
                    cout<<"hola"<<endl;
                    break;
                case 6:
                    cout<<"hola"<<endl;
                    break;
                case 7:
                        system("pause");
                        system("cls");
                        reportes_estadisticas();
                case 8:
                        system("pause");
                        system("cls");
                        //alta_catalogos();
                break;

                default:
                    cout<<"Terminar";
                    return 0;
                    break;
            }

    }
}
int cajeros::reportes_estadisticas()
{
    int opc=0;
    while(opc!=6)
    {
        cout<<"**Menu Reportes y Estadisticas**"<<endl;
        cout<<"1.Movimient por cajero\n2.Movimientos por cuenta\n3.Reporte cuenta por cliente\n4.Saldos de la cuenta\n5.Reporte de comisiones\n6.Menu Operaciones\n7.Menu Principal\n";
        cin>>opc;
        switch(opc)
            {
                case 1:
                    cout<<"Dame "<<endl;
                break;
                case 2:
                    cout<<"Dame"<<endl;
                break;
                case 3:
                    cout<<"Dame "<<endl;
                break;
                case 4:
                    cout<<"Dame"<<endl;
                break;
                case 5:
                    cout<<"Dame"<<endl;
                case 6:

                    cout<<"Regresando al menu de operaciones"<<endl;
                        system("pause");
                        system("cls");
                        operaciones();
                break;
                case 7:

                     cout<<"Regresando al menu de principal"<<endl;
                        system("pause");
                        system("cls");
                        //alta_catalogos();
                break;
                default:
                    cout<<"Terminar";
                    return 0;
                    break;
            }

    }

}
void cajeros::imprimir_catalogos()
{
    cout<<"Clientes\n"<<cliente<<endl;
    cout<<"Bancos\n"<<banco<<endl;
    cout<<"Cuentas\n"<<cuenta<<endl;
    cout<<"Cajeros\n"<<cajero<<endl;
}
int main()
{
    cajeros x;
    cajeros *ap;
    ap=&x;
    ofstream cliente_salida("cliente.txt",ios_base::app);
    ofstream banco_salida("bancos.txt",ios_base::app);
    ap->alta_catalogos(cliente_salida,banco_salida);
    ap++;
    return 0;
}
