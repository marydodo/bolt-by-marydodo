# My personal keymap for the Lazydesigners' Bolt keyboard. 

### Included in my custom `marydodo/keymap.c`
  * My personal layers (four)
    * [0] alpha main layer
    * [1] number and shifted symbols
    * [2] FN and reset layer
    * [3] shift layer
    * [4] gaming layer
  * Lighting layers
    * Code to light bolt only
    * Code to light underglow only
    * Code to light all LEDs on the board


![ezgif com-gif-maker(2)](https://user-images.githubusercontent.com/56741532/174405805-63ade057-e5d4-4930-af3f-dd66d1c90f07.gif)


### Lighting Layers
This layout includes lighting layers for CAPS LOCK and for layers 1-3. Please read comments inside the `keymap.c` file for more information on the code used and how to adjust the lighting layers to light up underglow only, lightning bolt logo only, or all LEDs on the board. 

For base information about QMK lighting layers, please see the offical [QMK RBG Lighting Layers documentation.](https://docs.qmk.fm/#/feature_rgblight?id=lighting-layers)
For basic color choices, please see the official [QMK RGB Lighting colors documentation](https://docs.qmk.fm/#/feature_rgblight?id=colors)

## IMPORTANT:

### Remember to add `#define RGBLIGHT_LAYERS` in your `config.h` file.

# About the Bolt

[Info Source](https://github.com/jackytrabbit/qmk_firmware/tree/master/keyboards/lazydesigners/bolt)

A 40% ergo keyboard designed and produced by [LAZYDESIGNERS](http://lazydesigners.cn).

* Keyboard Maintainer: [LAZYDESIGNERS](https://github.com/jackytrabbit)
* Hardware Supported: Bolt
* Hardware Availability: Check [LAZYDESIGNERS's homepage.](http://lazydesigners.cn)


**Reset Key:** To enter the bootloader, either push the RESET button on the PCB or the RESET button on the [2] FN/RESET layer.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).
