// check file found or no#include <iostream>

#include <iostream>
#include<cmath>
#include<fstream>
using namespace std;
int main()
{
	cout << "\n File read write program \ ";
	ofstream myfile("test.txt");
	myfile << "Hello world , this is file function.\n";
	myfile << "Hello world , this is file function.\n";
	myfile.close();
	
	string filetext;
	ifstream readfile("test.txt");
	try
	{
		if(!readfile)
		{
			cout << "\n File not found\n";
			throw(404);
		}
		else
		{
			while(getline(readfile,filetext))
			{
				cout << "filetext" << "\n";
			}
		}
	}
	catch(int num)
	{
		cout << "File Not Found!!" << num;
	}
	readfile.close();
	return 0;
}
