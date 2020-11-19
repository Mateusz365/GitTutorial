#include <iostream>

using namespace std;

string imie,nazwisko;
int wiek;

int main(){
    system("cls");
    cout<<"Jak masz na imie: ";
    cin>>imie;
    cout<<"Jak masz na nazwisko: ";
    cin>>nazwisko;
    cout<<"Ile masz lat: ";
    cin>>wiek;
    cout <<"Dzien dobry: "<<imie<<" "<<nazwisko<<" masz "<<wiek<<" lat"<<endl;



    return 0;
}
