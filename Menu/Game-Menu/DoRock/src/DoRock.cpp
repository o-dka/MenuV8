#include <fstream>
#include <iostream>
// #include "ConfigViewer/ConfigViewer.h"
//  
void DoRock( int add, int mult, int first, int second, bool two) {
  int choose, entry;
  std::cout << "What to do?" << "\n";
  std::cout << "1. To add "<<"\n" << "2.To Multiply"<<"\n";
	std::cin >> entry;
	switch(entry) {
		case 1:										//Summ of two numbers
		if (two == 1) {											
  	  std::cout << "What Number to interact with?" << "\n"<< "1. " <<first<<"\n"<< "2."<<second<<"\n";
		  std::cin >> choose;
  	  switch (choose) {	//if there are two numbers, it ask which to interact with
  	  	case 1:
      	first += add;
      	break;
  	  	case 2:
      	second += add;
      	break;
  	  }
  	}
  	if (two == 0)
    	first += add;
		break;
		case 2:									//Multiply
		if (two == 1) {													
  	  std::cout << "What Number to interact with?" << "\n"<< "1. " <<first<<"\n"<< "2."<<second<<"\n";
		  std::cin >> choose;
  	  switch (choose) {			//if there are two numbers, it ask which to interact with
  	  	case 1:
  	  	  first =first*mult;
  	  	  break;
  	  	case 2:
  	  	  second=second*mult;
  	  	  break;
  	  }
  	}
  	if (two == 0)
  	  first =first*mult;
		break;
	}
}