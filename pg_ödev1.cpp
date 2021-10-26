/*************************************************************************************************************************************************************************************
**                                                               İLAYDA YILMAZ
**
****************************************************************************************************************************************************************************************/
#include<iostream>
using namespace std;
struct zaman
{
	int saat;
	int dakika;
	int saniye;
	long toplam_saniye;
};
int main()
{
	zaman zaman;       //zaman yapı tipinde zaman adında değişken türettik
	char iki_nokta;
	zaman.toplam_saniye;
	cout << "Saat:Dakika:Saniye seklinde zaman giriniz:";
	cin >> zaman.saat >> iki_nokta >> zaman.dakika >> iki_nokta >> zaman.saniye;

	if (zaman.saat < 0 || zaman.saat >= 24)     // 0 ile 24 aralığı haricinde bir değer girilirse çalışır.
	{
		cout << " Girien saat degeri " << zaman.saat << " yanlis girilmistir. " << endl;
	}

	if (zaman.dakika < 0 || zaman.dakika >= 60)       //0 ile 60 aralığı haricide bir değer girildiyse çalışır.
	{
		cout << " Girilen dakika degeri " << zaman.dakika << " yanlis girilmistir. " << endl;
	}

	if (zaman.saniye < 0 || zaman.saniye >= 60)       //0 ile 60 aralığı haricinde bir değer girildiyse çalışır.
	{
		cout << " Girilen saniye degeri " << zaman.saniye << " yanlis girilmistir. " << endl;
	}

	if (zaman.saat > 0 && zaman.saat < 24 && zaman.dakika>0 && zaman.dakika < 60 && zaman.saniye>0 && zaman.saniye < 60)    // saat dakika ve saniye belirtilen değer aralıklarında girilmişse çalışır.
	{
		cout << "Saniye olarak hesaplanan deger:";
		zaman.toplam_saniye = (zaman.saat * 3600) + (zaman.dakika * 60) + (zaman.saniye * 1);     //toplam saniyeyi veren formül.
		cout << zaman.toplam_saniye << endl;
	}

	system("pause");
	return 0;

}
