#include <string>
#include <iostream>

using namespace std;

class Location{

	public:

		Location();
		Location(string _name, string description);

		void describe();
		void setPosition(int& _x, int& _y);
		bool firstTime();

	private:

		int position;
		string name;
		string description;
		bool visited;

		friend std::istream& operator >> (std::istream& is, Location& l);
};

