#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
    string M1=argv[1];
    string M2=argv[2];

    // leer matriz 1
    int rows1,col1;
    ifstream file1(M1);
    file1 >> rows1 >> col1;

    double A[rows1][col1];

    for(int i=0; i<rows1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            file1 >> A[i][j];
        }
    }

    int rows2,col2;
    ifstream file2(M2);
    file2 >> rows2 >> col2;

    double B[rows2][col2];

    for(int i=0; i<rows2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            file2 >> B[i][j];
        }
    }

    if(col1!=rows2)
    {
        cout << "Matrix multiplicable dimensions doesn't match." << endl;;
        return 1;
    }
    else
    {
        int n,m,p;
        n=rows1;
        m=col1;
        p=col2;

        double M[n][p];

        for(int mu=0;mu<n;mu++)
        {
            for(int nu=0;nu<p;nu++)
            {
                double s=0.;
                for(int k=0;k<m;k++)
                {
                    s+=A[mu][k]*B[k][nu];
                }
                M[mu][nu]=s;
            }
        }

        ofstream result("Result.dat");

        result << n << " " << p << "\n";

        for(int mu=0;mu<n;mu++)
        {
            for(int nu=0;nu<p;nu++)
            {
                result << M[mu][nu] << " ";
            }
            result << "\n";
        }
        return 0;
    }
    return 1;
}
