#include "ESP8266Server.h"

void ESP8266Server::begin()
{
    _esp8266.createServer(_port);
}

ESP8266Client ESP8266Server::available()
{
    unsigned int id = ESP8266_MAX_CONNECTIONS; // = not available
    if (_esp8266.available() > 0)
        id = _esp8266.getId();
    ESP8266Client client(_esp8266, id);
    return client;
}
