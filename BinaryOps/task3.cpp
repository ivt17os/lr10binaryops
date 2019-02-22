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

	char negmask[4];
	// �������� ����� �� �����
	
	std::stringstream ssip(ip);
	ssip >> ipb[0] >> ch >> ipb[1] >> ch >> ipb[2] >> ch >> ipb[3];

	std::stringstream ssmask(mask);
	ssmask >> mb[0] >> ch >> mb[1] >> ch >> mb[2] >> ch >> mb[3];

	// ��������� ������:



	// �������� �� ����, ������� ����� ���� � �����
	// ��� ����� ����� �������
	cout << (ipb[0] & mb[0]) << "." 
		 << (ipb[1] & mb[1]) << "."
		 << (ipb[2] & mb[2]) << "."
		 << (ipb[3] & mb[3]) << "\n";

	// �������� �� ����, ������� ����� ���� � �����
	// ��� ����� ����������������� ����� �������

	char negmask[4];
	for (int i = 0; i < 4; i++){
		negmask[i] = mb[i];
		negmask[i] = ~negmask[i];
	}

	cout << (unsigned) (ipb[0] | mb[0]) << "." 
		 << (unsigned) (ipb[1] | mb[1]) << "."
		 << (unsigned) (ipb[2] | mb[2]) << "."
		 << (unsigned) (ipb[3] | mb[3]) << "\n";


	cout << "\n";

	return 0;
}
