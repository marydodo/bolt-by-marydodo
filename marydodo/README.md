## IMPORTANT:

### Remember to add `#define RGBLIGHT_LAYERS` in your `config.h` file.

#### **Reset Key:** To enter the bootloader, either push the RESET button on the PCB or the RESET key on the [2] FN/RESET layer.

Make example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo 

Flashing example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo:flash

QMK

    cd ~/qmk_firmware/keyboards/lazydesigners/bolt/keymaps/marydodo 
    
    qmk compile
