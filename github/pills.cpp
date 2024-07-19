//pills
//this file contains the bare bones for making evol sims!
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
class pill
{
private:
  std::string name;
  double doseage;
  bool day;
  bool night;
public:
    pill (std::string name_in, double doseage_in, bool day_in, bool night_in)
  {
	name = name_in;
	doseage = doseage_in;
	day = day_in;
	night = night_in;
  }
  void adjustName (std::string name_in){
	name = name_in;
  }
  void adjustDoseage (double doseage_in){
	doseage = doseage_in;
  }
  void adjustDay (bool day_in){
	day = day_in;
  }
  void adjustNight (bool night_in){
	night = night_in;
  }
  void readPill ()
  {
	std::cout << "name: " << name << "\n";
	std::cout << "doseage: " << doseage << "\n";
	std::cout << "day: " << day << "\n";
	std::cout << "night: " << night << "\n";
  }
  void pillwrite(std::string Fname){
      std::ofstream Myfile(Fname, std::ios::app);
      Myfile << name << "\n";
      Myfile << doseage << "\n";
      Myfile << day << "\n";
      Myfile << night << "\n";
      Myfile.close();
  }

};

std::string contrecures (std::string question)
{
  std::string nput1 = "";
  std::cout << question << "\n";
  std::cin >> nput1;
  if (nput1 != "y" && nput1 != "n")
	{
	  return contrecures(question);
	}
  return nput1;
}
void intake(std::string& nm, double& dg, bool& dy, bool& nt){
    std::cout << "name: " << "\n";
    std::cin.ignore();
    std::getline(std::cin, nm);
    std::cout << "doseage: " << "\n";
    std::cin >> dg;
    std::string nput2 = contrecures("day (y/n):");
    if(nput2 == "y"){
        dy = true;
    }
    if(nput2 == "n"){
        dy = false;
    }
    nput2 = contrecures("night (y/n):");
    if(nput2 == "y"){
        dy = true;
    }
    if(nput2 == "n"){
        dy = false;
    }
    
}
void pillret(std::vector<pill> que){
    std::cout << "your pills are : " << "\n";
	for(int i = 0; i < que.size(); i++){
	    que[i].readPill();
	}
}
  void pillwri(std::vector<pill> que, std::string Fname){
    for(int i = 0; i < que.size(); i++){
        que[i].pillwrite(Fname);
    }
}

int
main ()
{
  try
  {
	std::vector <pill> pills;
	bool cont = true;
	while (cont == true)
	  {
		std::string nput1o = contrecures ("do you wish to add another pill (y/n): ");
		//std::cout << nput1o;
		if (nput1o == "y")
		  {
		    std::string na;
		    double dos;
		    bool da;
		    bool ni;
            intake(na, dos, da, ni);
            pill one = pill(na, dos, da, ni);
            pills.insert(pills.end(), one);
		  }
		if (nput1o == "n"){
		    
            cont = false;
		}
		if(nput1o != "n" && nput1o != "y"){
			std::cerr << "Error: incorect input glitch";
		    throw std::runtime_error ("Error: incorect input glitch");
		}

	  }
	  pillret(pills);
	  pillwri(pills, "file.txt");

  }catch(...){}

  return 0;
}
