#include <iostream>

/*

1)

using std::cout;

void f(signed char c) { std::cout << "Signed char\n"; }
void f(unsigned char c) { std::cout << "Unsigned char\n"; }
int main() {
char c1 = "a";
f(c1);

return 0;
}

c) produce un error de compilacion por que f es ambigua

*/


/*

2)

Given file A.cpp:
#include <iostream>
void f( int ) { std::cout << “f(int)”; }


And file B.cpp:
#include <iostream>
void f( double ) { std::cout << “f(double)”; }

int main () {
f(3);
}


d) en el main no esta linkeado ni el archivo A ni el B asumiendo que el main esta en un archivo diferente a los otros 2
si el main esta en el B imprimiria double.

*/


/*

3)

Given the file header.h:
#include <iostream>
void f( int d);


And the file A.cpp:
#include “header.h”
void f( int d = 10) {std::cout << d << “\t”; }


And the file B.cpp:
#include “header.h”
int main () {
f();
f(5);
}


c) error de compilacion por que no deja llamar a f() sin ningun argumento.

*/


/*
4)

#include <iostream>
using std::cout;
void f(float) { cout << "f(float)"; }
void f(long double) { cout << "f(long double)"; }
int main() {
f(2.0);
}

c) hay una ambiguedad

*/


/*

5)

#include <iostream>
using std::cout;
using std::endl;
void f(int&) { cout << "A"; }
void f(const int&) { cout << "B"; }
int main() {
int i = 10;
const int ci = 11;
f(i);
f(ci);
}

b) imprime AB


*/


/*

6)

int f() { return 1; }
double f() { return 2.5; }
int main() {
int ret = f();
return ret;
}

d) error de compilacion de por sobrecargar la funcion f()

*/

/*

7)

void f(int) { std::cout << "int"; }
void f(double) { std::cout << "double"; }
int main() {
char a = 'a';
f(a);
}

a) imprime int


*/