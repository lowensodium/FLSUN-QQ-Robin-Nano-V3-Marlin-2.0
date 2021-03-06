/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Polish - includes accented characters
 *
 * LCD Menu Messages
 * See also https://marlinfw.org/docs/development/lcd_language.html
 *
 * Substitutions are applied for the following characters when used
 * in menu items that call lcd_put_u8str_ind_P with an index:
 *
 *   $ displays an inserted C-string
 *   = displays  '0'....'10' for indexes 0 - 10
 *   ~ displays  '1'....'11' for indexes 0 - 10
 *   * displays 'E1'...'E11' for indexes 0 - 10 (By default. Uses LCD_FIRST_TOOL)
 *   @ displays an axis name such as XYZUVW, or E for an extruder
 */

#define DISPLAY_CHARSET_ISO10646_PL

namespace Language_pl {
  using namespace Language_en; // Inherit undefined strings from English

  constexpr uint8_t CHARSIZE              = 2;
  LSTR LANGUAGE                           = _UxGT("Polski");

  LSTR WELCOME_MSG                        = MACHINE_NAME _UxGT(" gotowy.");
  LSTR MSG_YES                            = _UxGT("TAK");
  LSTR MSG_NO                             = _UxGT("NIE");
  LSTR MSG_BACK                           = _UxGT("Wstecz");
  LSTR MSG_MEDIA_ABORTING                 = _UxGT("Przerywanie...");
  LSTR MSG_MEDIA_INSERTED                 = _UxGT("Karta w??o??ona");
  LSTR MSG_MEDIA_REMOVED                  = _UxGT("Karta usuni??ta");
  LSTR MSG_MEDIA_WAITING                  = _UxGT("Oczekiwanie na kart??");
  LSTR MSG_MEDIA_INIT_FAIL                = _UxGT("B????d inicializacji karty");
  LSTR MSG_MEDIA_READ_ERROR               = _UxGT("B??ad odczytu karty");
  LSTR MSG_MEDIA_USB_REMOVED              = _UxGT("Urz??dzenie USB usuni??te");
  LSTR MSG_MEDIA_USB_FAILED               = _UxGT("B????d uruchomienia USB");
  LSTR MSG_LCD_ENDSTOPS                   = _UxGT("Kra??c??w."); // Max length 8 characters
  LSTR MSG_LCD_SOFT_ENDSTOPS              = _UxGT("Progr. Kra??c??wki");
  LSTR MSG_MAIN                           = _UxGT("Menu g????wne");
  LSTR MSG_ADVANCED_SETTINGS              = _UxGT("Ustawienie zaawansowane");
  LSTR MSG_CONFIGURATION                  = _UxGT("Konfiguracja");
  LSTR MSG_RUN_AUTO_FILES                 = _UxGT("Autostart");
  LSTR MSG_DISABLE_STEPPERS               = _UxGT("Wy????cz silniki");
  LSTR MSG_DEBUG_MENU                     = _UxGT("Menu Debugowania");
  LSTR MSG_PROGRESS_BAR_TEST              = _UxGT("Testowy pasek post??pu");
  LSTR MSG_AUTO_HOME                      = _UxGT("Pozycja zerowa");
  LSTR MSG_AUTO_HOME_X                    = _UxGT("Zeruj X");
  LSTR MSG_AUTO_HOME_Y                    = _UxGT("Zeruj Y");
  LSTR MSG_AUTO_HOME_Z                    = _UxGT("Zeruj Z");
  LSTR MSG_AUTO_Z_ALIGN                   = _UxGT("Autowyr??wnanie Z");
  LSTR MSG_DECREASING_ACCURACY            = _UxGT("Spadek dok??adno??ci!");
  LSTR MSG_ACCURACY_ACHIEVED              = _UxGT("Osi??gni??to dok??adno????");
  LSTR MSG_LEVEL_BED_HOMING               = _UxGT("Pozycja zerowa");
  LSTR MSG_LEVEL_BED_WAITING              = _UxGT("Kliknij by rozp.");
  LSTR MSG_LEVEL_BED_NEXT_POINT           = _UxGT("Nast??pny punkt");
  LSTR MSG_LEVEL_BED_DONE                 = _UxGT("Wypoziomowano!");
  LSTR MSG_Z_FADE_HEIGHT                  = _UxGT("Wys. zanikania");
  LSTR MSG_SET_HOME_OFFSETS               = _UxGT("Ust. poz. zer.");
  LSTR MSG_HOME_OFFSETS_APPLIED           = _UxGT("Poz. zerowa ust.");
  LSTR MSG_SET_ORIGIN                     = _UxGT("Ustaw punkt zero");
  LSTR MSG_SELECT_ORIGIN                  = _UxGT("Wybierz punkt zero");
  LSTR MSG_LAST_VALUE_SP                  = _UxGT("Poprzednia warto???? ");
  #if HAS_PREHEAT
    LSTR MSG_PREHEAT_1                    = _UxGT("Rozgrzej ") PREHEAT_1_LABEL;
    LSTR MSG_PREHEAT_1_H                  = _UxGT("Rozgrzej ") PREHEAT_1_LABEL " ~";
    LSTR MSG_PREHEAT_1_END                = _UxGT("Rozgrzej ") PREHEAT_1_LABEL _UxGT(" Dysza");
    LSTR MSG_PREHEAT_1_END_E              = _UxGT("Rozgrzej ") PREHEAT_1_LABEL _UxGT(" Dysza ~");
    LSTR MSG_PREHEAT_1_ALL                = _UxGT("Rozgrzej ") PREHEAT_1_LABEL _UxGT(" wsz.");
    LSTR MSG_PREHEAT_1_BEDONLY            = _UxGT("Rozgrzej ") PREHEAT_1_LABEL _UxGT(" st????");
    LSTR MSG_PREHEAT_1_SETTINGS           = _UxGT("Rozgrzej ") PREHEAT_1_LABEL _UxGT(" ustaw.");

    LSTR MSG_PREHEAT_M                    = _UxGT("Rozgrzej $");
    LSTR MSG_PREHEAT_M_H                  = _UxGT("Rozgrzej $ ~");
    LSTR MSG_PREHEAT_M_END                = _UxGT("Rozgrzej $ Dysza");
    LSTR MSG_PREHEAT_M_END_E              = _UxGT("Rozgrzej $ Dysza ~");
    LSTR MSG_PREHEAT_M_ALL                = _UxGT("Rozgrzej $ wsz.");
    LSTR MSG_PREHEAT_M_BEDONLY            = _UxGT("Rozgrzej $ st????");
    LSTR MSG_PREHEAT_M_SETTINGS           = _UxGT("Rozgrzej $ ustaw.");
  #endif
  LSTR MSG_PREHEAT_CUSTOM                 = _UxGT("Rozgrzej w??asne ust.");
  LSTR MSG_COOLDOWN                       = _UxGT("Ch??odzenie");

  LSTR MSG_CUTTER_FREQUENCY               = _UxGT("Cz??stotliwo????");
  LSTR MSG_LASER_MENU                     = _UxGT("Sterowanie Lasera");
  LSTR MSG_SPINDLE_MENU                   = _UxGT("Sterowanie wrzeciona");
  LSTR MSG_LASER_POWER                    = _UxGT("Zasilanie Lasera");
  LSTR MSG_SPINDLE_POWER                  = _UxGT("Zasilanie wrzeciona");
  LSTR MSG_SPINDLE_REVERSE                = _UxGT("Rewers wrzeciona");
  LSTR MSG_SWITCH_PS_ON                   = _UxGT("W????cz zasilacz");
  LSTR MSG_SWITCH_PS_OFF                  = _UxGT("Wy????cz zasilacz");
  LSTR MSG_EXTRUDE                        = _UxGT("Ekstruzja");
  LSTR MSG_RETRACT                        = _UxGT("Wycofanie");
  LSTR MSG_MOVE_AXIS                      = _UxGT("Ruch osi");
  LSTR MSG_BED_LEVELING                   = _UxGT("Poziomowanie sto??u");
  LSTR MSG_LEVEL_BED                      = _UxGT("Wypoziomuj st????");
  LSTR MSG_BED_TRAMMING                   = _UxGT("Naro??niki poziomowania");
  LSTR MSG_NEXT_CORNER                    = _UxGT("Nastepny naro??nik");
  LSTR MSG_MESH_EDITOR                    = _UxGT("Edytor siatki");
  LSTR MSG_EDIT_MESH                      = _UxGT("Edycja siatki");
  LSTR MSG_EDITING_STOPPED                = _UxGT("Edycja siatki zatrzymana");
  LSTR MSG_PROBING_POINT                  = _UxGT("Punkt pomiarowy");
  LSTR MSG_MESH_X                         = _UxGT("Indeks X");
  LSTR MSG_MESH_Y                         = _UxGT("Indeks Y");
  LSTR MSG_MESH_EDIT_Z                    = _UxGT("Warto???? Z");
  LSTR MSG_CUSTOM_COMMANDS                = _UxGT("W??asne Polecenia");
  LSTR MSG_M48_TEST                       = _UxGT("M48 Test sondy");
  LSTR MSG_M48_POINT                      = _UxGT("M48 Punky");
  LSTR MSG_M48_DEVIATION                  = _UxGT("Odchylenie");
  LSTR MSG_IDEX_MENU                      = _UxGT("Tryb IDEX");
  LSTR MSG_OFFSETS_MENU                   = _UxGT("Przesuni??cie narz??dzia");
  LSTR MSG_IDEX_MODE_AUTOPARK             = _UxGT("Auto-Parkowanie");
  LSTR MSG_IDEX_MODE_DUPLICATE            = _UxGT("Duplikowanie");
  LSTR MSG_IDEX_MODE_MIRRORED_COPY        = _UxGT("Kopia lustrzana");
  LSTR MSG_IDEX_MODE_FULL_CTRL            = _UxGT("Pe??ne sterowanie");
  LSTR MSG_HOTEND_OFFSET_Z                = _UxGT("2ga dysza Z");
  LSTR MSG_HOTEND_OFFSET_A                = _UxGT("2ga dysza @");
  LSTR MSG_UBL_DOING_G29                  = _UxGT("Wykonywanie G29");
  LSTR MSG_UBL_TOOLS                      = _UxGT("Narz??dzia UBL");
  LSTR MSG_LCD_TILTING_MESH               = _UxGT("Punkt pochylenia");
  LSTR MSG_UBL_MANUAL_MESH                = _UxGT("R??czne Budowanie Siatki");
  LSTR MSG_UBL_BC_INSERT                  = _UxGT("Umie???? podk??adk?? i zmierz");
  LSTR MSG_UBL_BC_INSERT2                 = _UxGT("Zmierz");
  LSTR MSG_UBL_BC_REMOVE                  = _UxGT("Usu?? & Zmierz St????");
  LSTR MSG_UBL_MOVING_TO_NEXT             = _UxGT("Przesuwanie do nast??pnego");
  LSTR MSG_UBL_ACTIVATE_MESH              = _UxGT("Aktywacja UBL");
  LSTR MSG_UBL_DEACTIVATE_MESH            = _UxGT("Dezaktywacja UBL");
  LSTR MSG_UBL_SET_TEMP_BED               = _UxGT("Temperatura sto??u");
  LSTR MSG_UBL_BED_TEMP_CUSTOM            = _UxGT("Temperatura sto??u");
  LSTR MSG_UBL_SET_TEMP_HOTEND            = _UxGT("Temperatura dyszy");
  LSTR MSG_UBL_HOTEND_TEMP_CUSTOM         = _UxGT("Temperatura dyszy");
  LSTR MSG_UBL_MESH_EDIT                  = _UxGT("Edycja siatki");
  LSTR MSG_UBL_EDIT_CUSTOM_MESH           = _UxGT("Edycja w??asnej siatki");
  LSTR MSG_UBL_FINE_TUNE_MESH             = _UxGT("Dostrajanie siatki");
  LSTR MSG_UBL_DONE_EDITING_MESH          = _UxGT("Koniec edycji siati");
  LSTR MSG_UBL_BUILD_CUSTOM_MESH          = _UxGT("Buduj w??asna siatk??");
  LSTR MSG_UBL_BUILD_MESH_MENU            = _UxGT("Buduj siatk??");
  LSTR MSG_UBL_BUILD_MESH_M               = _UxGT("Buduj siatk?? ($)");
  LSTR MSG_UBL_BUILD_COLD_MESH            = _UxGT("Buduj siatk?? na zimno");
  LSTR MSG_UBL_MESH_HEIGHT_ADJUST         = _UxGT("Dostrojenie wysoko??ci siatki");
  LSTR MSG_UBL_MESH_HEIGHT_AMOUNT         = _UxGT("Warto???? wysoko??ci");
  LSTR MSG_UBL_VALIDATE_MESH_MENU         = _UxGT("Sprawdzenie siatki");
  LSTR MSG_UBL_VALIDATE_MESH_M            = _UxGT("Sprawdzenie siatki ($)");
  LSTR MSG_UBL_VALIDATE_CUSTOM_MESH       = _UxGT("Sprawdzenie w??asnej siatki");
  LSTR MSG_G26_HEATING_BED                = _UxGT("G26 Nagrzewanie sto??u");
  LSTR MSG_G26_HEATING_NOZZLE             = _UxGT("G26 Nagrzewanie dyszy");
  LSTR MSG_G26_MANUAL_PRIME               = _UxGT("Nape??nianie r??czne...");
  LSTR MSG_G26_FIXED_LENGTH               = _UxGT("Nape??nij kre??lon?? d??ugo??ci??");
  LSTR MSG_G26_PRIME_DONE                 = _UxGT("Nape??nianie zako??czone");
  LSTR MSG_G26_CANCELED                   = _UxGT("G26 Przewane");
  LSTR MSG_G26_LEAVING                    = _UxGT("Opuszczanie G26");
  LSTR MSG_UBL_CONTINUE_MESH              = _UxGT("Kontynuuj tworzenie siatki");
  LSTR MSG_UBL_MESH_LEVELING              = _UxGT("Poziomowanie siatk??");
  LSTR MSG_UBL_3POINT_MESH_LEVELING       = _UxGT("Poziomowaie 3-punktowe");
  LSTR MSG_UBL_GRID_MESH_LEVELING         = _UxGT("Poziomowaie wed??ug siatki");
  LSTR MSG_UBL_MESH_LEVEL                 = _UxGT("Poziomuj siatk??");
  LSTR MSG_UBL_SIDE_POINTS                = _UxGT("Punkty boczne");
  LSTR MSG_UBL_MAP_TYPE                   = _UxGT("Rodzaj mapy");
  LSTR MSG_UBL_OUTPUT_MAP                 = _UxGT("Wyslij map?? siatki");
  LSTR MSG_UBL_OUTPUT_MAP_HOST            = _UxGT("Wyslij do Hosta");
  LSTR MSG_UBL_OUTPUT_MAP_CSV             = _UxGT("Wyslij do CSV");
  LSTR MSG_UBL_OUTPUT_MAP_BACKUP          = _UxGT("Kopia poza drukark??");
  LSTR MSG_UBL_INFO_UBL                   = _UxGT("Wyslij info UBL");
  LSTR MSG_UBL_FILLIN_AMOUNT              = _UxGT("Stopie?? wype??nienia");
  LSTR MSG_UBL_MANUAL_FILLIN              = _UxGT("R??czne wype??nienie");
  LSTR MSG_UBL_SMART_FILLIN               = _UxGT("Inteligentne wype??nienie");
  LSTR MSG_UBL_FILLIN_MESH                = _UxGT("Wype??nienie siatki");
  LSTR MSG_UBL_INVALIDATE_ALL             = _UxGT("Uniewa??nij wszystko");
  LSTR MSG_UBL_INVALIDATE_CLOSEST         = _UxGT("Uniewa??nij najbli??szy");
  LSTR MSG_UBL_FINE_TUNE_ALL              = _UxGT("Dostrajaj wszystko");
  LSTR MSG_UBL_FINE_TUNE_CLOSEST          = _UxGT("Dostrajaj najbli??szy");
  LSTR MSG_UBL_STORAGE_MESH_MENU          = _UxGT("Przechowywanie siatki");
  LSTR MSG_UBL_STORAGE_SLOT               = _UxGT("Slot Pami??ci");
  LSTR MSG_UBL_LOAD_MESH                  = _UxGT("Za??aduj siatk?? sto??u");
  LSTR MSG_UBL_SAVE_MESH                  = _UxGT("Zapisz siatk?? sto??u");
  LSTR MSG_MESH_LOADED                    = _UxGT("Siatka %i za??adowana");
  LSTR MSG_MESH_SAVED                     = _UxGT("Siatka %i zapisana");
  LSTR MSG_UBL_NO_STORAGE                 = _UxGT("Brak magazynu");
  LSTR MSG_UBL_SAVE_ERROR                 = _UxGT("B????d: Zapis UBL");
  LSTR MSG_UBL_RESTORE_ERROR              = _UxGT("B??ad: Odczyt UBL");
  LSTR MSG_UBL_Z_OFFSET                   = _UxGT("Przesuni??cie Z: ");
  LSTR MSG_UBL_Z_OFFSET_STOPPED           = _UxGT("Przesuni??cie Z zatrzymane");
  LSTR MSG_UBL_STEP_BY_STEP_MENU          = _UxGT("UBL Krok po kroku");
  LSTR MSG_UBL_1_BUILD_COLD_MESH          = _UxGT("1. Tworzenie zimnej siatki");
  LSTR MSG_UBL_2_SMART_FILLIN             = _UxGT("2. Inteligentne wype??nienie");
  LSTR MSG_UBL_3_VALIDATE_MESH_MENU       = _UxGT("3. Sprawdzenie siatki");
  LSTR MSG_UBL_4_FINE_TUNE_ALL            = _UxGT("4. Dostrojenie wszystkiego");
  LSTR MSG_UBL_5_VALIDATE_MESH_MENU       = _UxGT("5. Sprawdzenie siatki");
  LSTR MSG_UBL_6_FINE_TUNE_ALL            = _UxGT("6. Dostrojenie wszystkiego");
  LSTR MSG_UBL_7_SAVE_MESH                = _UxGT("7. Zapis siatki sto??u");

  LSTR MSG_LED_CONTROL                    = _UxGT("Sterowanie LED");
  LSTR MSG_LEDS                           = _UxGT("??wiat??a");
  LSTR MSG_LED_PRESETS                    = _UxGT("Ustawienia ??wiate??");
  LSTR MSG_SET_LEDS_RED                   = _UxGT("Czerwony");
  LSTR MSG_SET_LEDS_ORANGE                = _UxGT("Pomara??czowy");
  LSTR MSG_SET_LEDS_YELLOW                = _UxGT("Z????ty");
  LSTR MSG_SET_LEDS_GREEN                 = _UxGT("Zielony");
  LSTR MSG_SET_LEDS_BLUE                  = _UxGT("Niebieski");
  LSTR MSG_SET_LEDS_INDIGO                = _UxGT("Indygo");
  LSTR MSG_SET_LEDS_VIOLET                = _UxGT("Fioletowy");
  LSTR MSG_SET_LEDS_WHITE                 = _UxGT("Bia??y");
  LSTR MSG_SET_LEDS_DEFAULT               = _UxGT("Domy??lny");
  LSTR MSG_LED_CHANNEL_N                  = _UxGT("Kana?? =");
  LSTR MSG_NEO2_BRIGHTNESS                = _UxGT("Jasno????");
  LSTR MSG_CUSTOM_LEDS                    = _UxGT("W??asne ??wiat??a");
  LSTR MSG_INTENSITY_R                    = _UxGT("Czerwony");
  LSTR MSG_INTENSITY_G                    = _UxGT("Zielony");
  LSTR MSG_INTENSITY_B                    = _UxGT("Niebieski");
  LSTR MSG_INTENSITY_W                    = _UxGT("Bia??y");
  LSTR MSG_LED_BRIGHTNESS                 = _UxGT("Jasno????");

  LSTR MSG_MOVING                         = _UxGT("Ruch...");
  LSTR MSG_FREE_XY                        = _UxGT("Swobodne XY");
  LSTR MSG_MOVE_X                         = _UxGT("Przesu?? w X");
  LSTR MSG_MOVE_Y                         = _UxGT("Przesu?? w Y");
  LSTR MSG_MOVE_Z                         = _UxGT("Przesu?? w Z");
  LSTR MSG_MOVE_E                         = _UxGT("Ekstruzja (os E)");
  LSTR MSG_MOVE_EN                        = _UxGT("Ekstruzja (os E) *");
  LSTR MSG_HOTEND_TOO_COLD                = _UxGT("Dysza za zimna");
  LSTR MSG_MOVE_N_MM                      = _UxGT("Przesu?? co %s mm");
  LSTR MSG_MOVE_01MM                      = _UxGT("Przesu?? co .1 mm");
  LSTR MSG_MOVE_1MM                       = _UxGT("Przesu?? co 1 mm");
  LSTR MSG_MOVE_10MM                      = _UxGT("Przesu?? co 10 mm");
  LSTR MSG_MOVE_100MM                     = _UxGT("Przesu?? co 100 mm");
  LSTR MSG_MOVE_0001IN                    = _UxGT("Przesu?? co 0.001 cala");
  LSTR MSG_MOVE_001IN                     = _UxGT("Przesu?? co 0.01 cala");
  LSTR MSG_MOVE_01IN                      = _UxGT("Przesu?? co 0.1 cala");
  LSTR MSG_SPEED                          = _UxGT("Predko????");
  LSTR MSG_BED_Z                          = _UxGT("St???? Z");
  LSTR MSG_NOZZLE                         = _UxGT("Dysza");
  LSTR MSG_NOZZLE_N                       = _UxGT("Dysza ~");
  LSTR MSG_NOZZLE_STANDBY                 = _UxGT("Dysza w oczekiwaniu");
  LSTR MSG_BED                            = _UxGT("St????");
  LSTR MSG_CHAMBER                        = _UxGT("Obudowa");
  LSTR MSG_FAN_SPEED                      = _UxGT("Obroty wentylatora");
  LSTR MSG_FAN_SPEED_N                    = _UxGT("Obroty wentylatora ~");
  LSTR MSG_EXTRA_FAN_SPEED                = _UxGT("Obroty dodatkowego wentylatora");
  LSTR MSG_EXTRA_FAN_SPEED_N              = _UxGT("Obroty dodatkowego wentylatora ~");
  LSTR MSG_CONTROLLER_FAN                 = _UxGT("Wentylator kontrolera");
  LSTR MSG_FLOW                           = _UxGT("Przep??yw");
  LSTR MSG_FLOW_N                         = _UxGT("Przep??yw ~");
  LSTR MSG_CONTROL                        = _UxGT("Ustawienia");
  LSTR MSG_FACTOR                         = " " LCD_STR_THERMOMETER _UxGT(" Mno??nik");
  LSTR MSG_AUTOTEMP                       = _UxGT("Auto. temperatura");
  LSTR MSG_LCD_ON                         = _UxGT("W??.");
  LSTR MSG_LCD_OFF                        = _UxGT("Wy??.");
  LSTR MSG_PID_AUTOTUNE                   = _UxGT("PID Autostrojenie");
  LSTR MSG_PID_AUTOTUNE_E                 = _UxGT("PID Autostrojenie *");
  LSTR MSG_PID_AUTOTUNE_DONE              = _UxGT("Strojenie PID zako??czone");
  LSTR MSG_SELECT                         = _UxGT("Wybierz");
  LSTR MSG_SELECT_E                       = _UxGT("Wybierz *");
  LSTR MSG_ACC                            = _UxGT("Przyspieszenie");
  LSTR MSG_JERK                           = _UxGT("Zryw");
  LSTR MSG_VA_JERK                        = _UxGT("Zryw V") STR_A;
  LSTR MSG_VB_JERK                        = _UxGT("Zryw V") STR_B;
  LSTR MSG_VC_JERK                        = _UxGT("Zryw V") STR_C;
  LSTR MSG_VI_JERK                        = _UxGT("Zryw V") STR_I;
  LSTR MSG_VJ_JERK                        = _UxGT("Zryw V") STR_J;
  LSTR MSG_VK_JERK                        = _UxGT("Zryw V") STR_K;
  LSTR MSG_VE_JERK                        = _UxGT("Zryw Ve");
  LSTR MSG_VELOCITY                       = _UxGT("Pr??dko???? (V)");

  LSTR MSG_VTRAV_MIN                      = _UxGT("Vskok min");
  LSTR MSG_ACCELERATION                   = _UxGT("Przyspieszenie (A)");

  LSTR MSG_A_RETRACT                      = _UxGT("A-wycofanie");
  LSTR MSG_A_TRAVEL                       = _UxGT("A-przesu??.");
  LSTR MSG_XY_FREQUENCY_LIMIT             = _UxGT("Cz??stotliwo???? max");
  LSTR MSG_STEPS_PER_MM                   = _UxGT("kroki/mm");
  LSTR MSG_A_STEPS                        = STR_A _UxGT(" kroki/mm");
  LSTR MSG_B_STEPS                        = STR_B _UxGT(" kroki/mm");
  LSTR MSG_C_STEPS                        = STR_C _UxGT(" kroki/mm");
  LSTR MSG_I_STEPS                        = STR_I _UxGT(" kroki/mm");
  LSTR MSG_J_STEPS                        = STR_J _UxGT(" kroki/mm");
  LSTR MSG_K_STEPS                        = STR_K _UxGT(" kroki/mm");
  LSTR MSG_E_STEPS                        = _UxGT("E kroki/mm");
  LSTR MSG_EN_STEPS                       = _UxGT("* kroki/mm");
  LSTR MSG_TEMPERATURE                    = _UxGT("Temperatura");
  LSTR MSG_MOTION                         = _UxGT("Ruch");
  LSTR MSG_VOLUMETRIC_ENABLED             = _UxGT("E w mm") SUPERSCRIPT_THREE;
  LSTR MSG_FILAMENT_DIAM                  = _UxGT("??r. fil.");
  LSTR MSG_FILAMENT_DIAM_E                = _UxGT("??r. fil. *");
  LSTR MSG_FILAMENT_UNLOAD                = _UxGT("Wysu?? mm");
  LSTR MSG_FILAMENT_LOAD                  = _UxGT("Wsu?? mm");
  LSTR MSG_CONTRAST                       = _UxGT("Kontrast LCD");
  LSTR MSG_STORE_EEPROM                   = _UxGT("Zapisz w pami??ci");
  LSTR MSG_LOAD_EEPROM                    = _UxGT("Wczytaj z pami??ci");
  LSTR MSG_RESTORE_DEFAULTS               = _UxGT("Ustaw. fabryczne");
  LSTR MSG_INIT_EEPROM                    = _UxGT("Initializuj EEPROM");
  LSTR MSG_MEDIA_UPDATE                   = _UxGT("Uaktualnij kart??");
  LSTR MSG_RESET_PRINTER                  = _UxGT("Resetuj drukark??");
  LSTR MSG_REFRESH                        = LCD_STR_REFRESH  _UxGT("Odswie??");
  LSTR MSG_INFO_SCREEN                    = _UxGT("Ekran g????wny");
  LSTR MSG_PREPARE                        = _UxGT("Przygotuj");
  LSTR MSG_TUNE                           = _UxGT("Strojenie");
  LSTR MSG_CURRENT                        = _UxGT("Nat????enie");
  LSTR MSG_VOLTAGE                        = _UxGT("Napi??cie");
  LSTR MSG_POWER                          = _UxGT("Moc");
  LSTR MSG_START_PRINT                    = _UxGT("Start wydruku");
  LSTR MSG_BUTTON_NEXT                    = _UxGT("Nast??pny");
  LSTR MSG_BUTTON_INIT                    = _UxGT("Inic.");
  LSTR MSG_BUTTON_PRINT                   = _UxGT("Drukuj");
  LSTR MSG_BUTTON_RESET                   = _UxGT("Resetuj");
  LSTR MSG_BUTTON_IGNORE                  = _UxGT("Ignoruj");
  LSTR MSG_BUTTON_CANCEL                  = _UxGT("Przerwij");
  LSTR MSG_BUTTON_DONE                    = _UxGT("Gotowe");
  LSTR MSG_BUTTON_BACK                    = _UxGT("Wstecz");
  LSTR MSG_BUTTON_PROCEED                 = _UxGT("Kontynuuj");
  LSTR MSG_BUTTON_SKIP                    = _UxGT("Pomi??");
  LSTR MSG_PAUSING                        = _UxGT("Wstrzymywanie...");
  LSTR MSG_PAUSE_PRINT                    = _UxGT("Wstrzymaj druk");
  LSTR MSG_RESUME_PRINT                   = _UxGT("Wznowienie");
  LSTR MSG_STOP_PRINT                     = _UxGT("Stop");
  LSTR MSG_PRINTING_OBJECT                = _UxGT("Drukowanie obiektu");
  LSTR MSG_CANCEL_OBJECT                  = _UxGT("Anunuj obiekt");
  LSTR MSG_CANCEL_OBJECT_N                = _UxGT("Anunuj obiekt =");
  LSTR MSG_OUTAGE_RECOVERY                = _UxGT("Odzyskiwanie po awarii");
  LSTR MSG_MEDIA_MENU                     = _UxGT("Karta SD");
  LSTR MSG_NO_MEDIA                       = _UxGT("Brak karty");
  LSTR MSG_DWELL                          = _UxGT("U??pij...");
  LSTR MSG_USERWAIT                       = _UxGT("Oczekiwanie...");
  LSTR MSG_PRINT_PAUSED                   = _UxGT("Druk wstrzymany");
  LSTR MSG_PRINTING                       = _UxGT("Drukowanie...");
  LSTR MSG_PRINT_ABORTED                  = _UxGT("Druk przerwany");
  LSTR MSG_PRINT_DONE                     = _UxGT("Druk zako??czony");
  LSTR MSG_NO_MOVE                        = _UxGT("Brak ruchu");
  LSTR MSG_KILLED                         = _UxGT("Ubity. ");
  LSTR MSG_STOPPED                        = _UxGT("Zatrzymany. ");
  LSTR MSG_CONTROL_RETRACT                = _UxGT("Wycofaj mm");
  LSTR MSG_CONTROL_RETRACT_SWAP           = _UxGT("Z Wycof. mm");
  LSTR MSG_CONTROL_RETRACTF               = _UxGT("Wycofaj  V");
  LSTR MSG_CONTROL_RETRACT_ZHOP           = _UxGT("Skok Z mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER        = _UxGT("Cof. wycof. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVER_SWAP   = _UxGT("Z Cof. wyc. mm");
  LSTR MSG_CONTROL_RETRACT_RECOVERF       = _UxGT("Cof. wycof.  V");
  LSTR MSG_AUTORETRACT                    = _UxGT("Auto. wycofanie");
  LSTR MSG_FILAMENT_SWAP_LENGTH           = _UxGT("D??ugo???? zmiany");
  LSTR MSG_FILAMENT_PURGE_LENGTH          = _UxGT("D??ugo???? oczyszczania");
  LSTR MSG_TOOL_CHANGE                    = _UxGT("Zmiana narz??dzia");
  LSTR MSG_TOOL_CHANGE_ZLIFT              = _UxGT("Podniesienie Z");
  LSTR MSG_SINGLENOZZLE_PRIME_SPEED       = _UxGT("Pr??dko???? nape??niania");
  LSTR MSG_SINGLENOZZLE_RETRACT_SPEED     = _UxGT("Pr??dko???? wycofania");
  LSTR MSG_FILAMENTCHANGE                 = _UxGT("Zmie?? filament");
  LSTR MSG_FILAMENTCHANGE_E               = _UxGT("Zmie?? filament *");
  LSTR MSG_FILAMENTLOAD                   = _UxGT("Wsu?? Filament");
  LSTR MSG_FILAMENTLOAD_E                 = _UxGT("Wsu?? Filament *");
  LSTR MSG_FILAMENTUNLOAD                 = _UxGT("Wysu?? Filament");
  LSTR MSG_FILAMENTUNLOAD_E               = _UxGT("Wysu?? Filament *");
  LSTR MSG_FILAMENTUNLOAD_ALL             = _UxGT("Wysu?? wszystkie");
  LSTR MSG_ATTACH_MEDIA                   = _UxGT("Inicjal. karty SD");
  LSTR MSG_CHANGE_MEDIA                   = _UxGT("Zmiana karty SD");
  LSTR MSG_RELEASE_MEDIA                  = _UxGT("Zwolnienie karty");
  LSTR MSG_ZPROBE_OUT                     = _UxGT("Sonda Z za sto??em");
  LSTR MSG_SKEW_FACTOR                    = _UxGT("Wsp????czynik skrzywienia");
  LSTR MSG_BLTOUCH_SELFTEST               = _UxGT("BLTouch Self-Test");
  LSTR MSG_BLTOUCH_RESET                  = _UxGT("Reset BLTouch");
  LSTR MSG_BLTOUCH_MODE_CHANGE            = _UxGT("UWAGA: Z??e ustawienia mog?? uszkodzi?? drukark??. Kontynuowa???");
  LSTR MSG_HOME_FIRST                     = _UxGT("Najpierw Home %s%s%s");
  LSTR MSG_ZPROBE_ZOFFSET                 = _UxGT("Offset Z");
  LSTR MSG_MOVE_NOZZLE_TO_BED             = _UxGT("Przesu?? dysz?? do sto??u");
  LSTR MSG_BABYSTEP_TOTAL                 = _UxGT("????cznie");
  LSTR MSG_ENDSTOP_ABORT                  = _UxGT("B????d kra??c??wki");
  LSTR MSG_HEATING_FAILED_LCD             = _UxGT("Rozgrz. nieudane");
  LSTR MSG_ERR_REDUNDANT_TEMP             = _UxGT("B????d temperatury");
  LSTR MSG_THERMAL_RUNAWAY                = _UxGT("ZANIK TEMPERATURY");
  LSTR MSG_THERMAL_RUNAWAY_BED            = _UxGT("ZANIK TEMP. STO??U");
  LSTR MSG_THERMAL_RUNAWAY_CHAMBER        = _UxGT("ZANIK TEMP.KOMORY");
  LSTR MSG_ERR_MAXTEMP                    = _UxGT("B????d: MAXTEMP");
  LSTR MSG_ERR_MINTEMP                    = _UxGT("B????d: MINTEMP");
  LSTR MSG_HALTED                         = _UxGT("Drukarka zatrzym.");
  LSTR MSG_PLEASE_RESET                   = _UxGT("Prosz?? zresetowa??");
  LSTR MSG_SHORT_HOUR                     = _UxGT("g"); // One character only
  LSTR MSG_HEATING                        = _UxGT("Rozgrzewanie...");
  LSTR MSG_COOLING                        = _UxGT("Ch??odzenie...");
  LSTR MSG_BED_HEATING                    = _UxGT("Rozgrzewanie sto??u...");
  LSTR MSG_BED_COOLING                    = _UxGT("Ch??odzenie sto??u...");
  LSTR MSG_CHAMBER_HEATING                = _UxGT("Rozgrzewanie komory...");
  LSTR MSG_CHAMBER_COOLING                = _UxGT("Ch??odzenie komory...");
  LSTR MSG_DELTA_CALIBRATE                = _UxGT("Kalibrowanie Delty");
  LSTR MSG_DELTA_CALIBRATE_X              = _UxGT("Kalibruj X");
  LSTR MSG_DELTA_CALIBRATE_Y              = _UxGT("Kalibruj Y");
  LSTR MSG_DELTA_CALIBRATE_Z              = _UxGT("Kalibruj Z");
  LSTR MSG_DELTA_CALIBRATE_CENTER         = _UxGT("Kalibruj ??rodek");
  LSTR MSG_DELTA_SETTINGS                 = _UxGT("Ustawienia delty");
  LSTR MSG_DELTA_AUTO_CALIBRATE           = _UxGT("Auto kalibrowanie");
  LSTR MSG_DELTA_HEIGHT_CALIBRATE         = _UxGT("Ustaw wysoko???? delty");
  LSTR MSG_DELTA_Z_OFFSET_CALIBRATE       = _UxGT("Przesun. Z sondy");
  LSTR MSG_DELTA_DIAG_ROD                 = _UxGT("Uko??ne rami??");
  LSTR MSG_DELTA_HEIGHT                   = _UxGT("Wysoko????");
  LSTR MSG_DELTA_RADIUS                   = _UxGT("Promie??");
  LSTR MSG_INFO_MENU                      = _UxGT("O drukarce");
  LSTR MSG_INFO_PRINTER_MENU              = _UxGT("Info drukarki");
  LSTR MSG_3POINT_LEVELING                = _UxGT("Poziomowanie 3-punktowe");
  LSTR MSG_LINEAR_LEVELING                = _UxGT("Poziomowanie liniowe");
  LSTR MSG_BILINEAR_LEVELING              = _UxGT("Poziomowanie biliniowe");
  LSTR MSG_MESH_LEVELING                  = _UxGT("Poziomowanie siatk??");
  LSTR MSG_INFO_STATS_MENU                = _UxGT("Statystyki");
  LSTR MSG_INFO_BOARD_MENU                = _UxGT("Info p??yty");
  LSTR MSG_INFO_THERMISTOR_MENU           = _UxGT("Termistory");
  LSTR MSG_INFO_EXTRUDERS                 = _UxGT("Ekstrudery");
  LSTR MSG_INFO_BAUDRATE                  = _UxGT("Predko???? USB");
  LSTR MSG_INFO_PROTOCOL                  = _UxGT("Protok????");
  LSTR MSG_INFO_RUNAWAY_OFF               = _UxGT("Zegar pracy: OFF");
  LSTR MSG_INFO_RUNAWAY_ON                = _UxGT("Zegar pracy: ON");

  LSTR MSG_CASE_LIGHT                     = _UxGT("O??wietlenie obudowy");
  LSTR MSG_CASE_LIGHT_BRIGHTNESS          = _UxGT("Jasno???? o??wietlenia");
  LSTR MSG_KILL_EXPECTED_PRINTER          = _UxGT("Niepoprawna drukarka");

  #if LCD_WIDTH >= 20 || HAS_DWIN_E3V2
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Wydrukowano");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Uko??czono");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Czas druku");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Najd??. druk");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("U??yty fil.");
  #else
    LSTR MSG_INFO_PRINT_COUNT             = _UxGT("Wydrukowano");
    LSTR MSG_INFO_COMPLETED_PRINTS        = _UxGT("Uko??czono");
    LSTR MSG_INFO_PRINT_TIME              = _UxGT("Razem");
    LSTR MSG_INFO_PRINT_LONGEST           = _UxGT("Najd??. druk");
    LSTR MSG_INFO_PRINT_FILAMENT          = _UxGT("U??yty fil.");
  #endif

  LSTR MSG_INFO_PSU                       = _UxGT("Zasilacz");
  LSTR MSG_DRIVE_STRENGTH                 = _UxGT("Si??a silnika");
  LSTR MSG_DAC_PERCENT_A                  = STR_A _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_B                  = STR_B _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_C                  = STR_C _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_I                  = STR_I _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_J                  = STR_J _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_K                  = STR_K _UxGT(" Si??a %");
  LSTR MSG_DAC_PERCENT_E                  = _UxGT("E Si??a %");
  LSTR MSG_ERROR_TMC                      = _UxGT("TMC B????D PO????CZENIA");
  LSTR MSG_DAC_EEPROM_WRITE               = _UxGT("Zapisz DAC EEPROM");
  LSTR MSG_FILAMENT_CHANGE_HEADER         = _UxGT("ZMIE?? FILAMENT");
  LSTR MSG_FILAMENT_CHANGE_HEADER_PAUSE   = _UxGT("WYDRUK WSTRZYMANY");
  LSTR MSG_FILAMENT_CHANGE_HEADER_LOAD    = _UxGT("WSU?? FILAMENT");
  LSTR MSG_FILAMENT_CHANGE_HEADER_UNLOAD  = _UxGT("WYSU?? FILAMENT");
  LSTR MSG_FILAMENT_CHANGE_OPTION_HEADER  = _UxGT("OPCJE WZNOWIENIA:");
  LSTR MSG_FILAMENT_CHANGE_OPTION_PURGE   = _UxGT("Oczy???? wi??cej");
  LSTR MSG_FILAMENT_CHANGE_OPTION_RESUME  = _UxGT("Kontynuuj");
  LSTR MSG_FILAMENT_CHANGE_NOZZLE         = _UxGT("  Dysza: ");
  LSTR MSG_RUNOUT_SENSOR                  = _UxGT("Czujnik filamentu");
  LSTR MSG_RUNOUT_DISTANCE_MM             = _UxGT("Dystans do czujnika mm");
  LSTR MSG_KILL_HOMING_FAILED             = _UxGT("Zerowanie nieudane");
  LSTR MSG_LCD_PROBING_FAILED             = _UxGT("Sondowanie nieudane");

  LSTR MSG_MMU2_CHOOSE_FILAMENT_HEADER    = _UxGT("WYBIERZ FILAMENT");
  LSTR MSG_KILL_MMU2_FIRMWARE             = _UxGT("Uaktualnij firmware MMU!");
  LSTR MSG_MMU2_NOT_RESPONDING            = _UxGT("MMU wymaga uwagi.");
  LSTR MSG_MMU2_RESUME                    = _UxGT("Wzn??w wydruk");
  LSTR MSG_MMU2_RESUMING                  = _UxGT("Wznawianie...");
  LSTR MSG_MMU2_LOAD_FILAMENT             = _UxGT("Wsu?? filament");
  LSTR MSG_MMU2_LOAD_ALL                  = _UxGT("Wsu?? wszystko");
  LSTR MSG_MMU2_LOAD_TO_NOZZLE            = _UxGT("Wsu?? do dyszy");
  LSTR MSG_MMU2_EJECT_FILAMENT            = _UxGT("Wysu?? filament");
  LSTR MSG_MMU2_EJECT_FILAMENT_N          = _UxGT("Wysu?? filament ~");
  LSTR MSG_MMU2_UNLOAD_FILAMENT           = _UxGT("Wysu?? filament");
  LSTR MSG_MMU2_LOADING_FILAMENT          = _UxGT("Wsuwanie fil. %i...");
  LSTR MSG_MMU2_EJECTING_FILAMENT         = _UxGT("Wysuwanie fil. ...");
  LSTR MSG_MMU2_UNLOADING_FILAMENT        = _UxGT("Wysuwanie fil....");
  LSTR MSG_MMU2_ALL                       = _UxGT("Wszystko");
  LSTR MSG_MMU2_RESET                     = _UxGT("Resetuj MMU");
  LSTR MSG_MMU2_RESETTING                 = _UxGT("Resetowanie MMU...");
  LSTR MSG_MMU2_EJECT_RECOVER             = _UxGT("Usu??, kliknij");

  LSTR MSG_MIX                            = _UxGT("Miks");
  LSTR MSG_MIX_COMPONENT_N                = _UxGT("Komponent =");
  LSTR MSG_MIXER                          = _UxGT("Mikser");
  LSTR MSG_FULL_GRADIENT                  = _UxGT("Pe??ny gradient");
  LSTR MSG_TOGGLE_MIX                     = _UxGT("Prze??acz miks");
  LSTR MSG_REVERSE_GRADIENT               = _UxGT("Odwrotny gradient");

  LSTR MSG_GAMES                          = _UxGT("Gry");


  LSTR MSG_EDIT_PASSWORD                  = _UxGT("Zmie?? has??o");
  LSTR MSG_LOGIN_REQUIRED                 = _UxGT("Wymagane zalogowanie");
  LSTR MSG_PASSWORD_SETTINGS              = _UxGT("Ustawienia has??a");
  LSTR MSG_ENTER_DIGIT                    = _UxGT("Wprowad?? cyfr??");
  LSTR MSG_CHANGE_PASSWORD                = _UxGT("Ustaw/zmie?? has??o");
  LSTR MSG_REMOVE_PASSWORD                = _UxGT("Usu?? has??o");
  LSTR MSG_PASSWORD_SET                   = _UxGT("Has??o to ");
  LSTR MSG_START_OVER                     = _UxGT("Od nowa");
  LSTR MSG_REMINDER_SAVE_SETTINGS         = _UxGT("Pami??taj by zapisa??!");
  LSTR MSG_PASSWORD_REMOVED               = _UxGT("Has??o usuni??te");

  //
  // Filament Change screens show up to 3 lines on a 4-line display
  //                        ...or up to 2 lines on a 3-line display
  //
  #if LCD_HEIGHT >= 4
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_2_LINE("Nacisnik przycisk", "by wznowi?? drukowanie"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Parkowanie..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_3_LINE("Czekam na", "zmian?? filamentu", "by wystartowa??"));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_3_LINE("W?????? filament", "i naci??nij przycisk", "by kontynuowa??"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_2_LINE("Naci??nij przycisk", "by nagrza?? dysz??"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_2_LINE("Nagrzewanie dyszy", "Prosz?? czeka??..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_2_LINE("Czekam na", "wyj??cie filamentu"));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_2_LINE("Czekam na", "w??o??enie filamentu"));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_2_LINE("Czekam na", "oczyszczenie filamentu"));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_2_LINE("Kliknij by zako??czy??", "oczyszczanie filamentu"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_2_LINE("Czekam na", "wznowienie wydruku..."));
  #else
    LSTR MSG_ADVANCED_PAUSE_WAITING       = _UxGT(MSG_1_LINE("Kliknij by kontynuowa??"));
    LSTR MSG_PAUSE_PRINT_PARKING          = _UxGT(MSG_1_LINE("Parkowanie..."));
    LSTR MSG_FILAMENT_CHANGE_INIT         = _UxGT(MSG_1_LINE("Prosz?? czeka??..."));
    LSTR MSG_FILAMENT_CHANGE_INSERT       = _UxGT(MSG_1_LINE("W?????? i kliknij"));
    LSTR MSG_FILAMENT_CHANGE_HEAT         = _UxGT(MSG_1_LINE("Kliknij by nagrza??"));
    LSTR MSG_FILAMENT_CHANGE_HEATING      = _UxGT(MSG_1_LINE("Nagrzewanie..."));
    LSTR MSG_FILAMENT_CHANGE_UNLOAD       = _UxGT(MSG_1_LINE("Wysuwanie..."));
    LSTR MSG_FILAMENT_CHANGE_LOAD         = _UxGT(MSG_1_LINE("Wsuwanie..."));
    LSTR MSG_FILAMENT_CHANGE_PURGE        = _UxGT(MSG_1_LINE("Oczyszczanie..."));
    LSTR MSG_FILAMENT_CHANGE_CONT_PURGE   = _UxGT(MSG_1_LINE("Kliknij by zako??czy??"));
    LSTR MSG_FILAMENT_CHANGE_RESUME       = _UxGT(MSG_1_LINE("Wznawianie..."));
  #endif
  LSTR MSG_TMC_DRIVERS                    = _UxGT("Sterowniki TMC");
  LSTR MSG_TMC_CURRENT                    = _UxGT("Pr??d sterownika");
  LSTR MSG_TMC_HOMING_THRS                = _UxGT("Zerowanie bezczujnikowe");
  LSTR MSG_BACKLASH_CORRECTION            = _UxGT("Korekcja");
  LSTR MSG_BACKLASH_SMOOTHING             = _UxGT("Wyg??adzanie");

  LSTR MSG_LEVEL_X_AXIS                   = _UxGT("Wypoziomuj o?? X");
  LSTR MSG_AUTO_CALIBRATE                 = _UxGT("Autokalibracja");

  LSTR MSG_SOUND                          = _UxGT("D??wi??k");

  LSTR MSG_CALIBRATION_COMPLETED          = _UxGT("Kalibracja zako??czona");
  LSTR MSG_CALIBRATION_FAILED             = _UxGT("Kalibracja nie powiod??a si??");

}

#if FAN_COUNT == 1
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED
#else
  #define MSG_FIRST_FAN_SPEED       MSG_FAN_SPEED_N
  #define MSG_EXTRA_FIRST_FAN_SPEED MSG_EXTRA_FAN_SPEED_N
#endif
