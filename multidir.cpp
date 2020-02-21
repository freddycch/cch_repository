#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <vector>

#include <TF1.h>

#include <TH1F.h>
#include <TH2F.h>

#include <TGraph.h>
#include <TGraphErrors.h>

#include <TDatime.h>
#include <TAxis.h>
#include <TCanvas.h>
#include <TStyle.h>

#include <TApplication.h>

using namespace std;

int main()
{
	string s;
	stringstream ss;
	ifstream infile;
	infile.open("path.txt", ios::in);
	while(1)
	{
		ss << "( cd ";
		infile >> s;
		if ( infile.eof() ) break;
		ss << s << " && exec /home/freddycch/tesi2 )";
		s = ss.str();	
		cout << s << endl;
		system(s.c_str());
		s = "";	
		ss.str("");
		cout << endl;
	}
	infile.close();
	return 0; 
}