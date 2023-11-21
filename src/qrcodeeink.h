#ifndef ESPQRCODEEINK_H
#define ESPQRCODEEINK_H

/* ESP_QRcode. e-ink version
 * Import this .h when using some e-ink display
 */

#define EINKDISPLAY

#include <qrcodedisplay.h>
#include <Adafruit_GFX.h>   
#include <GxEPD2.h>
#include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>
#include <epd3c/GxEPD2_290_C90c.h>
#include "display_definition.h"

#ifndef EINK_MODEL
#define EINK_MODEL 128
#endif

class QRcodeEink : public QRcodeDisplay
{
	private:
		Display_Model *display;
        void drawPixel(int x, int y, int color);
	public:
		
		QRcodeEink(Display_Model *display);
		void init();
		void screenwhite();
		void screenupdate();
};
#endif