#include <iostream>
#include <cstring>
using namespace std;
/*Да се дефинира класа Film, во која ќе се чуваат информации за:

    име низа од 100 знаци
    режисер низа од 50 знаци
    жанр низа од 50 знаци
    година цел број

Сите променливи треба да бидат приватни. Соодветно во рамките на класата да се дефинираат:

    default конструктор и конструктор со аргументи
    метод за печатење на информациите за филмот

Дополнително да се реализира надворешна функција:

//    void pecati_po_godina(Film *f, int n, int godina) која ќе прима аргумент низа од филмови, вкупниот број на филмови и година, а треба да ги отпечати само филмовите кои се направени во дадената година.
*/
// vashiot kod ovde
class Film
{
  private:
    char ime[100];
    char reziser[50];
    char zanr[50];
    int godina;
  public:
    Film()
    {
      char ime[] = "Zoran";
      char reziser[] = "Siguren li si";
      char zanr[] = "Tragedija";
      int godina = 1999;
    }
    Film(char i, char rez, char z, int god)
    {
      *ime = i;
      *reziser =rez;
      *zanr =z;
      godina = god;
    }


    void set_godina(int god)
    {
      godina = god;
    }
    

    int get_godina(){
      return godina;
    }
    string get_zanr()
    {
      return zanr;
    }
    string get_ime(){
      return ime;
    }
    string get_reziser()
    {
      return reziser;
    }


};

void pecati_po_godina(Film *f, int n, int godina)
{
//  cout<<get_godina()<<endl;
  for (int i = 0; i <n; i++) {
   // if(f[i].get_godina() == godina)
    {
              cout<<"Ime: "<<f[i].get_ime()<<endl;
	      cout<<"Reziser: "<<f[i].get_reziser()<<endl;
      	      cout<<"Zanr: "<<f[i].get_zanr()<<endl;
              cout<<"Godina: "<<f[i].get_godina()<<endl;
    }
  }
  //niza od filmovi, vkupen broj filmovi, godina
}
int main() {
 	int n;
 	cin >> n;

        Film filmce[20];

 	//da se inicijalizira niza od objekti od klasata Film
 	for(int i = 0; i < n; ++i) {
 		char ime[100];
 		char reziser[50];
 		char zanr[50];
 		int godina;
 		cin >> ime;
 		cin >> reziser;
 		cin >> zanr;
                cin >> godina;

                filmce[i](ime,reziser,zanr,godina);
 		//da se kreira soodveten objekt
 	}
 	int godina;
 	cin >> godina;

        pecati_po_godina(filmce, n, godina);
 	//da se povika funkcijata pecati_po_godina
 	return 0;
 }
