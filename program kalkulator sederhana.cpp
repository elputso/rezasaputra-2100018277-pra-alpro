#include<iostream>
#include<math.h>
using namespace std;

int penambahan (int a, int b)
{
	int c=a+b;
	return c;
}
int pengurangan (int d, int e)
{
	int f=d-e;
	return f;
}
int perkalian (int g, int h)
{
	int i=g*h;
	return i;
}
double pembagian (double j, double k)
{
	double l=j/k;
	return l;
}
int pangkat(int m, int n)
{
	int o=pow(m,n);
	return o;
}
double akarpangkat(double p)
{
	double q=sqrt(p);
	return q;
}
int main()
{
	int a,b,d,e,g,h,m,n, menu;
	double j,k,p;
	string mulai;
	
cout<<"----------------------------------------------------------------"<<endl;
cout<<"		PROGRAM KALKULATOR 		"<<endl;
cout<<"----------------------------------------------------------------"<<endl;
cout<<"\nMenu Operasi :"<<endl;
cout<<"1. Penambahan"<<endl;
cout<<"2. Pengurangan"<<endl;
cout<<"3. Perkalian"<<endl;
cout<<"4. Pembagian"<<endl;
cout<<"5. Perpangkatan"<<endl;
cout<<"6. Akar pangkat"<<endl;
cout<<"7. Keluar"<<endl;

cout<<"\n--------------------------------------------------------------"<<endl;
cout<<"Ketik 'Mulai' untuk manggunakan program kalkulator: ";
cin>>mulai;

cout<<"----------------------------------------------------------------"<<endl;
while (mulai==mulai)
{
	cout<<"\nMasukan Pilihan Menu:";
	cin>>menu;
	if(menu==1)
	{
		cout<<"Bilangan Pertama: ";
		cin>>a;
		cout<<"Bilangan Kedua: ";
		cin>>b;
		int c= penambahan(a,b);
		cout<<"hasil"<<a<<"+"<<b<<"="<<c<<endl;
	}
	else if (menu==2)
	{
		cout<<"Bilangan Pertama :";
		cin>>d;
		cout<<"Bilangan Kedua :";
		cin>>e;
		int f=pengurangan (d,e);
		cout<<"Hasil"<<d<<"-"<<e<<"="<<f<<endl;
	}
	else if(menu==3)
	{
		cout<<"Bilangan Pertama: ";
		cin>>g;
		cout<<"Bilangan Kedua:";
		cin>>h;
		int i= perkalian (g,h);
		cout<<"Hasil"<<g<<"*"<<h<<"="<<i<<endl;
	}
	else if(menu==4)
	{
		cout<<"Bilangan Pertama :";
		cin>>j;
		cout<<"Bilangan Kedua :";
		cin>>k;
		double l=pembagian (j,k);
		cout<<"Hasil"<<j<<"/"<<k<<"="<<l<<endl;
	}
	else if(menu==5)
	{
		cout<<"Bilangan Pertama :";
		cin>>m;
		cout<<"Bilangan Pangkat :";
		cin>>n;
		int o = pangkat (m,n);
		cout<<"Hasil"<<m<<"^"<<n<<"="<<o<<endl;
	}
	else if (menu==6)
	{
		cout<<"Bilangan yang akan diakar :";
		cin>>p;
		double q= akarpangkat (p);
		cout<<"Hasil akar"<<p<<"="<<q<<endl;
	}
	else if(menu==7)
	{
		cout<<"\n-------------------------------------------------------"<<endl;
		cout<<"		KELUAR DARI PROGRAM KALKULATOR		"<<endl;
		
		cout<<"---------------------------------------------------------"<<endl;
		break;
	}
}
return 0;
}
