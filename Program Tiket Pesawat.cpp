#include <stdio.h>
#include <conio.h>
main()
{
	int kodejurusan,kodekelas,banyaktiket;
	long int hargatiket,total;
	float diskon,bayar;
		printf("Pilih Jurusan :\n");
		printf("---------------\n");
		printf("1. Bandung\n2. Semarang\n3. Jakarta\n");
		printf("---------------\n");
		printf("Jurusan yang dipilih : ");scanf("%i",&kodejurusan);
		printf("Pilih Kelas :\n");
		printf("---------------\n");
		printf("1. Eksekutif\n2. Bisnis\n3. Ekonomi\n");
		printf("---------------\n");
		printf("Kelas yang dipilih : ");scanf("%i",&kodekelas);
		printf("Banyak Tiket : ");scanf("%i",&banyaktiket);
	if((kodejurusan==1)&&(kodekelas==1))
			hargatiket=75000;
		else
	if((kodejurusan==1)&&(kodekelas==2))
			hargatiket=40000;
		else
	if((kodejurusan==1)&&(kodekelas==3))
			hargatiket=35000;
		else
	if(kodejurusan==2)
	{
		if(kodekelas==1) hargatiket=90000; else
		if(kodekelas==2) hargatiket=55000; else
		if(kodekelas==3) hargatiket=28000;
	}
	else
		if(kodejurusan==3)
	{
			switch (kodekelas)
		{
			case 1:hargatiket=98000;break;
			case 2:hargatiket=77000;break;
			case 3:hargatiket=25000;
		}
	}
		printf("Harga Tiket : Rp. %li\n",hargatiket);
		total=banyaktiket*hargatiket;
		printf("Total Tiket : Rp. %li\n",total);
	if( ((kodejurusan==3)&&(kodekelas==1)) ||
	((kodejurusan==2)&&(kodekelas==2))
	)	
		diskon=0.1*total;
	else
		diskon=0;
		printf("Diskon 10%% : Rp. %f\n",diskon);
		bayar=total-diskon;
		printf("Bayar : Rp. %f\n",bayar);
getch();
return 0;
}
