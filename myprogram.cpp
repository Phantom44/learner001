
/* 	-notepad run: cmd /k cd "c:\work\cpp\Github\learner001\" && gcc cppelso.cpp a.exe
	-errol a honlaprol kell majd frissitenem a mingw32-t mert a pali azt mondja mashonnan installalt neha nem megyen.: http://www.osdn.net/pfoject/mingw
	- .cpp file az ugynevezett forraskod file ,  .h az fejl�cfile. �s az altalam irt header file-okat "id�zojelek" !! koze kell rakni , a standardokat <kacsacsor> !
	- mt 733908469
	- amugy: https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on
*/

/*
kerdesek:
- v�lzozok memoria foglalas szerint: stack-heap-global. 
					stack automatikus es automatikusan meg is szunik. "en csak belsonek szoktam hivni"
					Heap (manualis! - es lehet kuslo pl csak cpp-n beluli): new int valtozo - de a prg vegen delete valtozo! 
					globalis (avagy static) "linkelem" a main-en kivul. Automatikus a kezelese.

- *p + 3 = p[3] jel�l�s egyenlos�get fejez ki, ami pointer aritmetika �s t�mb indexel�s k�z�tti kapcsolatot mutatja be. (erre valaszoltunk ezt megegyszer at kell neznem)

- https://en.cppreference.com/w/ - nehez kezelni,de inkabb a peldak fontosak. https://cplusplus.com/

- van pl egy library wxWidgets (nem tudom kuk�ztam a netrol https://www.youtube.com/watch?v=BjQhp0eHmJw&list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G  

- fogalmak:	Declaration (deklar�ci�) Megadja az azonos�t� nev�t �s t�pus�t, de nem foglal hozz� mem�ri�t sem tartalmazza a f�ggv�ny t�rzs�t- valahol mashol definialjuk
			Definition (defin�ci�) Az a deklar�ci�, ami mem�ri�t foglal (v�ltoz� eset�n) vagy tartalmazza a f�ggv�ny t�rzs�t .
			Implementation (implement�ci�) ? Funkci�k eset�n a f�ggv�ny t�rzs�t jel�li, teh�t maga a k�d ?
			Assignment (?) megmondjuk a forditonak,hogy rakja azt az erteket oda bele

- << operator , bar nem biztos,hogy ezt most meg kell ertenem.,

-arduino ide-t letoltottem kivancsisagbol ,de ott nincs main csak loop. de akkor a forditas szempontjabol? (lib)
-xml egyetlen mondatban: mire valo - egy adat leiro nyelv? - vannak kulon libraryk vagy mas nyelvekben elore megirt fuggvenyek,hogy ezt kezeljek? (azert konnyebb)
-
- stack pl main
- heap /pointers/ dinamikusan kerek memoriat es csak az - kerhetek tobbet mint amit pl malloc() (nullpointer)
/* dereference operator-


*/


#include "MyProgram.h"
#include <iostream> // ez egy behivott file, elore elkeszitettek a cpp nagymesterek standard libraryt-abban van. Tartalmaz classokat es ojjektumokat is
#include <windows.h> // valami nemtommi , nem talaltam a cpp-reference-ben,csak a wikiben. Asszem gui - azaz grafikus library windowsra. de ennek utana k�ll n�zni egyszer.
#include <conio.h>  // a _getch() f�ggv�nyhez kell, ami egy karaktert olvas be a billentyuzetrol an�lk�l, hogy megv�rn� az Enter-t. Ez a conio.h k�nyvt�r r�sze.

// using namespace std;  // a :: operatorral tudom meghatarozni,hogy ha pl van egy ugyanolyan nevu funkcio,akkor melyik namespace verziot vegye elo a prg. pl alfa::f() vagy beta::f()


int globValtozo; // ez global valtozo (kerulendo a hasznalata) 
//new int heapValtozo; // ez meg heap??
int egyikGlobalFunkcio(int nSzer, bool feltetel); // csak szoltunk, h lesz egy ilyen tehat deklaracio
void masikGlobalFunkcio();

namespace almaNamespace    
{	// ez egy namespace - magyarul n�vt�r, ami segit elkerulni a nevek osszekeveredeset. 
	//pl ha van egy masik fuggveny is, ami ugyanezt a nevet viseli, akkor a kettospontal jelolom melyikrol van szo.
	void ezEgyFuggveny() 
	{
		std::cout << "ez egy fuggveny a (saj�t) namespace-ben �s namespace meghivatkozassal hivtuk meg" << std::endl << std::endl;
	}
} // ez a namespace v�ge  


int main() 
{// f� "be�p�" f�ggv�ny - azaz t�rzsprogram kezdete. Vajon mi�rt int...? (ok� 0-a j� kimenete,but who cares?) 

	SetConsoleCP(1250);  //elvileg magyar�t�s 
	SetConsoleOutputCP(1250); // ja �s a notepadot is �t kellett tennem Central european- 1250-re.

	int valasztas;
	valasztas = 0;
	boolean quiterMain = false;
	
	do 
	{
		system("cls");
		std::cout << "1) funyiro neve" << std::endl;
		std::cout << "2) cicazas" << std::endl;
		std::cout << "3) hahaha lehetos�g" << std::endl;
		std::cout << "4) forszarozas" << std::endl;
		std::cout << "5) csillagoz�s  " << std::endl;
		std::cout << "x) valami ide nemvalasztas globvaltozo:  " << globValtozo << std::endl;
		std::cout << "V�lassz egy lehetos�get (1-6): ";
		std::cin >> valasztas;


		switch (valasztas)
		{
			case 1:
			{
				char quiter = 'n';
				while (quiter != 'y')
				{
					system("cls");
					std::cout << "Elso lehetos�g: funyiro neve" << std::endl;

					std::cout << "funyiro-kapa motorja: briggs quantum xl 55  model type: 128802-0910-01 code: 99022557 briggs quantum xl 55  \n - de te ezzel ne is foglalkozz. lol." << std::endl;
					std::cout << "na nezzunk egy kis pointeresdit:\n " << std::endl;
					almaNamespace::ezEgyFuggveny();   //probakepp meghivtuk a namespaceben levo fuggvenyt. 
					int egyStackValtozo = 4;
					int* egyStackValtozoPointere = &egyStackValtozo;
					std::cout << " valtozo erteke: " << egyStackValtozo << " itt lakik: " << &egyStackValtozo << " " << std::endl 
						      << " emmeg a pojinter: " << egyStackValtozoPointere << " derefer�lt ertek vagymif@sz: " << *egyStackValtozoPointere << std::endl;
					std::cout << std::endl;
					std::cout << "jo vagy nem jo? (y or n)" << std::endl;
					std::cin.get(quiter);

					if (quiter == 'n')
					{
						std::cout << "akkor bazzmeg!" << std::endl;
						std::cin >> quiter;
					}
				}

				break;
			}

			case 2:
			{
				char Quiter = 'n';
				system("cls");
				std::cout << "masodik lehetos�g: cicazas " << std::endl;
				std::string szovegValtozoNev;
				std::cout << std::endl;
				globValtozo = 10;   // fentiheap kerdesmukodik-e, csakmertnemertem
				egyikGlobalFunkcio(5, true);
				std::cout << " Hello,mi a neved te nyomesz? '\n' ";
				std::cin >> szovegValtozoNev;
				std::cout << "szia " << szovegValtozoNev << " cica, de j� vagy!";
				std::cin.get(Quiter);
				break;
			}

			case 3:
			{
				char Quiter = 'n';
				system("cls");
				std::cout << "harmadik lehetos�g: hahaha lehetos�g" << std::endl;
				int elsoSzam;

				std::cout << " l�gyszi cukika, irj be egy sz�mot: ";
				//ez a retek, elfelejtette a central european k�dol�st? - nem csak a notepad++ban, consolon jo.
				std::cin >> elsoSzam;

				if (elsoSzam < 10)
				{  //ha kapcsos zarojel nelkul irom akkor nincs block, csak az elso utasitasra vonatkozik az if
					std::cout << "hello jo kicsi,mondhatom...";
				}

				else if (elsoSzam < 20)
				{
					std::cout << "hello " << "  " << elsoSzam << "-j�ra m�r nem is annyira j�..." << " \n";
				}

				else
				{
					std::cout << "hello " << "  " << elsoSzam << "ez ilyen kutyaf�le 20 vagy annal nagyobb..." << " \n";
				}
				std::cin.get(Quiter);
				break;
			}

			case 4:
			{
				char Quiter = 'n';
				system("cls");
				int i;
				for (i = 1; i < 11; i++) {
					std::cout << "helyi f@sz: " << i << std::endl;
				}

				for (globValtozo = 11; globValtozo < 21; globValtozo++) {
					std::cout << "globf@sz: " << globValtozo << std::endl;
				}

				/*for (globalValtozo=21 ;  globalValtozo<31 ; globalValtozo++ ) {
					std::cout << globalValtozo << endl;
				}
				*/
				std::cin.get(Quiter);
				break;
			}

			case 5:  //csillagoz�s 
			{
				char quiter = 'n';
				system("cls"); // ez t�rli a konzol tartalm�t, de csak windows alatt muk�dik. Linuxon m�s parancs kellene.
				for (int sor = 1; sor < 22; sor++)
				{
					
					if (sor != 1 && sor != 21) // kozbenso csillagok 
					{
						std::cout << "*                                     *" << std::endl;
												 
					}
					
					else //teteje es alja
					{
						for (int oszlop = 1; oszlop < 40; oszlop++)
						{
							std::cout << "*";
						}
						std::cout << std::endl;
					}
				}

				std::cin.get(quiter);
				break;
			}

			case 0: //ez a resz szar 
			{
				char quiter = 'n';
				system("cls"); // ez t�rli a konzol tartalm�t, de csak windows alatt muk�dik. Linuxon m�s parancs kellene.
				std::cout << "nulladik lehetos�g - m�g nem csin�l semmit,ki k�llene l�pni �rtelmesen" << std::endl;
				std::cout << "lol.";

				quiterMain == true;  //nem jo, mert localis valtozo - az erteke megsemmisul- valahogy at kellene mentenem mia az egyel kintibbre.
				std::cout << std::endl;
				std::cin.get(quiter);
				break;
			}


			default:  // ez a resz sz@r-
			{
				char quiter = 'n';
				
				int weekdaysGametime[7] = { 353,35,33,224,224,24,244 };
				std::string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
				char karakterTomb[5] = "elem";  // vegyuk eszre -idezojel! es egy lez�ro karakter! ezert 5 elemu. 
				// A fordito automatan odateszi: ['e','l','e','m','\0'] - ha nem tal�l \0 jelet,akkor addig keres a memoriaban,mig nem talal valahol egy '\0' lezarot.
				std::cout << " !  " << cars[2] << std::endl;
				std::cout << "Ismeretlen v�laszt�s. happy new year Fefe!  " << globValtozo << std::endl;
								
				std::cin.get(quiter);
				break;
			}
		}


				
		std::cin.get(); //bekerunk karaktert,enterrel - futo-szalag karakterek vannak,vagymi -leveszi a futoszalagrol enterig

	}
	while (quiterMain != true);

	std::cout << "bye-bye. '\n' ";


	return (0);
}

int egyikGlobalFunkcio(int nSzer, bool feltetel)
{		//fuggveny athelyetve mashova, main utanra- deklaracio vs definicio. Ez a definicio.
	for (int i = 0; i< nSzer; i++) 
	{
		if (feltetel) 
		{
			std::cout << "hello fuggveny " << i << std::endl; // ez a fuggveny csak akkor ir ki, ha a feltetel igaz.
		}
		else 
		{
			std::cout << "nem jo. Ez a feltetel hamis �ga." << std::endl;
		}
	}
	std::cout << "hello heapvaltozo " << globValtozo << std::endl;
	return (nSzer);
}

void masikGlobalFunkcio() 
{
	std::cout << "hello masik-heapvaltozo " << globValtozo << std::endl;
}
