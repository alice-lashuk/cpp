#include <iostream>
#include <string>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cin;

struct car {
	int id;
	int rgb;
	string model;
	long distance;
	string plate_id;
};

car database[100];
int index = 0;

void add_record()
{
	cout << "Type a distance: ";
	cin >> database[index].distance;
    cout << "Type color";
    cin >> database[index].rgb;
    cout << "Type model";
    cin >> database[index].model;
    cout << "Type plate id";
    cin >> database[index].plate_id;
	database[index].id = index;
	index++;
	if (index == 100) {
		index--;
		cout << "There is no space left. Buy premium version";
	}
	// todo: append a row to database

}



void append(){
    file.open("database", std::ios::out | std::ios::app);
    if(file.good())
    { 
        for(int i = index; i < sizeof(database); i++)
        {
            file >> 
        }
        file.close();
    }
}

void show() {

}

int main()
{
    std::fstream file;
    
    file.open("database", std::ios::in);
    if(file.good())
    {
        for(int i; i < sizeof(database); i++){
            file >> 
        }
        
        file.close();
    }
	// todo: read data from a file
	while (true)
	{
		cout << "Main menu" << endl;
		cout << "[ 0] - Add a new record" << endl;
        cout << "[ 1] - Save changes" <<endl;
        cout << "[ 2] - Add new row" << endl;
        cout << "[ 3] - Show database" << endl;
		cout << "[-1] - End the program" << endl;
		int action;
		switch (action)
		{
		case 0:
			add_record();

			break;
        case 1:
            append();
		case -1:
			return 0;
        case 
		}
    }
	
}
