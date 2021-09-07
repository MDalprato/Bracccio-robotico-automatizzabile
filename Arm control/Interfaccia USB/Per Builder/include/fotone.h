// Fotone Revamped (C) 2008 Federico Santandrea
// C library include file

// Includes
#include <usb.h>

// Types
typedef unsigned char byte;

// Classes
class Fotone {
        private:
        bool connected;
        byte current_output;
        struct usb_dev_handle *device;
        byte DoTransaction(byte);
	~Fotone();

        public:
        Fotone();
        bool Connect();
        byte InputReadAll(void);
        void OutputWriteAll(byte);
        bool InputRead(byte);
        void OutputSet(byte);
        void OutputReset(byte);
        void OutputWrite(byte, bool);
};

