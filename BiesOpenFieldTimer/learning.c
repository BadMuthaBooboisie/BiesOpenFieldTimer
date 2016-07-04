/* BiesOpenFieldTimer v 0.3
Created by Alex Bies
Coded by Jon Clucas
Copyleft 2008 by Bad Mutha Booboisie Software under GPLv3
This is free software, and you are welcome to redistribute it under certain conditions;
see http://www.gnu.org/licenses/gpl-3.0.txt for details.*/ 


#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

void runtimer(){
  ofstream fp;
  fp.open("times.txt", fstream::app);
  time_t starting1;
  time_t stop1;
  time_t starting2;
  time_t stop2;
  time_t starting3;
  time_t stop3;
  time_t startingf;
  time_t stopf;
  time_t startings;
  time_t stops;
  time_t startingr;
  time_t stopr;
  time_t startingp;
  time_t stopp;
  time_t startingc;
  time_t stopc;
  time_t startingg;
  time_t stopg;
  time_t startingw;
  time_t stopw;
  time_t pausetime;
  /* time_t pawstime;
  time_t* now; */
  char inchar;
  int startf = 0;
  int start1 = 0;
  int start2 = 0;
  int start3 = 0;
  int startr = 0;
  int starts = 0;
  int startp = 0;
  int startc = 0;
  int startg = 0;
  int startw = 0;
  int pawstime = 0;
/*  int startpause = 0;
  double pause1;
  double pause2;
  double pause3;
  double pausef;
  double pauser;
  double pauses;
  double pausep;
  double pausec;
  double pauseg;
  double pausew;  */
  while(1){
    cin >> inchar;
/*    if((inchar == 'v') || (inchar == 'V')){
	if(startpause == 0){
		pausetime = time(NULL);
		startpause = 1;
		pause1 = difftime(pausetime,starting1);
		pause2 = difftime(pausetime,starting2);
		pause3 = difftime(pausetime,starting3);
		pausef = difftime(pausetime,startingf);
		pauser = difftime(pausetime,startingr);
		pauses = difftime(pausetime,startings);
		pausep = difftime(pausetime,startingp);
		pausec = difftime(pausetime,startingc);
		pauseg = difftime(pausetime,startingg);
		pausew = difftime(pausetime,startingw);
		fp << "Pause at ";
		fp << ctime(&pausetime);
	} else if(startpause == 1){
		pawstime = time(NULL);
		starting1 = pawstime - pause1;
 		starting2 = pawstime - pause2;
	  	starting3 = pawstime - pause3;
  		startingf = pawstime - pausef;
		startings = pawstime - pauses;
		startingr = pawstime - pauser;
		startingp = pawstime - pausep;
		startingc = pawstime - pausec;
		startingg = pawstime - pauseg;
		startingw = pawstime - pausew;
		fp << "Resume at ";
		fp << ctime(&pawstime);
	}
    }*/
	if(pawstime == 0){
    if(inchar == '1'){
      if(start1 == 0){
	if(start2 == 1){
		stop2 = time(NULL);
		fp << "Zone 2 stop: ";
		fp << ctime(&stop2);
		fp << "Zone 2 duration: ";
		fp<< difftime(stop2,starting2);
		fp << " seconds\n";
		start2 = 0;
	      }
	if(start3 == 1){
	stop3 = time(NULL);
	fp << "Zone 3 stop: ";
	fp << ctime(&stop3);
	fp << "Zone 3 duration: ";
	fp<< difftime(stop3,starting3);
		fp << " seconds\n";
	start3 = 0;
      }
	starting1 = time(NULL);
	fp << "Zone 1 start: ";
	fp << ctime(&starting1);
	start1 = 1;
      } else if(start1 == 1){
	stop1 = time(NULL);
	fp << "Zone 1 stop: ";
	fp << ctime(&stop1);
	fp << "Zone 1 duration: ";
	fp<< difftime(stop1,starting1);
		fp << " seconds\n";
	start1 = 0;
      }
    }
if(inchar == '2'){
	if(start2 == 0){
		if(start1 == 1){
		stop1 = time(NULL);
		fp << "Zone 1 stop: ";
		fp << ctime(&stop1);
		fp << "Zone 1 duration: ";
		fp<< difftime(stop1,starting1);
		fp << " seconds\n";
		start1 = 0;	
	      }
if(start3 == 1){
	stop3 = time(NULL);
	fp << "Zone 3 stop: ";
	fp << ctime(&stop3);
	fp << "Zone 3 duration: ";
	fp<< difftime(stop3,starting3);
		fp << " seconds\n";
	start3 = 0;
      }
	starting2 = time(NULL);
	fp << "Zone 2 start: ";
	fp << ctime(&starting2);
	start2 = 1;
      } else if(start2 == 1){
	stop2 = time(NULL);
	fp << "Zone 2 stop: ";
	fp << ctime(&stop2);
	fp << "Zone 2 duration: ";
	fp<< difftime(stop2,starting2);
		fp << " seconds\n";
	start2 = 0;
      }
      }
if(inchar == '3'){
	if(start3 == 0){
		if(start1 == 1){
	stop1 = time(NULL);
	fp << "Zone 1 stop: ";
	fp << ctime(&stop1);
	fp << "Zone 1 duration: ";
	fp<< difftime(stop1,starting1);
		fp << " seconds\n";
	start1 = 0;
      }
	if(start2 == 1){
	stop2 = time(NULL);
	fp << "Zone 2 stop: ";
	fp << ctime(&stop2);
	fp << "Zone 2 duration: ";
	fp<< difftime(stop2,starting2);
		fp << " seconds\n";
	start2 = 0;
      }
	starting3 = time(NULL);
	fp << "Zone 3 start: ";
	fp << ctime(&starting3);
	start3 = 1;
      } else if(start3 == 1){
	stop3 = time(NULL);
	fp << "Zone 3 stop: ";
	fp << ctime(&stop3);
	fp << "Zone 3 duration: ";
	fp<< difftime(stop3,starting3);
		fp << " seconds\n";
	start3 = 0;
      }
      }
if((inchar == 'f') || (inchar == 'F')){
      if(startf == 0){
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startingf = time(NULL);
	fp << "Freezing start: ";
	fp << ctime(&startingf);
	startf = 1;
      } else if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
      }
if((inchar == 'r') || (inchar == 'R')){
      if(startr == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startingr = time(NULL);
	fp << "Running or Locomotion start: ";
	fp << ctime(&startingr);
	startr = 1;
      } else if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
      }
if((inchar == 's') || (inchar == 'S')){
      if(starts == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startings = time(NULL);
	fp << "Sleeping start: ";
	fp << ctime(&startings);
	starts = 1;
      } else if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
      }
if((inchar == 'b') || (inchar == 'B')){
      if(startp == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startingp = time(NULL);
	fp << "Bathroom start: ";
	fp << ctime(&startingp);
	startp = 1;
      } else if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
      }
if((inchar == 'c') || (inchar == 'C')){
      if(startc == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startingc = time(NULL);
	fp << "Crouching start: ";
	fp << ctime(&startingc);
	startc = 1;
      } else if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
      }
if((inchar == 'g') || (inchar == 'G')){
      if(startg == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
	startingg = time(NULL);
	fp << "Grooming start: ";
	fp << ctime(&startingg);
	startg = 1;
      } else if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds\n";
	startg = 0;
      }
      }
if((inchar == 'w') || (inchar == 'W')){
      if(startw == 0){
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds\n";
	startc = 0;
      }
	startingw = time(NULL);
	fp << "Wallclimb start: ";
	fp << ctime(&startingw);
	startw = 1;
      } else if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds\n";
	startw = 0;
      }
      }
}
if((inchar == 'p') || (inchar == 'P')){
	if(pawstime == 0){
	if(start1 == 1){
	stop1 = time(NULL);
	fp << "Zone 1 pause: ";
	fp << ctime(&stop1);
	fp << "Zone 1 duration: ";
	fp<< difftime(stop1,starting1);
	fp << " seconds(+)\n";
      }
if(start2 == 1){
		stop2 = time(NULL);
		fp << "Zone 2 pause: ";
		fp << ctime(&stop2);
		fp << "Zone 2 duration: ";
		fp<< difftime(stop2,starting2);
		fp << " seconds(+)\n";
	      }
	if(start3 == 1){
	stop3 = time(NULL);
	fp << "Zone 3 pause: ";
	fp << ctime(&stop3);
	fp << "Zone 3 duration: ";
	fp<< difftime(stop3,starting3);
		fp << " seconds(+)\n";
      }
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing pause: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds(+)\n";
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion pause: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds(+)\n";
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping pause: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds(+)\n";
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom pause: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds(+)\n";
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching pause: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds(+)\n";
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming pause: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds(+)\n";
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb pause: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds(+)\n";
      }
	pawstime = 1;
	cout << "PAUSED!  Press the 'p' key to continue!\n";
	} else if (pawstime == 1){
	pausetime = time(NULL);
	starting1 = pausetime;
	starting2 = pausetime;
 	starting3 = pausetime;
 	startingf = pausetime;
  	startings = pausetime;
  	startingr = pausetime;
  	startingp = pausetime;
   	startingc = pausetime;
   	startingg = pausetime;
   	startingw = pausetime;
	if(start1 == 1){
		fp << "Zone 1 unpause: ";
		fp << ctime(&starting1);
	}
	if(start2 == 1){
		fp << "Zone 2 unpause: ";
		fp << ctime(&starting1);
	}
	if(start3 == 1){
		fp << "Zone 3 unpause: ";
		fp << ctime(&starting1);
	}
	if(startp == 1){
		fp << "Bathroom unpause: ";
		fp << ctime(&starting1);
	}
	if(startc == 1){
		fp << "Croutching unpause: ";
		fp << ctime(&starting1);
	}
	if(startf == 1){
		fp << "Freezing unpause: ";
		fp << ctime(&starting1);
	}
	if(startg == 1){
		fp << "Grooming unpause: ";
		fp << ctime(&starting1);
	}
	if(startr == 1){
		fp << "Running or Locomotion unpause: ";
		fp << ctime(&starting1);
	}
	if(starts == 1){
		fp << "Sleeping unpause: ";
		fp << ctime(&starting1);
	}
	if(startw == 1){
		fp << "Wallclimb unpause: ";
		fp << ctime(&starting1);
	}
	pawstime = 0;
}
}
if((inchar == 'q') || (inchar == 'Q')){
	if(start1 == 1){
	stop1 = time(NULL);
	fp << "Zone 1 stop: ";
	fp << ctime(&stop1);
	fp << "Zone 1 duration: ";
	fp<< difftime(stop1,starting1);
		fp << " seconds(+)\n";
	start1 = 0;
      }
if(start2 == 1){
		stop2 = time(NULL);
		fp << "Zone 2 stop: ";
		fp << ctime(&stop2);
		fp << "Zone 2 duration: ";
		fp<< difftime(stop2,starting2);
		fp << " seconds(+)\n";
		start2 = 0;
	      }
	if(start3 == 1){
	stop3 = time(NULL);
	fp << "Zone 3 stop: ";
	fp << ctime(&stop3);
	fp << "Zone 3 duration: ";
	fp<< difftime(stop3,starting3);
		fp << " seconds(+)\n";
	start3 = 0;
      }
	if(startf == 1){
	stopf = time(NULL);
	fp << "Freezing stop: ";
	fp << ctime(&stopf);
	fp << "Freezing duration: ";
	fp << difftime(stopf,startingf);
		fp << " seconds(+)\n";
	startf = 0;
      }
	if(startr == 1){
	stopr = time(NULL);
	fp << "Running or Locomotion stop: ";
	fp << ctime(&stopr);
	fp << "Running or Locomotion duration: ";
	fp << difftime(stopr,startingr);
		fp << " seconds(+)\n";
	startr = 0;
      }
	if(starts == 1){
	stops = time(NULL);
	fp << "Sleeping stop: ";
	fp << ctime(&stops);
	fp << "Sleeping duration: ";
	fp << difftime(stops,startings);
		fp << " seconds(+)\n";
	starts = 0;
      }
	if(startp == 1){
	stopp = time(NULL);
	fp << "Bathroom stop: ";
	fp << ctime(&stopp);
	fp << "Bathroom duration: ";
	fp << difftime(stopp,startingp);
		fp << " seconds(+)\n";
	startp = 0;
      }
	if(startc == 1){
	stopc = time(NULL);
	fp << "Crouching stop: ";
	fp << ctime(&stopc);
	fp << "Crouching duration: ";
	fp << difftime(stopc,startingc);
		fp << " seconds(+)\n";
	startc = 0;
      }
	if(startg == 1){
	stopg = time(NULL);
	fp << "Grooming stop: ";
	fp << ctime(&stopg);
	fp << "Grooming duration: ";
	fp << difftime(stopg,startingg);
		fp << " seconds(+)\n";
	startg = 0;
      }
	if(startw == 1){
	stopw = time(NULL);
	fp << "Wallclimb stop: ";
	fp << ctime(&stopw);
	fp << "Wallclimb duration: ";
	fp << difftime(stopw,startingw);
		fp << " seconds(+)\n";
	startw = 0;
      }
      return;
	}
  }
  fp.close();
}

void instruct(){
	system("clear");
	cout << "The timer records the time when you press <enter>.\nIf you put more than one character on a line,\neach of these characters will be recorded with the same time\n-- the next time you press <enter>.\nThe charcters are:\n\t1 - Zone 1\n\t2 - Zone 2\n\t3 - Zone 3\n\tb - Bathroom\n\tc - Crouching\n\tf - Freezing\n\tg - Grooming\n\tr - Running or Locomotion\n\ts - Sleeping\n\tw - Wallclimb\n\tp - Pause\n\tq - Quit\nCapitalization does not matter.\n";
}

void readme(){
	ifstream test;
	char inch;
	test.open("README.txt");
	if(test.is_open()){
		test.close();
		return;
	} else {
		system("clear");
		cout << "BiesOpenFieldTimer v 0.3\nCreated by Alex Bies\nCoded by Jon Clucas\nCopyleft 2008 by Bad Mutha Booboisie Software under GPLv3\nThis is free software, and you are welcome to redistribute it under certain conditions;\nsee http://www.gnu.org/licenses/gpl-3.0.txt for details.\nTo avoid this message, redownload the README file and save it in the folder that contains this executable\n\nType \"ok\" and press <enter> to continue\n";
		cin >> inch;
		return;
	}
}

void farewell(){
	system("clear");
	cout << "Your data have been appended to \"times.txt\".\nIf \"times.txt\" did not exist previously, the file has been created.\n";
}

int main(){
  readme();
  instruct();
  runtimer();
  farewell();
  return 0;
}
