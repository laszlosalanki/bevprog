#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to: ";
	string first_name;
	cin >> first_name;
	cout << "\n";

	cout << "Dear " << first_name << ",\n";
	cout << "\n";
	cout << "\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "\n";

	cout << "Enter the name of an another friend: ";
	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name <<  " lately?\n";
	cout << "\n";
	
	char friend_sex = 0;
	cout << "Please enter 'm' if " << friend_name << " is male, or 'f', if female: ";
	cin >> friend_sex;
	if(friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if(friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	
	cout << "\n";
	cout << "Please enter the age of " << first_name << ": ";
	int age = 0;
	cin >> age;
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if(age == 0 || age < 0 || age == 110 || age > 110)
	{
		simple_error(" you ' re kidding!\n");
	}
	if(age < 12)
	{
		cout << "Next year you will be "<< age + 1 << ".\n";
	}
	if(age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	if(age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "\n";
	cout << "Yours sincerely,";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "Laszlo\n";	
}
