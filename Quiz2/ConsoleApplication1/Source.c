#include<stdio.h>
#include<stdlib.h>

void beginning();

void math();
void logic();
void computers();

void matematika();
void logika();
void kompjuteri();


void main()
{
	int repeat;
	beginning();
	system("pause");
	system("cls");
	printf("Do You Want to try another type of quiz? / Da li zelite probati neku drugu vrtu kviza?\n			1) Yes \n			2) No\n");
	scanf_s("%d", &repeat);
	if (repeat == 1)
	{
		system("cls");
		beginning();
	}
		
		

}

void beginning()
{
	int language;//Jezik
	{system("COLOR FC");
	printf("\n\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3**********************\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\n			*\3Welcome/Dobrodosli\3*\n			**********************\n\n\n"); }

	printf("		Choose Your language / Izaberite jezik\n\n		   1)English		2)Bosanski\n			    (Enter 1 or 2)\n\n\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3");
	scanf_s("%d", &language);

	if (language == 1)//English
	{
		int type;
		system("COLOR 8F");
		printf("You chose English\n\n");
		printf("Choose type\n 1)Mathematical Quiz\n 2)Logical Quiz\n 3)Computer Basics Quiz\n");
		scanf_s("%d", &type);
		if (type == 1)
		{
			printf("\nYou chose Mathematical Quiz!\n\n");
			printf("Do You want to start?\n\n");
			system("pause");
			system("cls");
			math();
		}
		if (type == 2)
		{
			printf("You chose Logical Quiz!\n\n");
			printf("Do You want to start?\n\n");
			system("pause");
			system("cls");
			logic();


		}

		if (type == 3)
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
		int kategorija;
		printf("Izabrali ste bosanski\n\n");
		printf("Izabrerite vrstu:\n 1)Matematicki Kviz\n 2)Logicki Kviz\n 3)Kviz o kompjuterima (osnove)\n");
		scanf_s("%d", &kategorija);
		system("COLOR 8F");

		if (kategorija == 1)
		{
			printf("Izabrali ste matematicki kviz!\n\n");
			printf("Da li zelite poceti?\n\n");
			system("pause");
			system("cls");
			matematika();


		}
		if (kategorija == 2)
		{
			printf("Izabrali ste logicki kviz!\n\n");
			printf("Da li zelite poceti?\n\n");
			system("pause");
			system("cls");
			logika();

		}
		if (kategorija == 3)
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
//math
void math(){

	int totalPoints, pointsFirst, pointsSecond, ponitsThird, pointsFourth;

	//first
	int firstAnswer;
	printf("1. Change leters with corresponding mathematical signs ( * , / , - , +)\n\n     18 A 12 B 4 C 5 =59\n\n 1) A=+ B=* C=/\n 2)A=* B=/ C=+\n 3) A=* B=* C=/\n");

	scanf_s("%d", &firstAnswer);
	if (firstAnswer == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	pointsFirst = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (firstAnswer == 2)
			pointsFirst = pointsFirst + i;
	}

	//second
	int secondAnswer;
	system("cls");
	printf("2. Three positive numbers that will result the same when multiplied together or added together are(HINT result is perfect number) : \n1) 2,1,2\n2) 3,0,4\n3) 1,2,3\n");
	scanf_s("%d", &secondAnswer);
	if (secondAnswer== 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	pointsSecond = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (secondAnswer == 3)
			pointsSecond = pointsSecond + i;
	}


	//third
	int thirdAnswer;
	system("cls");
	printf("3. Calculate X:\n		6-1*0+2/2 = X\n1) X=7\n2) X=3\n3) X=0\n");
	scanf_s("%d", &thirdAnswer);
	if (thirdAnswer == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}

	ponitsThird = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (thirdAnswer == 1)
			ponitsThird = ponitsThird + i;
	}


	//fourth
	int fourthAnswer;
	system("cls");
	printf("4. Which number is X in :   0,1,1,2,3,5,8,13,X   sequence\n1)18\n2)111\n3)21");
	scanf_s("%d", &fourthAnswer);
	if (fourthAnswer == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	pointsFourth = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (pointsFourth == 3)
			pointsFourth = pointsFourth + i;
	}

	totalPoints = pointsFirst + pointsSecond + ponitsThird + pointsFourth;
	printf("\nTotal number of correct answers is: %d/4\n", totalPoints);
}


//-----------------------------------------------------------------
//logika
void logic(){
	int totalPoints, pointsFirst, pointsSecond, ponitsThird, pointsFourth;

	//first
	int firstAnswer;
	printf("1. Fill the blank space (corresponding to two letters):    AZ, GT, MN,___, YB\n1) PH\n2) SH\n3) MZ");
	scanf_s("%d", &firstAnswer);
	if (firstAnswer == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	pointsFirst = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (firstAnswer == 2)
			pointsFirst = pointsFirst + i;
	}

	//second
	system("cls");
	int secondAnswer;
	printf("2. Poles:Magnet    ????? : Battery\n1) energy\n2) cells\n3) terminals");
	scanf_s("%d", &secondAnswer);
	if (secondAnswer == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	pointsSecond = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (secondAnswer == 3)
			pointsSecond = pointsSecond + i;
	}



	//third
	system("cls");
	int thirdAnswer;
	printf("3. Cube is related to Square in the same way as Square is related to\n1) line\n2) plane\n3) triangle\n");
	scanf_s("%d", &thirdAnswer);
	if (thirdAnswer == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	ponitsThird = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (thirdAnswer == 1)
			ponitsThird = ponitsThird + i;
	}


	//fourth
	system("cls");
	int fourthAnswer;
	printf("4. Poor people have it. Rich people need it. If you eat it you die. What is it?\n1) nothing\n2) toxic potion\n3) life potion\n");
	scanf_s("%d", &fourthAnswer);
	if (fourthAnswer == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	pointsFourth = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (pointsFourth == 1)
			pointsFourth = pointsFourth + i;
	}


	totalPoints = pointsFirst + pointsSecond + ponitsThird + pointsFourth;
	printf("\nTotal number of correct answers is: %d/4\n", totalPoints);

}

//-----------------------------------------------------------------
//computers
void computers(){

	int totalPoints, pointsFirst, pointsSecond, ponitsThird, pointsFourth;
	//first
	system("cls");
	int firstAnswer;
	printf("1. The brain of any computer system is\n1) ALU\n2) Control unit\n3) CPU");
	scanf_s("%d", &firstAnswer);
	if (firstAnswer == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	pointsFirst = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (firstAnswer == 3)
			pointsFirst = pointsFirst + i;
	}


	//second
	system("cls");
	int secondAnswer;
	printf("2. The time required for the fetching and execution of one simple machine instruction is\n1) Machine Cycle\n2) Real Time\n3) CPU Cycle");
	scanf_s("%d", &secondAnswer);
	if (secondAnswer == 3)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 3.\n");
		system("pause");
	}
	pointsSecond = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (secondAnswer == 3)
			pointsSecond = pointsSecond + i;
	}



	//third
	system("cls");
	int thirdAnswer;
	printf("3. The section of the CPU that selects, interprets and sees to the execution of program instructions\n1) Control Unit\n2) Register unit\n3) Memory");
	scanf_s("%d", &thirdAnswer);
	if (thirdAnswer == 1)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 1.\n");
		system("pause");
	}
	ponitsThird = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (thirdAnswer == 1)
			ponitsThird = ponitsThird + i;
	}


	//fourth

	system("cls");
	int fourthAnswer;
	printf("4. What computers are used to perform complex operations at very high speed ?\n1) Personal\n2) Super\n3) Mini");
	scanf_s("%d", &fourthAnswer);
	if (fourthAnswer == 2)
	{
		printf("Correct!\n");
		system("pause");
	}
	else
	{
		printf("Not correct. Correct answer is 2.\n");
		system("pause");
	}
	pointsFourth = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (pointsFourth == 1)
			pointsFourth = pointsFourth + i;
	}

	totalPoints = pointsFirst + pointsSecond + ponitsThird + pointsFourth;
	printf("\nTotal number of correct answers is: %d/4\n", totalPoints);

}



//--------------------------------------------------------------------
//matematika
void matematika(){

	int ukupniPoeni, poeniPrvo, poeniDrugo, poeniTrece, poeniCetvrto;

	//prvo
	int prviOdgovor;
	printf("1. Zamijeni slova sa odredjenim matematickim operacijama ( * , / , - , +)\n\n     18 A 12 B 4 C 5 =59\n\n 1) A=+ B=* C=/\n 2)A=* B=/ C=+\n 3) A=* B=* C=/\n");

	scanf_s("%d", &prviOdgovor);
	if (prviOdgovor == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	poeniPrvo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (prviOdgovor == 2)
			poeniPrvo = poeniPrvo + i;

	}

	//drugo
	int drugiOdgovor;
	system("cls");
	printf("2. Tri pozitivna broja koja ce imati isti rezultat kada se pomnoze ili saberu su (HINT rezultat je perfektan broj) : \n1) 2,1,2\n2) 3,0,4\n3) 1,2,3\n");
	scanf_s("%d", &drugiOdgovor);
	if (drugiOdgovor == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}
	poeniDrugo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (drugiOdgovor == 3)
			poeniDrugo = poeniDrugo + i;

	}

	//trece
	int treciOdgovor;
	system("cls");
	printf("3. Izracunaj X:\n		6-1*0+2/2 = X\n1)X=7\n2)X=3\n3)X=0\n");
	scanf_s("%d", &treciOdgovor);
	if (treciOdgovor == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odogovr je 1.\n");
		system("pause");
	}
	poeniTrece = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (treciOdgovor == 1)
			poeniTrece = poeniTrece + i;

	}

	//cetvrto
	int cetvriOdgovor;
	system("cls");
	printf("4. Koji broj je X u :   0,1,1,2,3,5,8,13,X   sekvenci\n1)18\n2)111\n3)21");
	scanf_s("%d", &cetvriOdgovor);
	if (cetvriOdgovor == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}

	poeniCetvrto = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (cetvriOdgovor == 3)
			poeniCetvrto = poeniCetvrto + i;

	}

	ukupniPoeni = poeniPrvo + poeniDrugo + poeniTrece + poeniCetvrto;
	printf("\nTotal number of correct answers is: %d/4\n", ukupniPoeni);
}


//-----------------------------------------------------------------
//logika
void logika(){

	int ukupniPoeni, poeniPrvo, poeniDrugo, poeniTrece, poeniCetvrto;;
	//prvo
	int prviOdgovor;
	printf("1. Dopuni (__ odgovara mjestu dva slova):    AZ, GT, MN,___, YB\n1) PH\n2) SH\n3) MZ");
	scanf_s("%d", &prviOdgovor);
	if (prviOdgovor == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	poeniPrvo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (prviOdgovor == 2)
			poeniPrvo = poeniPrvo + i;
	}
	//drugo
	system("cls");
	int drugiOdgovor;
	printf("2. Polovi:Magnet    ????? : Baterija\n1) energija\n2) celije\n3) terminali");
	scanf_s("%d", &drugiOdgovor);
	if (drugiOdgovor == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odogovor je 3.\n");
		system("pause");
	}
	poeniDrugo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if ( drugiOdgovor== 3)
			poeniDrugo = poeniDrugo + i;
	}

	//trece
	system("cls");
	int treciOdgovor;
	printf("3. Kocka je kvadratu isto sto i kvadrat: \n1) liniji\n2) polju\n3) trokut\n");
	scanf_s("%d", &treciOdgovor);
	if (treciOdgovor == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 1.\n");
		system("pause");
	}
	poeniTrece = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (treciOdgovor == 1)
			poeniTrece = poeniTrece + i;
	}

	//cetvrto
	system("cls");
	int cetvrtiOdgovor;
	printf("4. Siromasni ljudi to imaju. Bogati ljudi to ne trebaju. Ako to pojedete umrijet cete. Sta je to?\n1) nista\n2) otrovni napitak\n3) napitak zivota\n");
	scanf_s("%d", &cetvrtiOdgovor);
	if (cetvrtiOdgovor == 1)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogrsno. Tacan odgovor je 1.\n");
		system("pause");
	}
	poeniCetvrto = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (cetvrtiOdgovor == 1)
			poeniCetvrto = poeniCetvrto + i;
	}
	ukupniPoeni = poeniPrvo + poeniDrugo + poeniTrece + poeniCetvrto;
	printf("\nTotal number of correct answers is: %d/4\n", ukupniPoeni);

}

//-----------------------------------------------------------------
//kompjuteri
void kompjuteri(){

	int ukupniPoeni, poeniPrvo, poeniDrugo, poeniTrece;
	//prvo
	system("cls");
	int prviOdgovor;
	printf("1. Mozak kompjutera je\n1) ALU\n2) Control unit\n3) CPU");
	scanf_s("%d", &prviOdgovor);
	if (prviOdgovor == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 3.\n");
		system("pause");
	}
	poeniPrvo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (prviOdgovor == 3)
			poeniPrvo = poeniPrvo + i;

	}

	//drugo
	system("cls");
	int drugiOdgovor;
	printf("2. Vrijeme potrebno za donosenje i izvrsenje jedne jednostavne masinske instrukcije je\n1) Masinski Ciklus\n2) Stvarno Vrijeme\n3) CPU Ciklus");
	scanf_s("%d", &drugiOdgovor);
	if (drugiOdgovor == 3)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Netacno. Tacan odgovor je 3.\n");
		system("pause");
	}
	poeniDrugo = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (drugiOdgovor == 3)
			poeniDrugo = poeniDrugo + i;

	}


	//trece

	system("cls");
	int treciOdgovor;
	printf("3. Koji kompjuteri se koriste za izvrsavanje kompleksnih operacija velikom brzinom ?\n1) Personalni\n2) Super\n3) Mini");
	scanf_s("%d", &treciOdgovor);
	if (treciOdgovor == 2)
	{
		printf("Tacno!\n");
		system("pause");
	}
	else
	{
		printf("Pogresno. Tacan odgovor je 2.\n");
		system("pause");
	}
	poeniTrece = 0;
	for (int i = 1; i <= 1; i++)
	{
		if (treciOdgovor == 2)
			poeniTrece = poeniTrece + i;

	}
	ukupniPoeni = poeniPrvo + poeniDrugo + poeniTrece;
	printf("\nTotal number of correct answers is: %d/4\n", ukupniPoeni);
}







