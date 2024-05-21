#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void loadPicture(string picture,  vector <vector <int> > & red,  vector <vector <int> > & green,  vector <vector <int> >  & blue);
void writePicture(string picture,const vector<vector <int> > & red, const vector<vector <int> > & green, const  vector<vector <int> >  & blue);
void imageACopier(string imagecopie);
void QueDuRouVouB (string image, vector <vector <int> > & red,  vector <vector <int> > & green,  vector <vector <int> > & blue);
void RechercheRouge(string image);
void SansRouge(string imageRouge);
void imageNegative(string imageANegative);
void imagebinarisee(string imagebin);
#endif // FONCTION_H_INCLUDED
