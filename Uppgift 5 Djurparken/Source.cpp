#include <iostream>
#include <String>


class Animal
{
private:
	float vikt;
	int age;
	std::string Diet;
	int serialnumber;
	float speed;
	std::string name;//variabler
public:
	void Getvikt()
	{
		std::cout << "What is the animals vikt?" << std::endl;
		std::cin >> vikt;
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
private:
	float Maxspeed;
public:
	void GetMaxspeed()
	{
		std::cout << "What is the Zebras max speed?" << std::endl;
		std::cin >> Maxspeed;
	}
};

class Giraff : public Animal
{
private:	
	float maxheight;
public:
	void Getmaxheight()
	{
		std::cout << "what is the giraffs max height" << std::endl;
		std::cin >> maxheight;
	}
};

class Pingvin : public Animal
{
private:	
	std::string homie;
public:
	void Gethomie()
	{
	std::cout << "who is your buddy" << std::endl;
	std::cin >> homie;
	};
};

class Lejon : public Animal
{
private:	
	std::string meat;
	int xkg;
public:
	void Getxkg()
	{
	std::cout << "What kind of meet does the lion like" << std::endl;
	std::cin >> xkg;
	};
	void Getstringmeet()
	{
	std::cout << "what type of meet does you lion like" << std::endl;
	std::cin >> meet;
	};
};

class Elephant : public animal
{
private:
	int earsize;
public:
	void Getearsize()
	{
		std::cout << "what is the elephants earsize" << std::endl;
		std::cin >> earsize;
	};
};
int main()
{
	Animal, Zebra, Giraff, Pingvin, Lejon, Elephant

	



	return 0;
}