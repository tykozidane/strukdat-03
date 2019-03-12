/*
Nama	: tyko zidane badhawi
NPM		: 140810180031
Kelas	: A
*/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input (segiempat* s)
{
	cout << "Masukan Panjang	: "; cin >> s->panjang;
	cout << "Masukan lebar	: "; cin >> s->lebar;
}
float keliling (segiempat s)
{
	return 2*(s.panjang+s.lebar);
}
float luas (segiempat s)
{
	return (s.panjang*s.lebar);
}
float diagonal (segiempat s)
{
	return sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
}
void print (segiempat s)
{
	cout <<"Keliling	: " << keliling(s) << endl;
	cout << "Luas		: " << luas(s) << endl;
	cout << "Diagonal	: " <<diagonal(s) << endl;
}
int main()
{
	segiempat* sg;
	sg= new segiempat;
	input (sg);
	print (*sg);
}

