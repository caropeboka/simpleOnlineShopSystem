#include <iostream>
using namespace std;
class Info
{
public:
	void JenisPaket(char w)
	{
		Jenispaket = w;
	}
	void HargaPaket(int h)
	{
		Hargapaket = h;
	}
	void Jaraktempuh(int j)
	{
		tempuh = j;
	}
	void BeratBarang(int b)
	{
		barang = b;
	}
protected:
	char Jenispaket;
	int Hargapaket;
	int tempuh;
	int barang;
};
class Hitung : public Info
{
public:
	int Biaya()
	{
		if (Jenispaket == 'm') {
			return (0.1 * Hargapaket) + (tempuh * 1500);
		}
		else if (Jenispaket == 'b')
			return (0.05 * Hargapaket) + (tempuh * 1000) + (barang * 500);
	}
};
int main(void)
{
	Hitung Pesan;
	int n;
	char c;
	cout << "Masukkan Jenis Pesanan Barang atau Makanan (b/m): ";
	cin >> c;
	Pesan.JenisPaket(c);
	cout << "Harga Paket Anda: ";
	cin >> n;
	Pesan.HargaPaket(n);
	cout << "Jarak Tempuh Anda : ";
	cin >> n;
	Pesan.Jaraktempuh(n);
	cout << "Berat Barang Anda: ";
	cin >> n;
	Pesan.BeratBarang(n);
	cout << "Total Biaya: " << Pesan.Biaya() << endl;
	cout << "Terimakasih telah berbelanja kawan" << endl;
	return 0;
}
