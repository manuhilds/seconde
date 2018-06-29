#include <iostream>
#include <string>
using namespace std;

int main() {
	string maChaine("Bonjour !");
	maChaine.erase();
	cout << maChaine << endl;

	maChaine = "Bien le bonjour !";
		cout << maChaine << endl;
		cout << maChaine.size() << endl;
		cout << maChaine.substr(3,5) << endl;

	return 0;
}
