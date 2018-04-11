#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    // read outputname
    string outname=argv[1];
    //read dimensions
    int n,m;
    cout << "\nInserte el número de filas:\t";
    cin>>n;
    cout << "\nInserte el número de columnas:\t";
    cin>>m;

    double M[n][m];

    for(int mu=0;mu<n;mu++)
    {
        for(int nu=0;nu<m;nu++)
        {
            cout << "\nInserte el valor de la coordenada (" << mu+1 << "," << nu+1 << "):\t";
            cin>>M[mu][nu];
        }
    }
    ofstream result(outname);

    result << n << " " << m << "\n";

    for(int mu=0;mu<n;mu++)
    {
        for(int nu=0;nu<m;nu++)
        {
            result << M[mu][nu] << " ";
        }
        result << "\n";
    }
    return 0;
}
