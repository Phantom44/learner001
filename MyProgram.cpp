// MyProgram.cpp : Defines the entry point for the application.
// v0.5

#include "MyProgram.h"


/* 	-notepad run: cmd /k cd "c:\work\cpp\Github\learner001\" && gcc cppelso.cpp a.exe
	-errol a honlaprol kell majd frissitenem a mingw32-t mert a pali azt mondja mashonnan installalt neha nem megyen.: http://www.osdn.net/pfoject/mingw
	- .cpp file az ugynevezett forraskod file ,  .h az fejlécfile. és az altalam irt header file-okat "idézojelek" !! koze kell rakni , a standardokat <kacsacsor> !
	- mt 733908469
	- amugy: https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on
*/

/*
kerdesek:
- válzozok memoria foglalas szerint: stack-heap-global. 
					stack automatikus es automatikusan meg is szunik. "en csak belsonek szoktam hivni"
					Heap (manualis! - es lehet kuslo pl csak cpp-n beluli): new int valtozo - de a prg vegen delete valtozo! 
					globalis (avagy static) "linkelem" a main-en kivul. Automatikus a kezelese.

- *p + 3 = p[3] jelölés egyenloséget fejez ki, ami pointer aritmetika és tömb indexelés közötti kapcsolatot mutatja be. (erre valaszoltunk ezt megegyszer at kell neznem)

- https://en.cppreference.com/w/ - nehez kezelni,de inkabb a peldak fontosak. https://cplusplus.com/

- van pl egy library wxWidgets (nem tudom kukáztam a netrol https://www.youtube.com/watch?v=BjQhp0eHmJw&list=PLFk1_lkqT8MbVOcwEppCPfjGOGhLvcf9G  

- fogalmak:	Declaration (deklaráció) Megadja az azonosító nevét és típusát, de nem foglal hozzá memóriát sem tartalmazza a függvény törzsét- valahol mashol definialjuk
			Definition (definíció) Az a deklaráció, ami memóriát foglal (változó esetén) vagy tartalmazza a függvény törzsét .
			Implementation (implementáció) ? Funkciók esetén a függvény törzsét jelöli, tehát maga a kód ?
			Assignment (?) megmondjuk a forditonak,hogy rakja azt az erteket oda bele

- << operator , bar nem biztos,hogy ezt most meg kell ertenem.,

-arduino ide-t letoltottem kivancsisagbol ,de ott nincs main csak loop. de akkor a forditas szempontjabol? (lib)
-xml egyetlen mondatban: mire valo - egy adat leiro nyelv? - vannak kulon libraryk vagy mas nyelvekben elore megirt fuggvenyek,hogy ezt kezeljek? (azert konnyebb)
-


- stack pl main
- heap /pointers/ dinamikusan kerek memoriat es csak az - kerhetek tobbet mint amit pl malloc() (nullpointer)
/* dereference operator-


*/



#include <iostream> // ez egy behivott file, elore elkeszitettek a cpp nagymesterek standard libraryt-abban van. Tartalmaz classokat es ojjektumokat is
#include <windows.h> // valami nemtommi , nem talaltam a cpp-reference-ben,csak a wikiben. Asszem gui - azaz grafikus library windowsra. de ennek utana köll nézni egyszer.
using namespace std;  // :: operatorral tudom meghatarozni,hogy ha pl van egy ugyanolyan nevu funkcio,akkor melyik namespace verziot vegye elo a prg. pl alfa::f() vagy beta::f()


int globValtozo; // ez global
//new int heapValtozo; // ez meg heap
void egyikFunkcio(); // csak szoltunk, h lesz egy ilyen tehat deklaracio
void masikFunkcio();


int main() {// fõ "beépõ" függvény - azaz törzsprogram kezdete. Vajon miért int...? (oké 0-a jó kimenete,but who cares?) 

	SetConsoleCP(1250);  //elvileg magyarítás 
	SetConsoleOutputCP(1250); // ja és a notepadot is át kellett tennem Central european- 1250-re.

	int valasztas;
	valasztas = 0;

	std::cout << "1) funyiro" << std::endl;
	std::cout << "2) cicazas" << std::endl;
	std::cout << "3) hahaha lehetoség" << std::endl;
	std::cout << "4) forszarozas" << std::endl;
	std::cout << "5) tömb változó:  " << std::endl;
	std::cout << "6) valami ide nemvalasztas globvaltozo:  " << globValtozo << std::endl;
	std::cout << "Válassz egy lehetoséget (1-6): ";
	std::cin >> valasztas;


	switch (valasztas) {
	case 1: {  //egyes
		std::cout << "Elso lehetoség" << std::endl;
		std::cout << "funyiro-kapa motorja: briggs quantum xl 55  model type: 128802-0910-01 code: 99022557 briggs quantum xl 55  \n - de te ezzel ne is foglalkozz. lol." << std::endl;
		std::cout << "na nezzunk egy kis pointeresdit:\n " << std::endl;
		int egyStackValtozo = 4;
		int* egyStackValtozoPointere = &egyStackValtozo;
		std::cout << "valtozo erteke: " << egyStackValtozo << " itt lakik: " << &egyStackValtozo << " " << " emmeg a pojinter: " << egyStackValtozoPointere << " dereferált ertek vagymif@sz: " << *egyStackValtozoPointere << std::endl;
		std::cout << std::endl;
		std::cout << "jo vagy nem jo? (y or n)" << std::endl;
			
		break;
	}


	case 2: {
		std::cout << "masodik lehetoség:" << std::endl;
		std::string szovegValtozoNev;
		std::cout << std::endl;
		globValtozo = 10;   // fentiheap kerdesmukodik-e, csakmertnemertem
		egyikFunkcio();     
		std::cout << " Hello,mi a neved te nyomesz? '\n' ";
		std::cin >> szovegValtozoNev;
		std::cout << "szia " << szovegValtozoNev << " cica, de jó vagy!";
		break;
	}

	case 3: {
		std::cout << "harmadik lehetoség" << std::endl;
		int elsoSzam;

		std::cout << " légyszi cukika, irj be egy számot: "; //ez a retek, elfelejtette a central european kódolást? - nem csak a notepad++ban, consolon jo.
		std::cin >> elsoSzam;

		if (elsoSzam < 10) {  //ha kapcsos zarojel nelkul irom akkor nincs block, csak az elso utasitasra vonatkozik az if
			std::cout << "hello jo kicsi,mondhatom...";
		}

		else if (elsoSzam < 20) {
			std::cout << "hello " << "  " << elsoSzam << "-jára már nem is annyira jó..." << " \n";
		}

		else {
			std::cout << "hello " << "  " << elsoSzam << "ez ilyen kutyafüle 20 vagy annal nagyobb..." << " \n";
		}
		break;
	}

	case 4: {
		int i;
		for (i = 1; i < 11; i++) {
			std::cout << "helyi fasz: " << i << endl;
		}

		for (globValtozo = 11; globValtozo < 21; globValtozo++) {
			std::cout << "globfasz: " << globValtozo << endl;
		}

		/*for (globalValtozo=21 ;  globalValtozo<31 ; globalValtozo++ ) {
			std::cout << globalValtozo << endl;
		}
		*/

		break;
	}

	case 5: {
		std::cout << "ötödik lehetoség - még nem csinál semmit,tömb valami." << std::endl;
		std::cout << "lol.";
		std::cout << std::endl;
		break;
	}



	default: {
		int weekdaysGametime[7] = { 353,35,33,224,224,24,244 };
		string cars[4] = { "Volvo", "BMW", "Ford", "Mazda" };
		char karakterTomb[5] = "elem";  // vegyukeszre -idezojel! es egy lezáro karakter! ezert 5 elemu. 
		// A fordito automatan odateszi: ['e','l','e','m','\0'] - ha nem talál \0 jelet,akkor addig keres a memoriaban,mig nem talal valahol egy '\0' lezarot.
		std::cout << " !  " << cars[2] << std::endl;
		std::cout << "Ismeretlen választás. happy new year!  " << globValtozo << std::endl;

		break;
	}
	}



	std::cout << "bye-bye. '\n' ";
	std::cin.get(); //bekerunk karaktert,enterrel - futo-szalag karakterek vannak,vagymi -leveszi a futoszalagrol enterig
	std::cin.get(); // mivel ures mar, ezert uj entert ker

	return (0);
}

void egyikFunkcio() {																						//fuggvenyek atrakasa mashova, main utanra
	cout << "hello heapvaltozo " << globValtozo << std::endl;
}

void masikFunkcio() {
	cout << "hello masik-heapvaltozo " << globValtozo << std::endl;
}
