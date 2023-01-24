#include <iostream>

struct Address {
	std::string city;
	std::string street;
	std::string houseNumber;
	int apartmentNumber;
	int index;

	Address(std::string _city, std::string _street, std::string _houseNumber, int _apartmentNumber, int _index) {
		city = _city;
		street = _street;
		houseNumber = _houseNumber;
		apartmentNumber = _apartmentNumber;
		index = _index;
	}

	void printAll() {
		std::cout << "�����: " << city << std::endl;
		std::cout << "�����: " << street << std::endl;
		std::cout << "����� ����: " << houseNumber << std::endl;
		std::cout << "����� ��������: " << apartmentNumber << std::endl;
		std::cout << "������: " << index << std::endl;
		std::cout << std::endl;
	}
};

int main() {
	setlocale(LC_ALL, "ru");

	Address adrrOne("����", "����������", "12/2", 44, 644055);
	Address adrrTwo("����������", "�������� ����", "136", 69, 689075);

	adrrOne.printAll();
	adrrTwo.printAll();

	system("pause > nul");
	return 0;
}