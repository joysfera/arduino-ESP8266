#include "ESP8266Server.h"

void ESP8266Server::begin()
{
    for (unsigned int i = 0; i < ESP8266_MAX_CONNECTIONS; i++){
        _clients[i] = new ESP8266Client(_esp8266, i);
    }

    _esp8266.createServer(_port);
}

ESP8266Client * ESP8266Server::available()
{
    if(_esp8266.available() > 0){
        unsigned int id = _esp8266.getId();
        return _clients[id];
    } else {
        return NULL;
    }
}
