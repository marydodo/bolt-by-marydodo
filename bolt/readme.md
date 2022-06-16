# Bolt

A 40% ergo keyboard designed and produced by [LAZYDESIGNERS](http://lazydesigners.cn).

* Keyboard Maintainer: [LAZYDESIGNERS](https://github.com/jackytrabbit)
* Hardware Supported: Bolt
* Hardware Availability: Check [LAZYDESIGNERS's homepage.](http://lazydesigners.cn)

Make example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo 

Flashing example for this custom keyboard layout:

    make lazydesigners/bolt:marydodo:flash

**Reset Key:** To enter the bootloader, either push the RESET button on the PCB or the RESET button on the [2] FN/RESET layer.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## IMPORTANT: 
### If you have custom keymaps in your `qmk_firmware/keyboards/lazydesigners/bolt/` folder, please take care when pulling this folder into your machine as it will replace your current keymaps and `config.h` file.
### If you have custom  code in  your `config.h` , just add `#define RGBLIGHT_LAYERS` in your `config.h` file and the download/import the `marydodo/` folder where my `keymap.c` exists.
