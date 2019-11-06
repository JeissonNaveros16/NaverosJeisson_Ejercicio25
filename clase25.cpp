#include<iostream>

using namespace std;

void relleno(int l,float **m);

void imprimecabezas(int l,float **m);

void imprime(int l,float **m);

// Código basado en el expuesto en clase y enviado por correo
int main()
{
    cout<<"Escriba un numero del 3 al 11"<<endl;
    int n=0;
    cin>>n;
    if(n>=3 && n<=11)
    {
        float ** mat = new float *[n+2];
        for (int i = 0; i < n+2; i++)
        {
            mat[i] = new float[n];
        }
        relleno(n, mat);
        cout<<"\nLa matriz luego de rellenarla se ve asi: "<<endl;
        imprime(n,mat);
        cout<<"\nLa cabecera de la matriz es: ";
        imprimecabezas(n, mat);
        cout<<endl;
    }
    else
    {
        cout<<"El numero no esta en el rango valido"<<endl;
    }
    
    return 0;
}

void relleno(int l,float **m)
{
    for(int i = 0; i<l+2; i++)
    {
        for(int j = 0; j < l; j++)
        {
            m[i][j] = i + j;
        }  
    }
}

void imprimecabezas(int l, float **m)
{
    for (int j = 0; j<l; j++)
    {
        cout<<m[0][j]<<" ";
    }
    cout<<endl;
    float suma = 0;
    for (int i = 0; i<l+2; i++)
    {
        suma += m[i][0];
    }
    cout<<"La suma de la primera columna es: "<<suma<<endl;
}

void imprime(int l,float **m)
{
    for (int i = 0; i<l+2; i++)
    {
        for ( int j = 0; j<l; j++)
        {
            cout<<" "<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}