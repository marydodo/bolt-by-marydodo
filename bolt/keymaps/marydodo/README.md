## Hello there! This is my personal keymap for the Lazydesigners' Bolt keyboard. 

### Included:
  * Entire Bolt folder
    * Inclues `#define RGBLIGHT_LAYERS` in your `config.h` file
    * All other default files from the `bolt/` [QMK repository](https://github.com/qmk/qmk_firmware)
  * My personal layers (four)
    * [0] alpha main layer
    * [1] number and shifted symbols
    * [2] FN and reset layer
    * [3] shift layer
  * Lighting layers
    * Code to light bolt only
    * Code to light underglow only
    * Code to light all LEDs on the board

#### This layout includes lighting layers for layers 1-3. Please read comments for more information on the code used. 

#### For base information about QMK lighting layers, please see the offical [QMK RBG Lighting Layers documentation.](https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers)

#### For basic color choices, please see the official [QMK RGB Lighting colors documentation](https://docs.qmk.fm/#/feature_rgblight?id=colors)

## IMPORTANT: 
### If you have custom keymaps in your `qmk_firmware/keyboards/lazydesigners/bolt/` folder, please take care when pulling this folder into your machine as it will replace your current keymaps and `config.h` file. 
### If you have custom  code in  your `config.h` , just add `#define RGBLIGHT_LAYERS` in your `config.h` file and the `marydodo/` folder where my `keymap.c` exists.
