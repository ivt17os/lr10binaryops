#include <iostream>
#include <string>
#include <sstream>


using namespace std;

int main(){

	string ip, mask;

	cout << "Enter IP address and subnet mask:\n";
	cin >> ip;
	cin >> mask;


	int ipb[4],mb[4],wideipb[4],ipb2[4]; 
	char ch; //to temporarily store the '.'

	// получить числа из строк
	
	std::stringstream ssip(ip);
	ssip >> ipb[0] >> ch >> ipb[1] >> ch >> ipb[2] >> ch >> ipb[3];

	std::stringstream ssmask(mask);
	ssmask >> mb[0] >> ch >> mb[1] >> ch >> mb[2] >> ch >> mb[3];

	// вычислите адреса:

	// обнулить те биты, которые равны нулю в маске
	// это будет адрес подсети
	for(int i=0;i<4;i++){
		ipb2[i]=ipb[i]&mb[i];
	}
	cout<<ipb2[0]<<"."<<ipb2[1]<<"."<<ipb2[2]<<"."<<ipb2[3];
	cout << "\n";

	// обнулить те биты, которые равны нулю в маске
	// это будет широковещательный адрес подсети
	for(int i=0;i<4;i++){
		wideipb[i]=ipb[i]|(mb[i]^255);
	}
	cout<<wideipb[0]<<"."<<wideipb[1]<<"."<<wideipb[2]<<"."<<wideipb[3];
	cout << "\n";

	return 0;
}
