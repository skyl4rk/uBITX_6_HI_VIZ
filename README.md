The HI_VIZ uBitx sketch was written for the uBitx v6. It modifies the display to provide a larger frequency readout for better readability.

This sketch is based on the UBITX_6_N8ME_2_VU3GAO_Mods sketch, and is subject to all licenses of the original code. 

Before uploading, open the file texts_inc.h, find line 50, and replace "HI VIZ HF QRP" with your call sign (or whatever text you would like to see on the banner).

If you wish to modify the buttons, you can start by changing the #define lines in the file defines.h. You may then have to modify the button positions in the file main_buttons.h. The text on the buttons may be modified in the file main_loop_button_text.cpp.

The code is available at https://github.com/skyl4rk/uBITX_6_HI_VIZ .

KC8WBK