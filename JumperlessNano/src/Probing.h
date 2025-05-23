
// SPDX-License-Identifier: MIT
#ifndef PROBING_H
#define PROBING_H


extern unsigned long probingTimer;
extern long probeFrequency;
extern int probePin;
extern int buttonPin;

extern int probeSwap;
extern volatile int probeActive;

enum measuredState
{
  floating = 0,
  high = 1,
  low = 2,
  probe = 3,
  unknownState = 4 

};

int justReadProbe(void);

int voltageSelect(void);
int longShortPress(int pressLength = 500); 
int doubleSingleClick(void);
int selectFromLastFound(int print = 1);
int checkLastFound(int);
void clearLastFound(void);
int probeMode(int pin = 19, int setOrClear = 1);
int checkProbeButton();
int readFloatingOrState (int pin = 0, int row = 0);
void startProbe (long probeSpeed = 25000);
void stopProbe();
int scanRows(int pin = 0);

int readRails(int pin = 0);




#endif