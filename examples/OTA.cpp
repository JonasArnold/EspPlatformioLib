/* 
* This example describes how to use OTA with the EspWiFi module.
*
* The following libraries need to be included:
* ESP32:
*   ESP Async WebServer
*   ayushsharma82/AsyncElegantOTA
* ESP8266:
*   ?
*
*/

/****************************/
/* INCLUDES                 */
/****************************/
#include "EspWiFi.h"
#include <ESPAsyncWebServer.h>
#include <AsyncElegantOTA.h>

/****************************/
/* GLOBAL OBJECTS           */
/****************************/
AsyncWebServer server(80);   // Create AsyncWebServer object on port 80


/****************************/
/* SETUP CODE               */
/****************************/
void setup(){
  // Start ElegantOTA
  AsyncElegantOTA.begin(&server);
  // Start server
  server.begin();
}  

/****************************/
/* LOOP CODE                */
/****************************/
void loop(){
    /* NONE */
}