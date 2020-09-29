#include <iostream>

using namespace std;
int tipoDato(string dato);

int main() {
    string dato;

    getline(cin, dato);
    cout << tipoDato(dato);
    return 0;
}

int tipoDato(string dato){
    if (dato == "int")
    {
        return sizeof(int);
    }
    if (dato == "char")
    {
        return sizeof(char);
    }
    if (dato == "short")
    {
        return sizeof(short);
    }
    if (dato == "float")
    {
        return sizeof(float);
    }
    if (dato == "double")
    {
        return sizeof(double);
    }
    if (dato == "long")
    {
        return sizeof(long);
    }
    return -1;
}