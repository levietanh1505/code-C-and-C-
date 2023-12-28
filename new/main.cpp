#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;
map <string, string> phantichchat (string chat){

	map <string, string > dulieu;
	int i = 0;
	while (i < chat.size()){
		string nt = "";
		string chiso = "";

		while (isalpha(chat [i])){
			nt += chat[i];
			i ++;
		}
		while (isdigit(chat [i])){
			chiso += chat [i];
			i ++;
		}
		if (chiso == "") chiso = "10";
		dulieu [nt] = chiso;
	}

	return dulieu;
}
int main(){

	map <string, int> dulieu;
	for (int i = 0; i < 10; i ++){
		string nt;
		int ntk;
		cin >> nt >>ntk;

		dulieu [nt] = ntk;
	}

	string chat;
	cin >> chat;

	map <string, string> tachchat = phantichchat (chat);

	int ptk = 0;

	for (auto i : tachchat){
		ptk += dulieu [i.first] * stoi (i.second);
	}

	cout << ptk;
	
}