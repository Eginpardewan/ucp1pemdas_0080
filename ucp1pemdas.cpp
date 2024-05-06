
// NO 5
struct DetailAlamat
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char nim[12];
	char nama[20];
	DetailAlamat alamat;
	int umur;
};

// no 1
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main()
{
	cout << "Awal Program" << endl; //penanda 1:....
	try {
		array<int, 3> data = { 1, 2, 3 };
		char nama[20];
		int nim[12];
		string alamat;
	}
};

// no 3
int main() {
	string baris;
	ofstream outfile;
	outfile.open("contohfile.txt");
	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

//no 2
	int main() {
		int x;
		srand(time(0));

		x = rand() % 10;

		cout << "Nilai X Awal = " << x << endl;

		while (x > 4)
		{
			cout << "Perulangan Dengan While" << endl;
			x = rand() % 10;
		}

		cout << "Nilai X akhir = " << x << endl;

	}

// no 4

	do
	{
		cout << "Perulangan Dengan Do...While" << endl;
		x = rand() % 10;
		cout << "Nilai X = " << x << endl;
	} while (x == 4);

	string nama;
	char pilihan;


