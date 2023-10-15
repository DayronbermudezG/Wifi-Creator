void HomeMessage() {

    std::cout << " _       ___ _____       ______                            " << std::endl;
    std::cout << "| |     / (_) (_)     / ____/_______  ____ _/ /_____  _____" << std::endl;
    std::cout << "| | /| / / / /_/ /_____/ /   / ___/ _ \\/  `/ /  \\/ ___/" << std::endl;
    std::cout << "| |/ |/ / / / /_____/ /___/ /  /  / /_/ / /_/ /_/ / /    " << std::endl;
    std::cout << "|/|/_/_/ /_/      \\____/_/   \\___/\\,_/\\__/\\____/_/     " << std::endl;
    std::cout << "                   Creado por: DayronBG" << std::endl;
}
void Pause() {
    system("pause>nul");
}

void ConfigWifiZone(std::string wifiZoneName, std::string wifiZonePass) {
    std::string wznCommand = "netsh wlan set hostednetwork mode=allow ssid=" + wifiZoneName + "key=" + wifiZonePass;
    const char* wzn = wznCommand.c_str();
    //system("netsh wlan set hostednetwork mode=allow ssid=wifiZone key=password");
    system(wzn);
}

void StartWifiZone() {
    system("netsh wlan start hostednetwork");
}

void StopWifiZone() {
    system("netsh wlan stop hostednetwork");
}
/*
void ConfigWifiZone(std::string wifiZoneName, std::string wifiZonePass) {

    std::cout << "Nombre de la zona wifi:     " << wifiZoneName << std::endl;
    std::cout << "Contraseña de la zona wifi: " << wifiZonePass << std::endl;
}
*/