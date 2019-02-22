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

	// �������� ����� �� �����
	
	std::stringstream ssip(ip);
	ssip >> ipb[0] >> ch >> ipb[1] >> ch >> ipb[2] >> ch >> ipb[3];

	std::stringstream ssmask(mask);
	ssmask >> mb[0] >> ch >> mb[1] >> ch >> mb[2] >> ch >> mb[3];

	// ��������� ������:

    int subipb[4], wideipb[4];
    
	// �������� �� ����, ������� ����� ���� � �����
	// ��� ����� ����� �������
    subipb[0] = ipb[0] & mb[0];
    cout << subipb[0];
    for (int i = 1; i < 4; i++) {
        subipb[i] = ipb[i] & mb[i];
        cout << "." << subipb[i];
    }
	cout << "\n";

	// �������� �� ����, ������� ����� ���� � �����
	// ��� ����� ����������������� ����� �������
    wideipb[0] = ipb[0] | (mb[0] ^ 255);
    cout << wideipb[0];
    for (int i = 1; i < 4; i++) {
        wideipb[i] = ipb[i] | (mb[i] ^ 255);
        cout << "." << wideipb[i];
    }
	cout << "\n";

	return 0;
}
