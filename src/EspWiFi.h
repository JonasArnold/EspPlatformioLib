#ifndef ESP_PIO_LIB_WIFI_H_
#define ESP_PIO_LIB_WIFI_H_

#include <Arduino.h>

/* initialization */
void EspWiFi_Init();

/*  Connect to the wifi
    give ssid and passphrase as char array, 
    timeout in seconds
*/
bool EspWiFi_Connect(const char *ssid, const char *passphrase, int timeout);

/*  Disconnects from the wifi 
*/
void EspWiFi_Disconnect();

/*  Returns the local IPv4 Address of the device
*/
IPAddress EspWiFi_GetIPv4();

/*  Returns the local IPv4 Address of the device as string
*/
String EspWiFi_GetIPv4String();


#endif