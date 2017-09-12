#include <iostream>
#include <cstdio>/*use esta libreria para poder guardar los elementos de mi variable de tipo char en una variable
tipo string*/

using namespace std;
/*Profesor va disculpar la verdad solo pude resolverlo con dos variables, el codigo que hice resuelve el problema para dos variables o una*/

int main()
{/*Defino los elementos de mis variables*/
    int A[16]= {0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
    int B[16]= {0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1};
    int C[16]= {0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1};
    int D[16]= {0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1};
    int E[16]={0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};
    int F[16]={0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1};
    int G[16]={0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
    int H[16]={0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1};
    int I[16]={1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0};
    int J[16]={1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0};
    int K[16]={1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0};
    int L[16]={1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0};


    int i,j,x,y;
    char exp[20];
    cout << "Recuerde \n" << "Presione ALT+94 para hacer --> ^ \n" << "Presione ALT+126 para hacer --> ~ \n" << "E = A&B y F=C&D \n" << "G = A|B y H=C|D \n"
    << "I= ~(A&B) y J= ~(C&D) \n" << "K= ~(A|B) y L= ~(C|D) \n";
    cout << "Introduzca su expresion --> ";
    gets(exp);
    /*for que imprime mi tabla*/
    cout << "  " << "A" << "  " << "B" << "  " << "C" << "  " << "D" << "\n \n";
    for (i=0;i<16;i++)
    {
        cout << "  " << A[i] << "  " <<B[i] << "  " << C[i] << "  " << D[i] << "\n";
    }

cout <<  "\n" <<"La respuesta es... \n";
/*foor que recorre toda mi expresion */
    for(x=0;x<20;x++)
    {/*for que recorre cada elemento de mi lista de varaibles A,B,C,D*/
        for(y=0;y<16;y++)
        {
/*###########################################   AND   ##################################################################*/
            /*Aqui es donde la magia sucede, puesto que aqui se trabaja el operador AND y todos los posibles casos que existan*/
            if(exp[x]=='&' && exp[x+1]=='B')
            {
                if(A[y]==1 && B[y]==1)/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del AND y si no pongo el valor que corresponde por defecto*/
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            if(exp[x]=='&' && exp[x+1]=='J')
            {
                if(I[y]==1 && J[y]==1)/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del AND y si no pongo el valor que corresponde por defecto*/
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            if(exp[x]=='&' && exp[x+1]=='L')
            {
                if(K[y]==1 && L[y]==1)/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del AND y si no pongo el valor que corresponde por defecto*/
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            if(exp[x]=='&' && exp[x+1]=='C')
            {
                if(exp[x-1]=='B')
                {
                    if(B[y]==1 && C[y]==1)
                    {
                        cout << 1 << "\n";
                    }
                    else
                    {
                        cout << 0 << "\n";
                    }
                }
                else
                {
                    if(A[y]==1 && C[y]==1)
                    {
                        cout << 1 << "\n";
                    }
                    else
                    {
                        cout << 0 << "\n";
                    }
                }
            }
            if(exp[x]=='&' && exp[x+1]=='D')
            {
                if(exp[x-1]=='B')
                {
                    if(B[y]==1 && D[y]==1)
                    {
                        cout << 1 << "\n";
                    }
                    else
                    {
                        cout << 0 << "\n";
                    }
                }
                else if(exp[x-1]=='C')
                {
                    if(C[y]==1 && D[y]==1)
                    {
                        cout << 1 << "\n";
                    }
                    else
                    {
                        cout << 0 << "\n";
                    }
                }
                else
                {
                    if(A[y]==1 && D[y]==1)
                    {
                        cout << 1 << "\n";
                    }
                    else
                    {
                        cout << 0 << "\n";
                    }
                }
            }
            if(exp[x]=='&' && exp[x+1]=='F')
            {
                if(E[y]==1 && F[y]==1)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }
            if(exp[x]=='&' && exp[x+1]=='H')
            {
                if(G[y]==1 && H[y]==1)
                {
                    cout << 1 << "\n";
                }
                else
                {
                    cout << 0 << "\n";
                }
            }


/*###########################################   OR   ##################################################################*/
            /*Aqui es donde la magia sucede, puesto que aqui se trabaja el operador OR y todos los posibles casos que existan*/
            if(exp[x]=='|' && exp[x+1]=='F')
            {
                if(E[y]==0 && F[y]==0)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='|' && exp[x+1]=='J')
            {
                if(I[y]==0 && J[y]==0)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='|' && exp[x+1]=='L')
            {
                if(K[y]==0 && L[y]==0)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='|' && exp[x+1]=='H')
            {
                if(G[y]==0 && H[y]==0)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='|' && exp[x+1]=='B')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del OR y si no pongo el valor que corresponde por defecto*/
                if(A[y]==0 && B[y]==0)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }

            }
            if(exp[x]=='|' && exp[x+1]=='C')
            {
                if(exp[x-1]=='B')
                {
                    if(B[y]==0 && C[y]==0)
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else
                {
                    if(A[y]==0 && C[y]==0)
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
            }
            if(exp[x]=='|' && exp[x+1]=='D')
            {
                if(exp[x-1]=='B')
                {
                    if(B[y]==0 && D[y]==0)
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else if(exp[x-1]=='C')
                {
                    if(C[y]==0 && D[y]==0)
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else
                {
                    if(A[y]==0 && D[y]==0)
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
            }
/*#################################################  XOR   ############################################################*/
            /*Aqui es donde la magia sucede, puesto que aqui se trabaja el operador XOR y todos los posibles casos que existan*/
            if(exp[x]=='^' && exp[x+1]=='B')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del XOR y si no pongo el valor que corresponde por defecto*/
                if(A[y]==B[y])
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='^'&& exp[x+1]=='C')
            {
                if(exp[x-1]=='B')
                {
                    if(B[y]==C[y])
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else
                {
                    if(A[y]==C[y])
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }

            }
            if(exp[x]=='^'&& exp[x+1]=='D')
            {

                if(exp[x-1]=='B')
                {
                    if(B[y]==D[y])
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else if(exp[x-1]=='C')
                {
                    if(C[y]==D[y])
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
                else
                {
                    if(A[y]==D[y])
                    {
                        cout << 0 << "\n";
                    }
                    else
                    {
                        cout << 1 << "\n";
                    }
                }
            }
            if(exp[x]=='^' && exp[x+1]=='F')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del XOR y si no pongo el valor que corresponde por defecto*/
                if(E[y]==F[y])
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='^' && exp[x+1]=='H')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del XOR y si no pongo el valor que corresponde por defecto*/
                if(G[y]==H[y])
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='^' && exp[x+1]=='J')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del XOR y si no pongo el valor que corresponde por defecto*/
                if(I[y]==J[y])
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='^' && exp[x+1]=='L')
            {/*comparo si los elementos de mi lista son iguales y si lo son hago cumplir
                    la regla del XOR y si no pongo el valor que corresponde por defecto*/
                if(K[y]==L[y])
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }

/*#################################################   NOT   ############################################################*/
            /*Aqui es donde la magia sucede, puesto que aqui se trabaja el operador NOT y todos los posibles casos que existan*/
            if(exp[x]=='~'&& exp[x+1]=='A')
            {/*invierte los valores que aparecen en mi array de variables A,B,C,D, si es 1 lo pasa a 0 y si es 0 lo pasa a 1*/
                if(A[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='B')
            {
                if(B[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='C')
            {
                if(C[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='D')
            {
                if(D[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='E')
            {
                if(E[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='F')
            {
                if(F[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='G')
            {
                if(G[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
            if(exp[x]=='~'&& exp[x+1]=='H')
            {
                if(H[y]==1)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
        }

    }


    return 0;
}
