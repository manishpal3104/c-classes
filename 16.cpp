#include<iostream>
#include<cstring>

using namespace std;

class student {
	private:
		int rollNo;
		char name[30];
	public:
		void getData(int roll_in, char *name_in) {
			rollNo = roll_in;
			strcpy(name, name_in);
		}	
		void putData() {
			cout << "Roll No : " << rollNo << endl;
			cout << "Name    : " << name << endl;
		}
};

int main() {
	student s1, s2, s3;
	s1.getData(1002, "Manish Kumar Pal");
	s2.getData(1003, "Ankit Kumar Singh");
	s3.getData(1004, "Aman Kumar");
	cout << "Student Details :\n";
	s1.putData();
	s2.putData();
	s3.putData();
	system("pause");
	return 0;
}
