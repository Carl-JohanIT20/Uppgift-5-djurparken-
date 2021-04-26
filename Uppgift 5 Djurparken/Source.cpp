#include <iostream>
#include <String>


class Animal
{
public:
	float weight;
	int age;
	std::string Diet;
	int serialnumber;
	float speed;
	std::string name;//variabler

	void Getweight()
	{
		std::cout << "What is the animals weight?" << std::endl;
		std::cin >> weight;
	}
	void Getage()
	{
		std::cout << "how old is the animal?" << std::endl;
		std::cin >> age;
	}
	void GetDiet()
	{
		std::cout << "what does the animal eat?" << std::endl;
		std::cin >> Diet;
	}
	void Getserialnumber()
	{
		std::cout << "what is the animals serialnumber?" << std::endl;
		std::cin >> serialnumber;
	}
	void Getspeed()
	{
		std::cout << "how fast is the animal" << std::endl;
		std::cin >> speed;
	}
	void Getname()
	{
		std::cout << "What is the animals name?" << std::endl;
		std::cin >> name;
	}
	//funktioner som alla klasser ärver av
};

class Zebra : public Animal
{
public:
	float Maxspeed;

	void GetMaxspeed()
	{
		std::cout << "What is the Zebras max speed?" << std::endl;
		std::cin >> Maxspeed;
	}
};

class Giraff : public Animal
{
public:	
	float maxheight;

	void Getmaxheight()
	{
		std::cout << "what is the giraffs max height" << std::endl;
		std::cin >> maxheight;
	}
};

class Pingvin : public Animal
{
public:
	std::string homie;

	void Gethomie()
	{
	std::cout << "who is your buddy" << std::endl;
	std::cin >> homie;
	};
};

class Lejon : public Animal
{
public:	
	std::string meat;
	int xkg;

	void Getxkg()
	{
	std::cout << "What kind of meet does the lion like" << std::endl;
	std::cin >> xkg;
	};
	void Getstringmeat()
	{
	std::cout << "what type of meet does you lion like" << std::endl;
	std::cin >> meat;
	};
};

class Elephant : public Animal
{
public:
	int earsize;
	

	void Getearsize()
	{
		std::cout << "what is the elephants earsize" << std::endl;
		std::cin >> earsize;
	};
};


int main()
{
	Zebra zebra;

	zebra.GetMaxspeed();
	zebra.Getweight();
	zebra.Getage();
	zebra.GetDiet();
	zebra.Getserialnumber();
	zebra.Getspeed();
	zebra.Getname();

	Giraff giraff;

	giraff.Getmaxheight();
	giraff.Getweight();
	giraff.Getage();
	giraff.GetDiet();
	giraff.Getserialnumber();
	giraff.Getspeed();
	giraff.Getname();

	Pingvin pingvin;

	pingvin.Gethomie();
	pingvin.Getweight();
	pingvin.Getage();
	pingvin.GetDiet();
	pingvin.Getserialnumber();
	pingvin.Getspeed();
	pingvin.Getname();

	Lejon lejon;

	lejon.Getxkg();
	lejon.Getstringmeat();
	lejon.Getweight();
	lejon.Getage();
	lejon.GetDiet();
	lejon.Getserialnumber();
	lejon.Getspeed();
	lejon.Getname();

	Elephant elephant;

	elephant.Getearsize();
	elephant.Getweight();
	elephant.Getage();
	elephant.GetDiet();
	elephant.Getserialnumber();
	elephant.Getspeed();
	elephant.Getname();



	return 0;
}



