# marydodo custom Bolt layout with rgb layers
## Hello there! This is my personal keymap for the Lazydesigners' Bolt keyboard. 

### Included in `keymap.c` file
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
### Add `config.h` , just add `#define RGBLIGHT_LAYERS` in your `config.h` file if you are only downloading/importing the `marydodo/` folder or just my `keymap.c` file.

---

#  About the Bolt

A 40% ergo keyboard designed and produced by [LAZYDESIGNERS](http://lazydesigners.cn).

* Keyboard Maintainer: [LAZYDESIGNERS](https://github.com/jackytrabbit)
* Hardware Supported: Bolt
* Hardware Availability: Check [LAZYDESIGNERS's homepage.](http://lazydesigners.cn)

## QMK 

Make example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo 

Flashing example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo:flash

**Reset Key:** To enter the bootloader, either push the RESET button on the PCB or the RESET button on the [2] FN/RESET layer.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## IMPORTANT: 
### If you have custom keymaps in your `qmk_firmware/keyboards/lazydesigners/bolt/` folder, please take care when pulling this folder into your machine as it will replace your current keymaps and `config.h` file.
### If you have custom  code in  your `config.h` , just add `#define RGBLIGHT_LAYERS` in your `config.h` file and the download/import the `marydodo/` folder where my `keymap.c` exists.
