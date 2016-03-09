#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Zwierze;
class Zoo
{

    protected:
        vector <Zwierze*> v;
    public:
        void dodaj(Zwierze *z)
        {

        }
        Zwierze* wczytaj(int i)
        {
            return v.at(i);
        }
};

class Zwierze
{
public:
	virtual void daj_glos() = 0;
};

class Forfiter : public Zwierze
{
public:
    int masa;
	virtual void daj_glos() { cout << "Szwagier!" << endl; }

Forfiter::Forfiter(int m)       //konstrukor definiuje mase zwierzaka
{
    masa = m;
}
};

class Kon : public Zwierze
{
public:
    int masa;
	virtual void daj_glos() { cout << "Ihaa!" << endl; }

Kon::Kon(int m)                 //konstrukor definiuje mase zwierzaka
{
    masa = m;
}
};


class Koza : public Zwierze
{
public:
    int masa;
	virtual void daj_glos() { cout << "Meee!" << endl; }

Koza::Koza(int m)               //konstrukor definiuje mase zwierzaka
{
    masa = m;
}
};

class Kaczka : public Zwierze
{
public:
    int masa;
	virtual void daj_glos() { cout << "To wina Tuska" << endl; }

Kaczka::Kaczka(int m)           //konstrukor definiuje mase zwierzaka
{
    masa = m;
}
};



int main()
{


	srand(time(NULL));
    Zoo zoo;
    zoo.dodaj(new Kaczka(1));
	//Zwierze *z = NULL;
	//vector<Zoo*> v;



	/*for(int i=0; i<20; ++i)
	{
		if(rand()%100 > 50)
			v.push_back(new Forfiter(150));
		else if(rand()%100 < 50 && rand()%100 > 80)
			v.push_back(new Kon(300));
        else
            v.push_back(new Kaczka(1));
	}*/

    for(int i=0; i<zoo.v.size(); ++i)
	{
		v.at(i)->daj_glos();
	}

	//TODO: zwolnij pamiec

	/*
	if(rand()%100 > 50)
		z = new Forfiter();
	else
		z = new Kon();

	if(z != NULL)
	{
		z->daj_glos();
		delete z;
	}
	*/

	//z = new Zwierze();
	return 0;
}
