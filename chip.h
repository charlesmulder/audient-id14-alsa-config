#ifndef ID14_CHIP_H
#define ID14_CHIP_H

#include "common.h"

struct snd_id14_chip {
    struct usb_device *dev;
    struct snd_card *card;
    int intf_count; /* number of registered interfaces */
    int regidx; /* index in module parameter arrays */
    bool shutdown;
};

#endif /* ID14_CHIP_H */
