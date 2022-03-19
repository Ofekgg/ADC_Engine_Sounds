
// Choose the motor sound (uncomment the one you want)
//#include "diesel.h"
//#include "v8.h"
//#include "chevyNovaV8.h"
//#include "Mustang68.h"
//#include "LaFerrari.h"
//#include "MgBGtV8.h"
#include "TrophyTruckIdle.h"

// Mode settings - These could easily be 4 jumpers connected to spare pins, checked at startup to determine mode
boolean managedThrottle = false;     // Managed mode looks after the digipot if fitted for volume, and adds some mass to the engine
boolean potThrottle = true;        // A pot connected to A1, 0-1023 sets speed
boolean pwmThrottle = false;         // Takes a standard servo signal on pin 2 (UNO)


// Pins
#define POT_PIN A4     // Pot wiper when using pot mode


// Volume, max. speed
#define DEFAULT_VOLUME 127      // Volume when in non managed mode
#define VOL_MIN 20              // Min volume in managed mode 0 - 127
#define VOL_MAX 127             // Max volume in managed mode 0 - 127
#define TOP_SPEED_MULTIPLIER 30 // RPM multiplier in managed mode, bigger the number the larger the rev range, 10 - 15 is a good place to start
