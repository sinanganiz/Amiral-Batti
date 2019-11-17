#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
void EkranaBas1(char duzlemYEDEK[12][12])
{
	
	printf("\n                    ****Amiral Batti****");
	printf("\n\n\n       1   2   3   4   5   6   7   8   9   10  11  12" );
	printf("\n    ---------------------------------------------------");
	for(int i=0;i<12;i++)// Ekrana tüm tabloyu yazdýrma kýsmý
	{	
		if(i<9)
		printf("\n  %d |",i+1);
		else
		printf("\n %d |",i+1);
		for(int j=0;j<12;j++)
		{
			printf("  %c ",duzlemYEDEK[i][j]);
		}
		printf(" |");
	}
	printf("\n    ---------------------------------------------------");
	printf("\n  Bazi Kisayollar                     Genel Bilgiler");
	printf("\n  -----------------                   -----------------------");
	printf("\n  *  0: Ana Menu  *                   *    o: Karavana      *");
	printf("\n                                      *    X: Hasarli Gemi  *");
	printf("\n  -----------------                   -----------------------");
}
void EkranaBas2(char duzlemYEDEK[12][12],char duzlem[12][12])
{
	printf("\n                    ****Amiral Batti****");
		printf("\n                                                                                     **KOPYA**" );
	printf("\n\n       1   2   3   4   5   6   7   8   9   10  11  12                 1   2   3   4   5   6   7   8   9   10  11  12" );
	printf("\n    ---------------------------------------------------            ---------------------------------------------------");
	for(int i=0;i<12;i++)// Ekrana tüm tabloyu yazdýrma kýsmý
	{	
		if(i<9)
		printf("\n  %d |",i+1);
		else
		printf("\n %d |",i+1);
		for(int j=0;j<12;j++)
		{
			printf("  %c ",duzlemYEDEK[i][j]);
		}
		printf(" |");
	  	//////////////////////
	  	printf("    ||");
		if(i<9)
		printf("    %d |",i+1);
		else
		printf("   %d |",i+1);
		for(int j=0;j<12;j++)
		{
			printf("  %c ",duzlem[i][j]);
		}
		printf(" |");
	}
	printf("\n    ---------------------------------------------------            ---------------------------------------------------");
	printf("\n  Bazi Kisayollar                     Genel Bilgiler");
	printf("\n  -----------------                   -----------------------");
	printf("\n  *  0: Ana Menu  *                   *    o: Karavana      *");
	printf("\n                                      *    X: Hasarli Gemi  *");
	printf("\n  -----------------                   -----------------------");
}

int main()
{
	
	system("CLS");
	int DURUM_Gemi1,DURUM_Gemi2,DURUM_Gemi3;//Gemilerin yatay,dikey durumu
	srand(time(NULL));
	DURUM_Gemi1=rand()%2;
	DURUM_Gemi2=rand()%2;
	DURUM_Gemi3=rand()%2;	
	int a1=1,a2=6;//Gemi1 satir sutun sayisi
	if(DURUM_Gemi1==1)
	{
		a1=6;
		a2=1;
	}	
	int b1=2,b2=5;//Gemi2 satir sutun sayisi
	if(DURUM_Gemi2==1) 
	{
		b1=5;
		b2=2;
	} 
	int c1=3,c2=4;//Gemi3 satir sutun sayisi
	if(DURUM_Gemi3==1)  
	{
		c1=4;
		c2=3;
	}
	int d1=3,d2=3;//Gemi4 Satir sutun sayisi
	////////////////////////////////
	char duzlem[12][12];
	for(int i=0;i<12;i++)//Duzlemin tum elemanlarini o yapma
	{
		for(int j=0;j<12;j++)
		{
			duzlem[i][j]='.';
		}
	}
	char duzlemYEDEK[12][12];
	for(int i=0;i<12;i++)//Yedek duzlem(Kullanýcýnýn asýl gorecegi ekran)
	{
		for(int j=0;j<12;j++)
		{
			duzlemYEDEK[i][j]='.';
		}
	}
	/////////////////////////////////	
	//Gemi1
	int Asatir=0;
	int Asutun=0;
	Asatir=rand()%12;
	Asutun=rand()%12;
	int Akontrol1=0,Akontrol2=0;
	do
	{
		Asatir=rand()%12;
		Asutun=rand()%12;
		Akontrol1=0;
		Akontrol2=0;
		for(int i=Asutun;i<Asutun+a2;i++)
		{
			if(duzlem[Asatir][i]!='.')
			{	
				Akontrol1=1;
			}
		}
		for(int j=Asatir;j<Asatir+a1;j++)
		{
			if(duzlem[j][Asutun]!='.')
			{
				Akontrol2=1;
			}
		}		
	}
	while(Asutun+a2>11 || Asatir+a1>11 || Akontrol1==1 || Akontrol2==1);
	
	for(int i=Asutun;i<Asutun+a2;i++)
	{
		duzlem[Asatir][i]='1';
	}	
	for(int j=Asatir;j<Asatir+a1;j++)
	{
		duzlem[j][Asutun]='1';
	}
	///////////////////////
	//Gemi2
	int Bsatir;
	Bsatir=rand()%12;
	int Bsutun;
	Bsutun=rand()%12;
	int Bkontrol1=0,Bkontrol2=0,Bkontrol3=0,Bkontrol4=0;
	do
	{
		Bsatir=rand()%12;
		Bsutun=rand()%12;
		Bkontrol1=0;
		Bkontrol2=0;
		Bkontrol3=0;
		Bkontrol4=0;
		for(int i=Bsutun;i<Bsutun+b2;i++)
		{
			if(duzlem[Bsatir][i]!='.')
			{
				Bkontrol1=1;
			}
		}
		for(int i=Bsutun;i<Bsutun+b2;i++)
		{
			if(duzlem[Bsatir+1][i]!='.')
			{
				Bkontrol2=1;
			}
		}
		for(int j=Bsatir;j<Bsatir+b1;j++)
		{
			if(duzlem[j][Bsutun]!='.')
			{
				Bkontrol3=1;
			}
		}
		for(int j=Bsatir;j<Bsatir+b1;j++)
		{
			if(duzlem[j][Bsutun+1]!='.')
			{
				Bkontrol4=1;
			}
		}
	}
	while(Bsutun+b2>11 || Bsatir+b1>11 || Bkontrol1==1 || Bkontrol2==1|| Bkontrol3==1|| Bkontrol4==1);
	
	for(int i=Bsutun;i<Bsutun+b2;i++)
	{
		duzlem[Bsatir][i]='2';
	}
	for(int i=Bsutun;i<Bsutun+b2;i++)
	{
		duzlem[Bsatir+1][i]='2';
	}
	for(int j=Bsatir;j<Bsatir+b1;j++)
	{
		duzlem[j][Bsutun]='2';
	}
	for(int j=Bsatir;j<Bsatir+b1;j++)
	{
		duzlem[j][Bsutun+1]='2';
	}
	//////////////////
	//Gemi3
	
	int Csatir;
	Csatir=rand()%12;
	int Csutun;
	Csutun=rand()%12;
	int Ckontrol1=0,Ckontrol2=0,Ckontrol3=0,Ckontrol4=0,Ckontrol5=0,Ckontrol6=0;
	do
	{
		Csatir=rand()%12;
		Csutun=rand()%12;
		Ckontrol1=0;
		Ckontrol2=0;
		Ckontrol3=0;
		Ckontrol4=0;
		Ckontrol5=0;
		Ckontrol6=0;
		for(int i=Csutun;i<Csutun+c2;i++)
		{
			if(duzlem[Csatir][i]!='.')
			{
				Ckontrol1=1;
			}
		}
		for(int i=Csutun;i<Csutun+c2;i++)
		{
			if(duzlem[Csatir+1][i]!='.')
			{
				Ckontrol2=1;
			}
		}
		for(int i=Csutun;i<Csutun+c2;i++)
		{
			if(duzlem[Csatir+2][i]!='.')
			{
				Ckontrol3=1;
			}
		}
		for(int j=Csatir;j<Csatir+c1;j++)
		{
			if(duzlem[j][Csutun]!='.')
			{
				Ckontrol4=1;
			}
		}
		for(int j=Csatir;j<Csatir+c1;j++)
		{
			if(duzlem[j][Csutun+1]!='.')
			{
				Ckontrol5=1;
			}
		}
		for(int j=Csatir;j<Csatir+c1;j++)
		{
			if(duzlem[j][Csutun+2]!='.')
			{
				Ckontrol6=1;
			}
		}
	}
	while(Csutun+c2>11 || Csatir+c1>11 || Ckontrol1==1 || Ckontrol2==1|| Ckontrol3==1|| Ckontrol4==1|| Ckontrol5==1|| Ckontrol6==1);
	
	for(int i=Csutun;i<Csutun+c2;i++)
	{
		duzlem[Csatir][i]='3';
	}
	for(int i=Csutun;i<Csutun+c2;i++)
	{
		duzlem[Csatir+1][i]='3';
	}
	for(int i=Csutun;i<Csutun+c2;i++)
	{
		duzlem[Csatir+2][i]='3';
	}
	for(int j=Csatir;j<Csatir+c1;j++)
	{
		duzlem[j][Csutun]='3';
	}
	for(int j=Csatir;j<Csatir+c1;j++)
	{
		duzlem[j][Csutun+1]='3';
	}
	for(int j=Csatir;j<Csatir+c1;j++)
	{
		duzlem[j][Csutun+2]='3';
	}
	////////////////////////
	//Gemi4
	int Dsatir;
	Dsatir=rand()%12;
	int Dsutun;
	Dsutun=rand()%12;
	int Dkontrol1=0,Dkontrol2=0,Dkontrol3=0;
	do
	{
		Dsatir=rand()%12;
		Dsutun=rand()%12;
		Dkontrol1=0;
		Dkontrol2=0;
		Dkontrol3=0;
		for(int i=Dsutun;i<Dsutun+d2;i++)
		{
			if(duzlem[Dsatir][i]!='.')
			{
				Dkontrol1=1;
			}
		}
		for(int i=Dsutun;i<Dsutun+d2;i++)
		{
			if(duzlem[Dsatir+1][i]!='.')
			{
				Dkontrol2=1;
			}
		}
		for(int i=Dsutun;i<Dsutun+d2;i++)
		{
			if(duzlem[Dsatir+2][i]!='.')
			{
				Dkontrol3=1;
			}
		}
	}
	while(Dsutun+c2>11 || Dsatir+c1>11 || Dkontrol1==1 || Dkontrol2==1|| Dkontrol3==1);
	
	for(int i=Dsutun;i<Dsutun+d2;i++)
	{
		duzlem[Dsatir][i]='4';
	}
	for(int i=Dsutun;i<Dsutun+d2;i++)
	{
		duzlem[Dsatir+1][i]='4';
	}
	for(int i=Dsutun;i<Dsutun+d2;i++)
	{
		duzlem[Dsatir+2][i]='4';
	}
	char secim;
	int kalanparcalar=37;
	int kalan1=6;
	int kalan2=10;
	int kalan3=12;
	int kalan4=9;
	printf("\n\n\n\t\t\t\t\tAmiral Batti(V1.0)");
	printf("\n\n\n\t\t\t--> Hileli Oyunu baslatmak icin \"H\" tusuna basiniz!");
	printf("\n\t\t\t--> Hilesiz Oyunu baslatmak icin \"B\" tusuna basiniz!");
	printf("\n\t\t\t--> Oyunu kapatmak  icin \"C\" tusuna basiniz!");
	printf("\n\n\t\t\tLutfen bir secim yapiniz : ");
	scanf("%c",&secim);
	if(secim=='B' || secim=='b' || secim=='H' || secim=='h')
	{
	
	char s;
	while(true)
	{
	system("CLS"); 
	if(secim=='B' || secim=='b' )
	{
		EkranaBas1(duzlemYEDEK);
	}
	else if(secim=='H' || secim=='h')
	{
			EkranaBas2(duzlemYEDEK,duzlem);
	}
	int Tsatir,Tsutun;
	printf("\nSatir giriniz=");
	scanf("%d",&Tsatir);
	if(Tsatir==0)
	 {
	 main();
	  } 
		if(Tsatir>0 && Tsatir<=12)
		{
			printf("Sutun giriniz=");
			scanf("%d",&Tsutun);	
			if(Tsutun==0)
			{
				
					 main();
			}
			if(Tsutun>0 && Tsutun<=12)
			{
				
				if(duzlemYEDEK[Tsatir-1][Tsutun-1]=='o' || duzlemYEDEK[Tsatir-1][Tsutun-1]=='X')
				{
						printf("Ayni yere tekrar vuramazsin!!!\nDevam etmek icin herhangi bir tusa basiniz...\n");
						getch();
				}
				
				else if(duzlem[Tsatir-1][Tsutun-1]=='.')
				{
					printf("KARAVANA! hahaha...\nDevam etmek icin herhangi bir tusa basiniz...\n");
					duzlemYEDEK[Tsatir-1][Tsutun-1]='o';
					getch();
				}
				else if(duzlem[Tsatir-1][Tsutun-1]=='1' )
				{
					kalanparcalar--;
					kalan1--;
					printf("Tebrikler, 1.Geminin bir parcasini vurdunuz!\nKalan parcalar: %d\nDevam etmek icin herhangi bir tusa basiniz...\n",kalanparcalar);
					duzlemYEDEK[Tsatir-1][Tsutun-1]='X';
					if(kalan1==0)
					{
						printf("***Tebrikler, 1. Gemi Yok Edildi***");
					}
					getch();
				}
				else if(duzlem[Tsatir-1][Tsutun-1]=='2' )
				{
					kalan2--;
					kalanparcalar--;
					printf("Tebrikler, 2.Geminin bir parcasini vurdunuz!\nKalan parcalar: %d \nDevam etmek icin herhangi bir tusa basiniz...\n",kalanparcalar);
					duzlemYEDEK[Tsatir-1][Tsutun-1]='X';
					if(kalan2==0)
					{
						printf("***Tebrikler, 2. Gemi Yok Edildi***");
					}
					getch();
				}
				else if(duzlem[Tsatir-1][Tsutun-1]=='3' )
				{
					kalan3--;
					kalanparcalar--;
					printf("Tebrikler, 3.Geminin bir parcasini vurdunuz!\nKalan parcalar: %d \nDevam etmek icin herhangi bir tusa basiniz...\n",kalanparcalar);
					duzlemYEDEK[Tsatir-1][Tsutun-1]='X';
					if(kalan3==0)
					{
						printf("***Tebrikler, 3. Gemi Yok Edildi***");
					}
					getch();
				}
				else if(duzlem[Tsatir-1][Tsutun-1]=='4')
				{
					kalan4--;
					kalanparcalar--;
					printf("Tebrikler, 4.Geminin bir parcasini vurdunuz!\nKalan parcalar: %d\nDevam etmek icin herhangi bir tusa basiniz...\n",kalanparcalar);
					duzlemYEDEK[Tsatir-1][Tsutun-1]='X';
					if(kalan4==0)
					{
						printf("***Tebrikler, 4. Gemi Yok Edildi***");
					}
					getch();
				}
				if(kalanparcalar==0)
				{
					system("CLS");
					printf("____________ @@@@\n");
					printf("___________@@@@@@\n");
					printf("___________@@@@@@\n");
					printf("____________@@@@@\n");
					printf("______________@@\n");
					printf("_______@@@@@@@@______@@\n");
					printf("_______@@_____@@@@___@@\n");
					printf("_______@@_____@@ @@@@@   Tebrikler oyun bitti!, Cikmak icin herhangi bir tusa basiniz...\n");
					printf("________@@____@@\n");
					printf("________@@____@@\n");
					printf("_____________@@@@@@@@\n");
					printf("___________@@_______@@\n");
					printf("_________@@@_______@@\n");
					printf("_______@@@________@@\n");
					printf("_____@@@_________@@ \n");
			//		printf("\n\n       ****Tebrikler oyun bitti!, Cikmak icin herhangi bir tusa basiniz...****");
					getch();
					exit(true);
				}
	
			}
			else
			{
				printf("1-12 Arasinde Giriniz!.\nDevam etmek icin herhangi bir tusa basiniz...");
				getch();
			}
		}
		else
		{
			printf("1-12 Arasinde Giriniz!.\nDevam etmek icin herhangi bir tusa basiniz...");
			getch();
		}
	}	
	}
	else if(secim=='C'|| secim=='c')
	{
		printf("\n\n\t\t\tOyun sonlandirildi!!!");
		exit(1);
	}
	else {printf("\n\n\t\t\tBaska birsey giremezsiniz!");
		main();
	}
	return 0;
}
