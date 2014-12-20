#include<stdio.h>
#include<stdlib.h>

void math();
void logic();
void computers();

void matematika();
void logika();
void kompjuteri();


void main()
{
	int c;//Jezik
	{system("COLOR FC");
	printf("\n\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3**********************\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n			*\3Welcome/Dobrodosli\3*\n			**********************\n\n\n"); }

	printf("		Choose Your language / Izaberite jezik\n\n		   1)English		2)Bosanski\n			    (Enter 1 or 2)\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
	scanf_s("%d", &c);

	if (c == 1)//English
	{
		int h;
		system("COLOR 8F");
		printf("You chose English\n\n");
		printf("Choose type\n 1)Mathematical Quiz\n 2)Logical Quiz\n 3)Computer Basics Quiz\n");
		scanf_s("%d", &h);
		if (h == 1)
		{
			printf("\nYou chose Mathematical Quiz!\n\n");
			printf("Do You want to start?\n\n");
			system("pause");
			system("cls");
			math();
		}
		if (h == 2)
		{
			printf("You chose Logical Quiz!\n\n");
			printf("Do You want to start?\n\n");
			system("pause");
			system("cls");
			logic();


		}

		if (h == 3)
		{
			printf("You choosed Coputer Basics Quiz!\n\n");
			printf("Do You want to start?\n\n");
			system("pause");
			system("cls");
			computers();
		}

	}


	else//Bosanski
	{
		int b;
		printf("Izabrali ste bosanski\n\n");
		printf("Izabrerite vrstu:\n 1)Matematicki Kviz\n 2)Logicki Kviz\n 3)Kviz o kompjuterima (osnove)\n");
		scanf_s("%d", &b);
		system("COLOR 8F");

		if (b == 1)
		{
			printf("Izabrali ste matematicki kviz!\n\n");
			printf("Da li zelite poceti?\n\n");
			system("pause");
			system("cls");
			matematika();


		}
		if (b == 2)
		{
			printf("Izabrali ste logicki kviz!\n\n");
			printf("Da li zelite poceti?\n\n");
			system("pause");
			system("cls");
			logika();

		}
		if (b == 3)
		{
			printf("Izabrali kviz o kompjuterima (osnove)!\n\n");
			printf("Da li zelite poceti?\n\n");
			system("pause");
			system("cls");
			kompjuteri();

		}

	}
}





//---------------------------------------------------------------------------
//matematika
void math(){

	int summat, sum1, sum2, sum3, sum4;
	//first
	int m;
	printf("1. Change leters with corresponding mathematical signs ( * , / , - , +)\n\n     18 A 12 B 4 C 5 =59\n\n 1) A=+ B=* C=/\n 2)A=* B=/ C=+\n 3) A=* B=* C=/\n");

	scanf_s("%d", &m);
	if (m == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (m == 2)
			sum1 = sum1 + i;
	}

	

	//second
	int n;
	system("cls");
	printf("2. Three positive numbers that will result the same when multiplied together or added together are(HINT result is perfect number) : \n1) 2,1,2\n2) 3,0,4\n3) 1,2,3\n");
	scanf_s("%d", &n);
	if (n == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (n == 3)
			sum2 = sum2 + i;
	}

		//third
		int p;
		system("cls");
		printf("3. Calculate X:\n		6-1*0+2/2 = X\n1) X=7\n2) X=3\n3) X=0\n");
		scanf_s("%d", &p);
		if (p == 1)
		{
			printf("Correct!\n");
			system("pause");
		}
		else
		{
			printf("Not correct. Correct answer is 1.\n");
			system("pause");
		}

		sum3 = 0;
		for (int i = 1; i <= 1; i++)
		{
			if (p == 1)
				sum3 = sum3 + i;
		}
		//fourth
		int r;
		system("cls");
		printf("4. Which number is X in :   0,1,1,2,3,5,8,13,X   sequence\n1)18\n2)111\n3)21");
		scanf_s("%d", &r);
		if (r == 3)
		{
			printf("Correct!\n");
			system("pause");
		}
		else
		{
			printf("Not correct. Correct answer is 1.\n");
			system("pause");
		}
		sum4 = 0;
		for (int i = 1; i <= 1; i++)
		{
			if (r == 3)
				sum4 = sum4 + i;
		}

		summat = sum1 + sum2 + sum3 + sum4;
		printf("\nTotal number of correct answers is: %d/4\n", summat);
	}



//-----------------------------------------------------------------
//logika
void logic(){
	int summat, sum1, sum2, sum3, sum4;

	//first
	int a;
	printf("1. Fill the blank space (corresponding to two letters):    AZ, GT, MN,___, YB\n1) PH\n2) SH\n3) MZ");
	scanf_s("%d", &a);
	if (a == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (a == 2)
			sum1 = sum1 + i;
	}
	//second
	system("cls");
	int b;
	printf("2. Poles:Magnet    ????? : Battery\n1) energy\n2) cells\n3) terminals");
	scanf_s("%d", &b);
	if (b == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (b == 3)
			sum2 = sum2 + i;
	}

	//third
	system("cls");
	int c;
	printf("3. Cube is related to Square in the same way as Square is related to\n1) line\n2) plane\n3) triangle\n");
	scanf_s("%d", &c);
	if (c == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	sum3 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (c == 1)
			sum3 = sum3 + i;
	}

	//fourth
	system("cls");
	int d;
	printf("4. Poor people have it. Rich people need it. If you eat it you die. What is it?\n1) nothing\n2) toxic potion\n3) life potion\n");
	scanf_s("%d", &d);
	if (d == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	sum4 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (d == 1)
			sum4 = sum4 + i;
	}
	summat = sum1 + sum2 + sum3 + sum4;
	printf("\nTotal number of correct answers is: %d/4\n", summat);

}
//-----------------------------------------------------------------
//computers
void computers(){

	int summat, sum1, sum2, sum3, sum4;
	//first
	system("cls");
	int a;
	printf("1. The brain of any computer system is\n1) ALU\n2) Control unit\n3) CPU");
	scanf_s("%d", &a);
	if (a == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (a == 3)
			sum1 = sum1 + i;

	}

	//second
	system("cls");
	int b;
	printf("2. The time required for the fetching and execution of one simple machine instruction is\n1) Machine Cycle\n2) Real Time\n3) CPU Cycle");
	scanf_s("%d", &b);
	if (b == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (b == 3)
			sum2 = sum2 + i;

	}

	//third
	system("cls");
	int c;
	printf("3. The section of the CPU that selects, interprets and sees to the execution of program instructions\n1) Control Unit\n2) Register unit\n3) Memory");
	scanf_s("%d", &c);
	if (c == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	sum3 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (c == 1)
			sum3 = sum3 + i;

	}

	//fourth

	system("cls");
	int d;
	printf("4. What computers are used to perform complex operations at very high speed ?\n1) Personal\n2) Super\n3) Mini");
	scanf_s("%d", &d);
	if (d == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	sum4 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (d == 2)
			sum4 = sum4 + i;

	}
	summat = sum1 + sum2 + sum3 + sum4;
	printf("\nTotal number of correct answers is: %d/4\n", summat);

}

//--------------------------------------------------------------------
//matematika
void matematika(){

	int summat, sum1, sum2, sum3, sum4;

	//first
	int m;
	printf("1. Zamijeni slova sa odredjenim matematickim operacijama ( * , / , - , +)\n\n     18 A 12 B 4 C 5 =59\n\n 1) A=+ B=* C=/\n 2)A=* B=/ C=+\n 3) A=* B=* C=/\n");

	scanf_s("%d", &m);
	if (m == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (m == 2)
			sum1 = sum1 + i;

	}

	//second
	int n;
	system("cls");
	printf("2. Tri pozitivna broja koja ce imati isti rezultat kada se pomnoze ili saberu su (HINT rezultat je perfektan broj) : \n1) 2,1,2\n2) 3,0,4\n3) 1,2,3\n");
	scanf_s("%d", &n);
	if (n == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (n == 3)
			sum2 = sum2 + i;

	}

	//third
	int p;
	system("cls");
	printf("3. Izracunaj X:\n		6-1*0+2/2 = X\n1)X=7\n2)X=3\n3)X=0\n");
	scanf_s("%d", &p);
	if (p == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odogovr je 1.\n");
		system("pause");
	}
	sum3 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (p == 1)
			sum3 = sum3 + i;

	}

	//fourth
	int r;
	system("cls");
	printf("4. Koji broj je X u :   0,1,1,2,3,5,8,13,X   sekvenci\n1)18\n2)111\n3)21");
	scanf_s("%d", &r);
	if (r == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}

	sum4 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (r == 3)
			sum4 = sum4 + i;

	}

	summat = sum1 + sum2 + sum3 + sum4;
	printf("\nTotal number of correct answers is: %d/4\n", summat);
}



//-----------------------------------------------------------------
//logika
void logika(){

	int summat, sum1, sum2, sum3, sum4;
	//first
	int a;
	printf("1. Dopuni (__ odgovara mjestu dva slova):    AZ, GT, MN,___, YB\n1) PH\n2) SH\n3) MZ");
	scanf_s("%d", &a);
	if (a == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (a == 2)
			sum1 = sum1 + i;
	}
	//second
	system("cls");
	int b;
	printf("2. Polovi:Magnet    ????? : Baterija\n1) energija\n2) celije\n3) terminali");
	scanf_s("%d", &b);
	if (b == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odogovor je 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (b == 3)
			sum2 = sum2 + i;
	}

	//third
	system("cls");
	int c;
	printf("3. Kocka je kvadratu isto sto i kvadrat: \n1) liniji\n2) polju\n3) trokut\n");
	scanf_s("%d", &c);
	if (c == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 1.\n");
		system("pause");
	}
	sum3 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (c == 1)
			sum3 = sum3 + i;
	}

	//fourth
	system("cls");
	int d;
	printf("4. Siromasni ljudi to imaju. Bogati ljudi to ne trebaju. Ako to pojedete umrijet cete. Sta je to?\n1) nista\n2) otrovni napitak\n3) napitak zivota\n");
	scanf_s("%d", &d);
	if (d == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogrsno. Tacan odgovor je 1.\n");
		system("pause");
	}
	sum4 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (d == 1)
			sum4 = sum4 + i;
	}
	summat = sum1 + sum2 + sum3 + sum4;
	printf("\nTotal number of correct answers is: %d/4\n", summat);

}


//-----------------------------------------------------------------
//computers
void kompjuteri(){

	int summat, sum1, sum2, sum3;
	//first
	system("cls");
	int a;
	printf("1. Mozak kompjutera je\n1) ALU\n2) Control unit\n3) CPU");
	scanf_s("%d", &a);
	if (a == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}
	sum1 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (a == 3)
			sum1 = sum1 + i;

	}

	//second
	system("cls");
	int b;
	printf("2. Vrijeme potrebno za donosenje i izvrsenje jedne jednostavne masinske instrukcije je\n1) Masinski Ciklus\n2) Stvarno Vrijeme\n3) CPU Ciklus");
	scanf_s("%d", &b);
	if (b == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Netacno. Tacan odgovor je 3.\n");
		system("pause");
	}
	sum2 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (b == 3)
			sum2 = sum2 + i;

	}


	//fourth

	system("cls");
	int d;
	printf("3. Koji kompjuteri se koriste za izvrsavanje kompleksnih operacija velikom brzinom ?\n1) Personalni\n2) Super\n3) Mini");
	scanf_s("%d", &d);
	if (d == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	sum3 = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (d == 2)
			sum3 = sum3 + i;

	}
	summat = sum1 + sum2 + sum3;
	printf("\nUkupan broj tacnih odgovora je: %d/3\n", summat);
}


