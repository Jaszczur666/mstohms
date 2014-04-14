// mstohms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{	
	int ms,h,m,s;
//	for (int i=0;i<argc;i++)  wprintf(L"Argument %d:%s\n",i,argv[i]);
	//cout <<argc<<endl;
	if (argc==2){
	ms=_wtoi(argv[1]);
	
//	cout<<ms;
	h=(ms/1000)/3600;
	m=(ms-3600000*h)/60000;
	s=(ms-3600000*h-60000*m)/1000;
	cout<<"Time is " <<h <<" hours "<<m <<" minutes "<<s<< " seconds";
	}
	return 0;
}

