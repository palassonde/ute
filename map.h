#include "location.h"
#include <string>
#include <iostream>

using namespace std;

class Map{

	public:

		Map();
		Map(string _name, int _height, int _width);
		~Map();

		string getName();
		Location getLocation(int& x, int& y);

	private:

		string name;
		int height, width, size;
		Location* world;

		friend std::istream& operator >>(std::istream&, Map& m);
};
