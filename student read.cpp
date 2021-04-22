#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
struct student
{
	int rno,marks;
	char name[30];
};
int main()
{
	ifstream ifs("a.txt");
	char strl[80];
	student s;
	while(1)
	{
	ifs >>s.rno;
	ifs>>s.marks;
	ifs>>s.name;
	if(ifs.eof()) break;
	cout<<"roll no="<<s.rno<<endl;
	cout<<"marks="<<s.marks<<endl;
	cout<<"name="<<s.name<<endl;
	cout<<endl;
}
ifs.close();
getch();
return  0;
}
