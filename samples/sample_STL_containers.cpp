#include <iostream>
#include <string>
#include <map>
#include <list>
#include <iterator>

int main() {
	std::string s;
	s = "1)Exampe of using map:";
	std::cout << s << std::endl;
	std::map<std::string, std::string> mp = { {"Fish","-"} ,{"Cat","Meow"}, {"Dog","Woof"},{"Fox","What does the fox say?"} };
	auto it1 = mp.begin();
	while ((*it1).first != "Fish") ++it1;
	mp.erase(it1);
	mp.insert({ "Cockerel", "Cock-A-Doodle-Doo!" });
	s = "Animals and their sounds:";
	std::cout << s << std::endl;
	for (it1 = mp.begin(); it1 != mp.end(); ++it1)
		std::cout << (*it1).first << " - " << (*it1).second << std::endl;
	mp.clear();
	s = "2)Exampe of using list:";
	std::cout << std::endl << s << std::endl;
	std::list<std::string> list;
	list.push_front("January");
	auto it2 = list.begin();
	list.insert(it2, "December");
	list.push_back("April");
	++it2;
	list.erase(it2);
	list.push_back("February");
	s = "Winter has 3 months:";
	std::cout << s << std::endl;
	for (it2 = list.begin(); it2 != list.end(); ++it2)
		std::cout << *it2 << std::endl;
	list.clear();

	return 0;
}