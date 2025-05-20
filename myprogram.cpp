/* 	-notepad run: cmd /k cd "c:\work\cpp\Github\learner001\" && gcc cppelso.cpp a.exe
	-errol a honlaprol kell majd frissitenem a mingw32-t mert a pali azt mondja mashonnan installalt neha nem megyen.: http://www.osdn.net/pfoject/mingw
	- .cpp file az ugynevezett forraskod file ,  .h az fejlécfile. és a saját header fileokat "idézojelek" !! koze kell rakni , a standardokat <kacsacsor> !
	- 
*/

#include <iostream> // ez egy behivott file, elore elkeszitettek a mesterek standard libraryt-abban van. Tartalmaz classokat es ojjektumokat is
#include <windows.h> // valami nemtommi , nem talaltam a cpp-reference-ben. asszem gui - azaz grafikus library windowsra. de ennek utana köll nézni.

using namespace std;  //a namespace az nemtom mia f.-ene, :: a jele.


int heapValtozo;

int main() {// fõ "beépõ" függvény - azaz törzsprogram,azaz a program belepesi pontja. De miért int - who knows...? (oké 0-a jó kimenete,but who cares?) 

		SetConsoleCP(1250);  //elvileg magyarítás 
		SetConsoleOutputCP(1250); // ja és a notepadot is át kellett tennem Central european- 1250-re.

		int valasztas;
		valasztas = 0; 
		
		std::cout << "1) funyiro" << std::endl;
		std::cout << "2) cicazas" << std::endl;
		std::cout << "3) hahaha lehetoség" << std::endl;
		std::cout << "4) valami ide -halom- heapvaltozo:  " << heapValtozo << std::endl;
		std::cout << "Válassz egy lehetoséget (1-3): ";
		std::cin >> valasztas;
	
	
		switch (valasztas) {
			case 1: {	
				std::cout << "Elso lehetoség" << std::endl;
				std::cout << "funyiro-kapa motorja: briggs quantum xl 55  model type: 128802-0910-01 code: 99022557 briggs quantum xl 55  \n - de te ezzel ne is foglalkozz. lol.";
				std::cout << std::endl;
			break;
			}
			
			
			case 2: {
				std::cout << "masodik lehetoség:" << std::endl;
				std::string szovegValtozoNev;
				std::cout << std::endl;
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
					
					else if (elsoSzam < 20)	{
						std::cout << "hello " << "  " << elsoSzam << "-jára már nem is annyira jó..." << " \n";
					}
					
					else {
						std::cout << "hello " << "  " << elsoSzam << "ez ilyen kutyafüle 20 vagy annal nagyobb..." << " \n" ;
					}
			break;
			}
			
			default: {
				std::cout << "Ismeretlen választás. heapvaltozo:  " << heapValtozo << std::endl;
				std::cout << "a char:" << sizeof(char) << " a short: " << sizeof(short) << " a long: " << sizeof(long) << " és a longlong: " << sizeof(long long) << " byte.";
            break;
			}
		}
		
	
		
	std::cout << "bye-bye. '\n' ";
	std::cin.get(); //bekerunk karaktert,enterrel - futo-szalag karakterek vannak,vagymi -leveszi a futoszalagrol enterig
	std::cin.get(); // mivel ures mar, ezert uj entert ker
	
	return (0);
}
