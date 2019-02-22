#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main(){

	string ip, mask;

	cout << "Enter IP address and subnet mask:\n";
	cin >> ip;
	cin >> mask;


	int ipb[4],mb[4]; 
	char ch; //to temporarily store the '.'

	// получить числа из строк
	
	std::stringstream ssip(ip);
	ssip >> ipb[0] >> ch >> ipb[1] >> ch >> ipb[2] >> ch >> ipb[3];

	std::stringstream ssmask(mask);
	ssmask >> mb[0] >> ch >> mb[1] >> ch >> mb[2] >> ch >> mb[3];

	// вычислите адреса:
	ipb[0] * ipb [1] * ipb [2] * ipb [3];


	// обнулить те биты, которые равны нулю в маске

	// это будет адрес подсети

	cout << "\n";

	// обнулить те биты, которые равны нулю в маске
	// это будет широковещательный адрес подсети
	cout << ipb[2] << "." << ipb[3] << "\n";

	return 0;
}

