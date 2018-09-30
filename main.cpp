#include <iostream>

using namespace std;

int main()
{
    unsigned long long numero=600851475143;
    bool esprimo=1;
    int ultimoprimo=2;
    for(int i = ultimoprimo;i<numero ;i++){
        cout << i << endl ;
        esprimo=1;
        for (int j=2;j<i ;j++){
            if(i%j==0)
                esprimo=0;
        }
        if(esprimo &&(numero%i==0)){
            ultimoprimo=i;
            numero=numero/i;
        }

    }
    cout << numero << endl;


    return 0;
}
