## IMPORTANT:

### Remember to add `#define RGBLIGHT_LAYERS` in your `config.h` file.

#### **Reset Key:** To enter the bootloader, either push the RESET button on the PCB or the RESET key on the [2] FN/RESET layer.

### Shift Layer and Shift Key

This keymap also doesn't have a regular SHIFT key. Instead, it is set as a SHIFT LAYER. I did this so I know when I am using the shift key. If you need a regular shift key, please modify the ALPHA main layer. *(i _think_ there's a way to use shift as a temp layer with out having to use an actual keymap layer but IDK how to do that right now...)*

### Lighting Layers
This layout includes lighting layers for CAPS LOCK and for layers 1-3. Please read comments inside the `keymap.c` file for more information on the code used and how to adjust the lighting layers to light up underglow only, lightning bolt logo only, or all LEDs on the board. 

For base information about QMK lighting layers, please see the offical [QMK RBG Lighting Layers documentation.](https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers)
For basic color choices, please see the official [QMK RGB Lighting colors documentation](https://docs.qmk.fm/#/feature_rgblight?id=colors)


Make example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo 

Flashing example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo:flash

QMK

    cd ~/qmk_firmware/keyboards/lazydesigners/bolt/keymaps/marydodo 
    
    qmk compile
