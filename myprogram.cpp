/* 	-notepad run: cmd /k cd "c:\work\cpp\Github\learner001\" && gcc cppelso.cpp a.exe
	-errol a honlaprol kell majd frissitenem a mingw32-t mert a pali azt mondja mashonnan installalt neha nem megyen.: http://www.osdn.net/pfoject/mingw
	- .cpp file az ugynevezett forraskod file ,  .h az fejl�cfile. �s a saj�t header fileokat "id�zojelek" !! koze kell rakni , a standardokat <kacsacsor> !
	- 
*/

#include <iostream> // ez egy behivott file, elore elkeszitettek a mesterek standard libraryt-abban van. Tartalmaz classokat es ojjektumokat is
#include <windows.h> // valami nemtommi , nem talaltam a cpp-reference-ben. asszem gui - azaz grafikus library windowsra. de ennek utana k�ll n�zni.

using namespace std;  //a namespace az nemtom mia f.-ene, :: a jele.


int heapValtozo;

int main() {// f� "be�p�" f�ggv�ny - azaz t�rzsprogram,azaz a program belepesi pontja. De mi�rt int - who knows...? (ok� 0-a j� kimenete,but who cares?) 

		SetConsoleCP(1250);  //elvileg magyar�t�s 
		SetConsoleOutputCP(1250); // ja �s a notepadot is �t kellett tennem Central european- 1250-re.

		int valasztas;
		valasztas = 0; 
		
		std::cout << "1) funyiro" << std::endl;
		std::cout << "2) cicazas" << std::endl;
		std::cout << "3) hahaha lehetos�g" << std::endl;
		std::cout << "4) valami ide -halom- heapvaltozo:  " << heapValtozo << std::endl;
		std::cout << "V�lassz egy lehetos�get (1-3): ";
		std::cin >> valasztas;
	
	
		switch (valasztas) {
			case 1: {	
				std::cout << "Elso lehetos�g" << std::endl;
				std::cout << "funyiro-kapa motorja: briggs quantum xl 55  model type: 128802-0910-01 code: 99022557 briggs quantum xl 55  \n - de te ezzel ne is foglalkozz. lol.";
				std::cout << std::endl;
			break;
			}
			
			
			case 2: {
				std::cout << "masodik lehetos�g:" << std::endl;
				std::string szovegValtozoNev;
				std::cout << std::endl;
				std::cout << " Hello,mi a neved te nyomesz? '\n' ";
				std::cin >> szovegValtozoNev;
				std::cout << "szia " << szovegValtozoNev << " cica, de j� vagy!";
			break;
			}
			
			case 3: {
				std::cout << "harmadik lehetos�g" << std::endl;
				int elsoSzam;
					
					std::cout << " l�gyszi cukika, irj be egy sz�mot: "; //ez a retek, elfelejtette a central european k�dol�st? - nem csak a notepad++ban, consolon jo.
					std::cin >> elsoSzam; 
	
					if (elsoSzam < 10) {  //ha kapcsos zarojel nelkul irom akkor nincs block, csak az elso utasitasra vonatkozik az if
						std::cout << "hello jo kicsi,mondhatom...";
					}
					
					else if (elsoSzam < 20)	{
						std::cout << "hello " << "  " << elsoSzam << "-j�ra m�r nem is annyira j�..." << " \n";
					}
					
					else {
						std::cout << "hello " << "  " << elsoSzam << "ez ilyen kutyaf�le 20 vagy annal nagyobb..." << " \n" ;
					}
			break;
			}
			
			default: {
				std::cout << "Ismeretlen v�laszt�s. heapvaltozo:  " << heapValtozo << std::endl;
				std::cout << "a char:" << sizeof(char) << " a short: " << sizeof(short) << " a long: " << sizeof(long) << " �s a longlong: " << sizeof(long long) << " byte.";
            break;
			}
		}
		
	
		
	std::cout << "bye-bye. '\n' ";
	std::cin.get(); //bekerunk karaktert,enterrel - futo-szalag karakterek vannak,vagymi -leveszi a futoszalagrol enterig
	std::cin.get(); // mivel ures mar, ezert uj entert ker
	
	return (0);
}
