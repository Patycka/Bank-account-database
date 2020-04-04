#include <iostream>
#include <vector>

using namespace std;

class Account
{
private:
    struct ClientData
    {
        string name;
        int number;
        float saldo;
    };
    string fileToWriteData;

    ClientData clientData;
    int number;

    /*Szablon vector jest to struktura danych reprezentuj�ca tablic�. Tablica jest zbudowana z element�w
    o typie przekazanym poprzez parametr szablonu Type. Niniejszy kontener umo�liwia modyfikacj� rozmiaru
    tablicy w trakcie �ycia obiektu. Dane w tablicy s� u�o�one w pami�ci zawsze w spos�b ci�g�y co oznacza,
    �e kopiowanie danych do kontenera i z kontenera za pomoc� funkcji takich jak np. � standard C memcpy
    jest zawsze bezpieczne. Niniejszy kontener nale�y u�ywa� zawsze wtedy, gdy priorytetem jest posiadanie
    szybkiego dost�pu do dowolnego elementu kontenera.*/
    vector <ClientData> clientStructVect;

public:
    Account(const string& file);
    void CreateNew();
    void EditName(string nameToEdit);
    void Delete();
    void PrintAccount();
    static Account& SearchAccountByName(string nameToSearch);
    int SearchByName(string nameToSearch);
    makeMoneyTransfer(float money, string name);
    addMoney(float money);
    getMoney(float money);

};


class Database
{
public:
    void SaveAccount();
    void ReadAccount();
};



