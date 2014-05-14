#include <string>

using namespace std;

class Player{

	public:

		Player();

		int getPosition(int& x, int& y);

	private:

		string name;
		float health;
		int position;
};
