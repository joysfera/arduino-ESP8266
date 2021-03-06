#ifndef ESP8266Client_h
#define ESP8266Client_h

#include <Print.h>
#include <Client.h>
#include "ESP8266.h"

#define ESP8266_CLIENT_NOT_AVAILABLE	255

class ESP8266Client : public Client
{
public:
    ESP8266Client(ESP8266& esp8266) : Client(), _esp8266(&esp8266), _id(0), _connected(false)  {}

    ESP8266Client(ESP8266& esp8266, unsigned int id) : Client(), _esp8266(&esp8266), _id(id), _connected(false)  {}

    // Prepare the client
    bool begin();

    // Connect
    int connect(const char* host, uint16_t port);
    int connect(IPAddress ip, uint16_t port);

    // Available
    int available();

    // Read
    int read();
    int read(uint8_t* buffer, size_t size);

    // Write
    size_t write(uint8_t b);
    size_t write(const char* data);
    size_t write(const uint8_t* buffer, size_t size);

    // overriding Print.print() and println() to send the string at once
    size_t print(const __FlashStringHelper *buffer);
    size_t println(const __FlashStringHelper *buffer);
    // pulling down the other print() overloads (with different arguments)
    using Print::print;
    using Print::println;

    // Peek
    int peek();

    // Flush
    void flush();

    // Stop
    void stop();

    // Connected
    uint8_t connected();

    // Connected
    operator bool();

    unsigned int getId() { return _id; }

protected:
    ESP8266* _esp8266;

    unsigned int _id;

    bool _connected;
};

#endif
