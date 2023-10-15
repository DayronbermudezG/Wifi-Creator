
/******************************************************************
 *                                                                *  
 *  _       ___ _____       ______                __              *
 * | |     / (_) __(_)     / ____/_______  ____ _/ /_____  _____  *
 * | | /| / / / /_/ /_____/ /   / ___/ _ \/ __ `/ __/ __ \/ ___/  *
 * | |/ |/ / / __/ /_____/ /___/ /  /  __/ /_/ / /_/ /_/ / /      *
 * |__/|__/_/_/ /_/      \____/_/   \___/\__,_/\__/\____/_/       *
 *                                                                *
 * Wifi-creator.cpp                                               *
 * Creador: DayronBG                                              *
 ******************************************************************/
#include <iostream>
#include "lib/wifiLib.h"

int main() {

    std::string wifiZoneName = "ZoneWifi";
    std::string wifiZonePass = "password";

    HomeMessage();
    ConfigWifiZone(wifiZoneName, wifiZonePass);
    StartWifiZone();
    std::cout << "Zona wifi creada.\n";
    StopWifiZone();
    Pause();

    return 0;
}