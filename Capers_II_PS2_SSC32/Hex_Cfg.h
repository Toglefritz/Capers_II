//  Project: Capers II Hexapod
//  Author: Toglefritz

//  Description: 
//    This is the hardware configuration file for the hexapod.

#ifndef HEX_CFG_PHOENIX3_H
#define HEX_CFG_PHOENIX3_H
//[CONDITIONAL COMPILING] - COMMENT IF NOT WANTED
// Define other optional compnents to be included or not...
#define OPT_TERMINAL_MONITOR  

#ifdef OPT_TERMINAL_MONITOR   // turning off terminal monitor will turn these off as well...
//#define OPT_SSC_FORWARDER  // only useful if terminal monitor is enabled
#define OPT_FIND_SERVO_OFFSETS    // Only useful if terminal monitor is enabled
#endif

#define OPT_GPPLAYER

// Which type of control(s) do you want to compile in
#define DBGSerial         Serial
//#define DEBUG_IOPINS

#if defined(UBRR1H)
#define SSCSerial         Serial1
#else
#endif

#define USEPS2

#define USE_SSC32

#define cSSC_BAUD        38400   //SSC32 BAUD rate

//  /////////////////////////////////
//  /// Botboarduino Pin Numbers  ///
//  /////////////////////////////////

#define SOUND_PIN    5        // Botboarduino JR pin number
#define PS2_DAT      6        
#define PS2_CMD      7
#define PS2_SEL      8
#define PS2_CLK      9
// If we are using a SSC-32 then:
// If were are running on an Arduino Mega we will use one of the hardware serial port, default to Serial1 above.
// If on Non mega, if the IO pins are set to 0, we will overload the hardware Serial port 
// Else we will user SoftwareSerial to talk to the SSC-32
#define cSSC_OUT     12      	//Output pin for (SSC32 RX) on BotBoard (Yellow)
#define cSSC_IN      13      	//Input pin for (SSC32 TX) on BotBoard (Blue)

//  ///////////////////////
//  /// SSC PIN NUMBERS ///
//  ///////////////////////
// This section defines which servos are connected to which pins on the SSC32
#define cRRCoxaPin      0   //Rear Right leg Hip Horizontal
#define cRRFemurPin     1   //Rear Right leg Hip Vertical
#define cRRTibiaPin     2   //Rear Right leg Knee

#define cRMCoxaPin      4   //Middle Right leg Hip Horizontal
#define cRMFemurPin     5   //Middle Right leg Hip Vertical
#define cRMTibiaPin     6   //Middle Right leg Knee

#define cRFCoxaPin      8   //Front Right leg Hip Horizontal
#define cRFFemurPin     9   //Front Right leg Hip Vertical
#define cRFTibiaPin     10   //Front Right leg Knee

#define cLRCoxaPin      16   //Rear Left leg Hip Horizontal
#define cLRFemurPin     17   //Rear Left leg Hip Vertical
#define cLRTibiaPin     18   //Rear Left leg Knee

#define cLMCoxaPin      20   //Middle Left leg Hip Horizontal
#define cLMFemurPin     21   //Middle Left leg Hip Vertical
#define cLMTibiaPin     22   //Middle Left leg Knee

#define cLFCoxaPin      24   //Front Left leg Hip Horizontal
#define cLFFemurPin     25   //Front Left leg Hip Vertical
#define cLFTibiaPin     26   //Front Left leg Knee

//  ///////////////////////
//  /// MIN/MAX ANGLES  ///
//  ///////////////////////
// This section defines the mechanical limits of the legs as a safety mechanism that
// prevents the servos from being driven too far and damaging themselves or other 
// parts of the hexapod.

//  Mechanical limits of the Right Rear Leg, decimals = 1
#define cRRCoxaMin1	-260
#define cRRCoxaMax1	740
#define cRRFemurMin1	-1010
#define cRRFemurMax1	950
#define cRRTibiaMin1	-1060
#define cRRTibiaMax1	770

//  Mechanical limits of the Right Middle Leg, decimals = 1
#define cRMCoxaMin1	-530	
#define cRMCoxaMax1	530
#define cRMFemurMin1	-1010
#define cRMFemurMax1	950
#define cRMTibiaMin1	-1060
#define cRMTibiaMax1	770

//  Mechanical limits of the Right Front Leg, decimals = 1
#define cRFCoxaMin1	-580	
#define cRFCoxaMax1	740
#define cRFFemurMin1	-1010
#define cRFFemurMax1	950
#define cRFTibiaMin1	-1060
#define cRFTibiaMax1	770

//  Mechanical limits of the Left Rear Leg, decimals = 1
#define cLRCoxaMin1	-740	
#define cLRCoxaMax1	260
#define cLRFemurMin1	-950
#define cLRFemurMax1	1010
#define cLRTibiaMin1	-770
#define cLRTibiaMax1	1060

//  Mechanical limits of the Left Middle Leg, decimals = 1
#define cLMCoxaMin1	-530	
#define cLMCoxaMax1	530
#define cLMFemurMin1	-950
#define cLMFemurMax1	1010
#define cLMTibiaMin1	-770
#define cLMTibiaMax1	1060

//  Mechanical limits of the Left Front Leg, decimals = 1
#define cLFCoxaMin1	-740	
#define cLFCoxaMax1	580
#define cLFFemurMin1	-950
#define cLFFemurMax1	1010
#define cLFTibiaMin1	-770
#define cLFTibiaMax1	1060

//  ///////////////////////
//  /// LEG DIMENSIONS  ///
//  ///////////////////////
// This section defines the length of each section of each leg. The dimensions are measured from the center
// of one servo horn to the center of the adjacent servo horn.

// There are two ways this section can be configured. First, if all the sections of all the legs are
// the same length, universal dimensions can be used. These are the dimensions with XX in the beginning
// part.
#define cXXCoxaLength     29    // This is for TH3-R legs
#define cXXFemurLength    76
#define cXXTibiaLength    106

// If the lengths of each leg are not the same, the legs that differ from the universal lengths can be
// set individually in th sections below.
//  Right Rear (RR) leg
#define cRRCoxaLength     cXXCoxaLength	    
#define cRRFemurLength    cXXFemurLength
#define cRRTibiaLength    cXXTibiaLength

//  Right middle (RM) leg
#define cRMCoxaLength     cXXCoxaLength	    
#define cRMFemurLength    cXXFemurLength
#define cRMTibiaLength    cXXTibiaLength

//  Rigth front (RF) leg
#define cRFCoxaLength     cXXCoxaLength	    
#define cRFFemurLength    cXXFemurLength
#define cRFTibiaLength    cXXTibiaLength
  
//  Left Rear (LR) leg
#define cLRCoxaLength     cXXCoxaLength	    
#define cLRFemurLength    cXXFemurLength
#define cLRTibiaLength    cXXTibiaLength

//  Left middle (LM) leg
#define cLMCoxaLength     cXXCoxaLength	    
#define cLMFemurLength    cXXFemurLength
#define cLMTibiaLength    cXXTibiaLength

//  Left front (LF) leg
#define cLFCoxaLength     cXXCoxaLength	    
#define cLFFemurLength    cXXFemurLength
#define cLFTibiaLength    cXXTibiaLength


//  ///////////////////////
//  /// BODY DIMENSIONS ///
//  ///////////////////////
//  This section defines the size of the robot's body.

#define cRRCoxaAngle1   -600        //  Default Coxa setup angle, decimals = 1
#define cRMCoxaAngle1    0          //  Default Coxa setup angle, decimals = 1
#define cRFCoxaAngle1    600        //  Default Coxa setup angle, decimals = 1
#define cLRCoxaAngle1    -600       //  Default Coxa setup angle, decimals = 1
#define cLMCoxaAngle1    0          //  Default Coxa setup angle, decimals = 1
#define cLFCoxaAngle1    600        //  Default Coxa setup angle, decimals = 1

#define cRROffsetX 	-43	    //  Distance X from center of the body to the Right Rear coxa
#define cRROffsetZ 	82	    //  Distance Z from center of the body to the Right Rear coxa
#define cRMOffsetX 	-63	    //  Distance X from center of the body to the Right Middle coxa
#define cRMOffsetZ 	0	      //  Distance Z from center of the body to the Right Middle coxa
#define cRFOffsetX 	-43	    //  Distance X from center of the body to the Right Front coxa
#define cRFOffsetZ 	-82	    //  Distance Z from center of the body to the Right Front coxa

#define cLROffsetX 	43	    //  Distance X from center of the body to the Left Rear coxa
#define cLROffsetZ 	82	    //  Distance Z from center of the body to the Left Rear coxa
#define cLMOffsetX 	63	    //  Distance X from center of the body to the Left Middle coxa
#define cLMOffsetZ 	0	      //  Distance Z from center of the body to the Left Middle coxa
#define cLFOffsetX 	43	    //  Distance X from center of the body to the Left Front coxa
#define cLFOffsetZ 	-82	    //  Distance Z from center of the body to the Left Front coxa

//  /////////////////////////////
//  /// START POSITIONS FEET  ///
//  /////////////////////////////
// This section specifies the starting positions of the feet. The robot will assume a 
// position with the feet at these starting positions on startup.

#define cHexInitXZ	 105 
#define CHexInitXZCos60  53        // COS(60) = .5
#define CHexInitXZSin60  91        // sin(60) = .866
#define CHexInitY	 25

#define cRRInitPosX     CHexInitXZCos60      // Start positions of the Right Rear leg
#define cRRInitPosY     CHexInitY
#define cRRInitPosZ     CHexInitXZSin60

#define cRMInitPosX     cHexInitXZ      //  Start positions of the Right Middle leg
#define cRMInitPosY     CHexInitY
#define cRMInitPosZ     0

#define cRFInitPosX     CHexInitXZCos60      // Start positions of the Right Front leg
#define cRFInitPosY     CHexInitY
#define cRFInitPosZ     -CHexInitXZSin60

#define cLRInitPosX     CHexInitXZCos60      // Start positions of the Left Rear leg
#define cLRInitPosY     CHexInitY
#define cLRInitPosZ     CHexInitXZSin60

#define cLMInitPosX     cHexInitXZ      //  Start positions of the Left Middle leg
#define cLMInitPosY     CHexInitY
#define cLMInitPosZ     0

#define cLFInitPosX     CHexInitXZCos60      // Start positions of the Left Front leg
#define cLFInitPosY     CHexInitY
#define cLFInitPosZ     -CHexInitXZSin60

#endif CFG_HEX_H



