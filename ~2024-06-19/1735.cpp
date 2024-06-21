// Online C++ compiler to run C++ program online
#include <iostream>
#include <numeric>

using namespace std;

int main() {
    long long int A, B, C, D, E, F;
    cin >> A >> B >> C >> D;
    E = A * D + B * C;
    F = B * D;
    cout << E / gcd(E, F) << " " << F / gcd(E, F);
}