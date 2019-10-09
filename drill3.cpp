#include "std_lib_facilities.h"

int main()
{
	cout << "Enter your first name;,\n";
	string your_name;
	cin >> your_name;
	cout << "Hello, " << your_name << " in this little program!:)\n";
	cout << "Enter the name of ther person you want to write to:\n";
	string first_name;
	cin >> first_name;	
	cout << "Dear " << first_name << ",\n";
	cout << "How are you?\n I hope we can meet up soon. We really need to talk about that new project.\n";
	cout << "Please enter your friend's name:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Please enter your friend's sex(m/f):\n";
	char friend_sex = 0;
	cin >> friend_sex;
	cout << "Anyway, have you seen " << friend_name << " lately?\n";
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me!\n";
	}
	else if (friend_sex == 'f') {
		cout<< "If you see " << friend_name << " please ask her to call me!\n";
	}
	
	cout << "Please enter your age:\n";
	int age;
	cin >> age;
		if ( age<0 ) {
			cout << "You're kidding!\n";
		}
		else if (age > 110) {
			cout << "You're kidding!\n";
		}
		cout << "I've heard you're just" << age << " old!";
		if (age == 12) {
			cout << "Next year you will be "<<age + 1<<" years old!\n";
		}
		else if (age == 17) {
			cout << "Next year you will be able to vote!\n";
		}
		else if (age > 70) {
			cout << "I hope you're enjoying your retirement!\n";
		}
		cout << "Yours sincerely,\n\n" << your_name;
		
}
