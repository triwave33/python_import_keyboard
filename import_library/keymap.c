/* Copyright 2020 @triwave33
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

enum custom_keycodes {
  CM0 = SAFE_RANGE,
  CM1,
  CM2,
  CM3,
  CM4,
  CM5,
  CM6,
  CM7
};


int lang = 1;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( 
        CM0,    CM1,    CM2,    CM3,
        CM4,    CM5,    CM6,    CM7
    )
};

/* Rotary encoder settings */
void encoder_update_user(uint16_t index, bool clockwise) {
   if (clockwise) {
        lang = 1;    //Rotary encoder clockwise
    } else {
        lang= 0;  //Rotary encoder Reverse clockwise
    }
}



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
    if (lang) {
      switch (keycode) {
	    	case CM0:
	    		SEND_STRING("import tensorflow as tf\n");
	    		return false;
	    	case CM1:
	    		SEND_STRING("import pytorch as torch\n");
	    		return false;
	    	case CM2:
	    		SEND_STRING("from sklearn.preprocessing import LabelEncoder\n");
	    		return false;
	    	case CM3:
	    		SEND_STRING("from sklearn.preprocessing import StandardScaler\n");
	    		return false;
	    	case CM4:
	    		SEND_STRING("import numpy as np\n");
	    		return false;
	    	case CM5:
	    		SEND_STRING("import matplotlib.pyplot as plt\n");
	    		return false;
	    	case CM6:
	    		SEND_STRING("import pandas as pd\n");
	    		return false;
	    	case CM7:
	    		SEND_STRING("import lightgbm as lgb\n");
	    		return false;
      }
    } else {
      switch (keycode) {
	    	case CM0:
	    		SEND_STRING("using Plots\n");
	    		return false;
	    	case CM1:
	    		SEND_STRING("using Makie\n");
	    		return false;
	    	case CM2:
	    		SEND_STRING("using Random\n");
	    		return false;
	    	case CM3:
	    		SEND_STRING("using LaTeXStrings\n");
	    		return false;
	    	case CM4:
	    		SEND_STRING("using Plots\n");
	    		return false;
	    	case CM5:
	    		SEND_STRING("using Makie\n");
	    		return false;
	    	case CM6:
	    		SEND_STRING("using Random\n");
	    		return false;
	    	case CM7:
	    		SEND_STRING("using LaTeXStrings\n");
	    		return false;
      }
    }
  }
  return true;
};


