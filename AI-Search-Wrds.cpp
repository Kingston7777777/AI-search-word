#include <iostream>
#include <string>

using namespace std;

class AI {
private:
	bool active = true;
	string* words = new string[4];
	string search;
	char yON;
public:
	void searchWords() {
		words[0] = "What is a Computer";
		words[1] = "What is a Computer Program";
		words[2] = "Who invented Computer";
		words[3] = "Who invented C++";
		do {
			cout << "*********************************************************\n";
			cout << "I Am the AI hear to assist you\n";
			this->active = true;
			cout << "Active " << this->active << "\n";
			cout << "Enter the following to search for, make sure is what is below you type\n";
			cout << "What is a Computer\n";
			cout << "What is a Computer Program\n";
			cout << "Who invented Computer\n";
			cout << "Who invented C++\n";
			cout << "search: ";
			getline(cin >> ws, this->search);
			if (this->words[0] == this->search) {
				cout << "\n";
				cout << "AI searched result: " << "A Computer is an electronic device that accept, process, store data as input\n";
				cout << "and brings out the information as output\n";
			}
			else if (this->words[1] == this->search) {
				cout << "\n";
				cout << "AI searched result: " << "Computer programs are set of instructions that a computer must perform\n";
			}
			else if (this->words[2] == this->search) {
				cout << "\n";
				cout << "AI searched result: " << "Charles Barbage is the inventor of Computer\n";
			}
			else if (this->words[3] == this->search) {
				cout << "\n";
				cout << "AI searched result: " << "Bjarne Stroustrup is the inventor of C++\n";
			}
			else {
				cout << "\n";
				cout << this->search << " doesnt exist\n";
				cout << "Reasons either what you type dont match or you did'nt follow the spacing of what you are typing\n";
			}
			cout << "*********************************************************\n";
			cout << '\n';
			cout << "I was built in C++ by Kingsley. My purpose was for me to assist you in looking for answers\n";
			this->active = false;
			cout << "Not active " << this->active << "\n";
			cout << "Do you want to start all over type Y or N or any keyword to quit\n";
			cin >> this->yON;
			this->yON = toupper(this->yON);
		} while (yON == 'Y');
	}
	~AI() {
		cout << "AI class destroyed\n";
		delete[] words;
	}
};
int main() {
	AI user;
	user.searchWords();
	system("pause");
	return 0;
}