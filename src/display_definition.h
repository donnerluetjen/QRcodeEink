// #include <GxEPD2.h>
// #include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>

#include <Arduino.h>
#define ELINK_SS 5
#define ELINK_BUSY 15
#define ELINK_RESET 2
#define ELINK_DC 0

#define MAX_DISPLAY_BUFFER_SIZE 800
#define MAX_HEIGHT_3C(EPD) (EPD::HEIGHT <= (MAX_DISPLAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8) ? EPD::HEIGHT : (MAX_DISPLAY_BUFFER_SIZE / 2) / (EPD::WIDTH / 8))
using Display_Model = GxEPD2_3C<GxEPD2_290_C90c, MAX_HEIGHT_3C(GxEPD2_290_C90c)>;
// Display_Model display(GxEPD2_290_C90c(/*CS=5*/ ELINK_SS, /*DC=*/ ELINK_DC, /*RST=*/ ELINK_RESET, /*BUSY=*/ ELINK_BUSY)); // GDEM029C90 128x296, SSD1680
using Display_Class = GxEPD2_290_C90c;