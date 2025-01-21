//Stack je : Struktura podataka, kao haystack (plast sena),  princip LIFO. Implementira se pomocu reci stack



//funkcije koje ima stack
// push() - dodajemo elemente na stek
// pop() - uklanjamo elemente sa steka
// top() - odredjuje vrh steka
// empty() - da li je stek prazan
// size() - odredjuje velicinu steka


#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> Stek; // deklarisemo stek tipa int (celi brojevi)
    int brojEl;

    // Korisnik unosi elemente na stek
    cout << "unesite broj elemenata: ";
    cin >> brojEl;

    cout << "Unesite " << brojEl << " elemenata: " << endl;
    for (int i = 0; i < brojEl; i++) { //petlja ide od 0 do broja elemenata koje je korisnik uneo
        int element;
        cin >> element;
        Stek.push(element); // dodajemo elemente na stek
    }

    cout<< "Vrh steka: "<< Stek.top() <<endl; // 30 je L pa ispisuje 30
    cout<< "Velicina steka: " << Stek.size()<< endl;  // Imamo 3 elementa na steku

    Stek.pop(); // uklanjamo element na vrhu steka
    cout << "nakon pop, novi vrh steka: " <<Stek.top() << endl; //20

    // stek prazan ?
    if (Stek.empty()) {
        cout<<"stek je prazan" << endl;} 
    else {
        cout<< "stek nije prazan" << endl;}
        
    //dodajemo
    Stek.push(40);
    Stek.push(50);

    // ispisujemo sve elemente steka koristeci while
    cout << "svi elementi steka: ";
    while (!Stek.empty()) {
        cout << Stek.top() << " ";
        Stek.pop();
    }
    cout << endl;

    // provera nakon uklanjanja svih elemenata
    cout << "velicina nakon brisanja: " << Stek.size() << endl;

    return 0;
}