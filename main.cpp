#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "fonction.h"
using namespace std;

const int Max = 100;


int main()
{

    // 3 vecteurs 2D correspondant a l'image
    vector <vector <int> > red;
    vector < vector <int> > green;
    vector < vector <int > > blue;




    //question 6



    char choix;
    string imagechoisie;
    cout << "Quelle image voulez vous selectionner ?"<<endl;
    cin >> imagechoisie;
    cout << "Que voulez vous faire sur l'image ?"<< endl;
    cin>> choix;
    switch(choix)
    {
        case 'a' : imageACopier(imagechoisie);break;
        case 'b' : QueDuRouVouB (imagechoisie,red,green, blue);break;
        case 'c' : RechercheRouge(imagechoisie);break;
        case 'd' : SansRouge(imagechoisie);break;
        case 'e': imageNegative(imagechoisie);break;
        case 'f' : imagebinarisee(imagechoisie);break;
    }







    return 0;
}







