/* 	-notepad run: cmd /k cd "c:\work\cpp\Github\learner001\" && gcc cppelso.cpp a.exe
	-errol a honlaprol kell majd frissitenem a mingw32-t mert a pali azt mondja mashonnan installalt neha nem megyen.: http://www.osdn.net/pfoject/mingw
	- .cpp file az ugynevezett forraskod file ,  .h az fejl�cfile. �s az altalam irt header file-okat "id�zojelek" !! koze kell rakni , a standardokat <kacsacsor> !
	- mt 733908469
*/

#include <iostream> // ez egy behivott file, elore elkeszitettek a cpp nagymesterek standard libraryt-abban van. Tartalmaz classokat es ojjektumokat is
#include <windows.h> // valami nemtommi , nem talaltam a cpp-reference-ben,csak a wikiben. Asszem gui - azaz grafikus library windowsra. de ennek utana k�ll n�zni egyszer.
using namespace std;  //a namespace az nemtom mia fittyfene, :: a jele 


int heapValtozo; //?? vagy global valtozo ??
void egyikFunkcio(); // ezt hogy hivjak? ez a deklar�l�s?  �s akkor mi a defini�l�s?
void masikFunkcio();


int main() {// f� "be�p�" f�ggv�ny - azaz t�rzsprogram,azaz a program belepesi pontja. De mi�rt int - who knows...? (ok� 0-a j� kimenete,but who cares?) 

		SetConsoleCP(1250);  //elvileg magyar�t�s 
		SetConsoleOutputCP(1250); // ja �s a notepadot is �t kellett tennem Central european- 1250-re.

		int valasztas;
		valasztas = 0; 
		
		std::cout << "1) funyiro" << std::endl;
		std::cout << "2) cicazas" << std::endl;
		std::cout << "3) hahaha lehetos�g" << std::endl;
		std::cout << "4) forszarozas" << std::endl;
		std::cout << "5) t�mb v�ltoz�:  " << std::endl;
		std::cout << "6) valami ide nemvalasztas -halom- heapvaltozo:  " << heapValtozo << std::endl; //aznemtommiaf@sz
		std::cout << "V�lassz egy lehetos�get (1-6): ";
		std::cin >> valasztas;
	
	
		switch (valasztas) {
			case 1: {	
				std::cout << "Elso lehetos�g" << std::endl;
				std::cout << "funyiro-kapa motorja: briggs quantum xl 55  model type: 128802-0910-01 code: 99022557 briggs quantum xl 55  \n - de te ezzel ne is foglalkozz. lol." << std::endl;
				std::cout << "na nezzunk egy kis pointeresdit:\n " << std::endl ;
				int egyNormalValtozo = 4;
				int* egyNormalValtozoPointere = &egyNormalValtozo; 
				std::cout << "valtozo erteke: " << egyNormalValtozo  << " itt lakik: " << &egyNormalValtozo << " " << " emmeg a pojinter: " << egyNormalValtozoPointere << " derefer�lt ertek vagymif@sz: " << *egyNormalValtozoPointere  <<std::endl ;
				std::cout << std::endl;
				std::cout << "jo\n vagy nem jo?" << std::endl ;
			break;
			}
			
			
			case 2: {
				std::cout << "masodik lehetos�g:" << std::endl;
				std::string szovegValtozoNev;
				std::cout << std::endl;
				heapValtozo = 10;   // fentiheap kerdesmukodik-e, csakmertnemertem
				egyikFunkcio();     //
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
			
			case 4: {
				int i;
				for (i=1 ;  i<11 ; i++ ) {
					std::cout << "helyi fasz: " << i << endl;
				}
				
				for (heapValtozo=11 ;  heapValtozo<21 ; heapValtozo++ ) {
					std::cout << "heapfasz: " << heapValtozo << endl;
				}		
				
				/*for (globalValtozo=21 ;  globalValtozo<31 ; globalValtozo++ ) {
					std::cout << globalValtozo << endl;
				}
				*/
				
			break;
			}
			
			case 5: {	
				std::cout << "�t�dik lehetos�g - m�g nem csin�l semmit,t�mb valami." << std::endl;
				std::cout << "lol.";
				std::cout << std::endl;
			break;
			}
			
			
			
			default: {
				 int weekdaysGametime[7] = {353,35,33,224,224,24,244};  
				 string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
				 char karakterTomb[5] = "elem";  // vegyukeszre -idezojel! es egy lez�ro karakter! ezert 5 elemu. 
												 // A fordito automatan odateszi: ['e','l','e','m','\0'] - ha nem tal�l \0 jelet,akkor addig keres a memoriaban,mig nem talal valahol egy '\0' lezarot.
				std::cout << " !  " << cars[2] << std::endl;
				std::cout << "Ismeretlen v�laszt�s. happy new year!  " << heapValtozo << std::endl;
				
            break;
			}
		}
		
	
		
	std::cout << "bye-bye. '\n' ";
	std::cin.get(); //bekerunk karaktert,enterrel - futo-szalag karakterek vannak,vagymi -leveszi a futoszalagrol enterig
	std::cin.get(); // mivel ures mar, ezert uj entert ker
	
	return (0);
}

void egyikFunkcio() {																						//fuggvenyek atrakasa mashova, main utanra
	cout << "hello heapvaltozo " << heapValtozo << std::endl ;
}

void masikFunkcio() {
	cout << "hello masik-heapvaltozo " << heapValtozo << std::endl ;
}