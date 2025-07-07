// Rearranging to avoid summing the infinite tail of the distribution...
// Converting to C code

#include <bits/stdc++.h>
using namespace std;

double AttackerSuccessProbability(double q, int z)
{
    double p = 1.0 - q;
    double lambda = z * (q / p);
    double sum = 1.0;
    int i, k;
    for (k = 0; k <= z; k++)
    {
        double poisson = exp(-lambda);
        for (i = 1; i <= k; i++)
            poisson *= lambda / i;
        sum -= poisson * (1 - pow(q / p, z - k));
    }
    return sum;
}

/// Coded in c++
// #include <math.h>
// using namespace std;

double bitcoin()
{
    double p = 1.0 - q;
    double lambda = z * (q * p);
    double sum = 1.0;
    int k;
}
int main(){
    double bitcoin();
}