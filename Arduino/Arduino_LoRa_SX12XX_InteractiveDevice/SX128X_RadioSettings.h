///////////////////////////////////////////////////////////////////////////////////////////////////////////
// add here some specific board define statements if you want to implement user-defined specific settings
// A/ LoRa radio node from IoTMCU: https://www.tindie.com/products/IOTMCU/lora-radio-node-v10/
//#define IOTMCU_LORA_RADIO_NODE
// uncomment if you are sure you have an Heltec LoRa board and that it is not detected
//#define HELTEC_LORA
// uncomment if you are sure you have an ESP8266 board and that it is not detected
//#define ESP8266
///////////////////////////////////////////////////////////////////////////////////////////////////////////

/*******************************************************************************************************
  Based from SX12XX example - Stuart Robinson 
*******************************************************************************************************/

//*******  Setup hardware pin definitions here ! ***************

#define NSS 10
#define NRESET 4
#define RFBUSY 5
#define DIO1 2
#define DIO2 -1                 //not used 
#define DIO3 -1                 //not used                      
#define RX_EN -1                //pin for RX enable, used on some SX1280 devices, set to -1 if not used
#define TX_EN -1                //pin for TX enable, used on some SX1280 devices, set to -1 if not used      

#define LORA_DEVICE DEVICE_SX1280               //we need to define the device we are using 

//*******  Setup LoRa Parameters Here ! ***************

//LoRa Modem Parameters
#define Offset 0                                 //offset frequency for calibration purposes  
#define Bandwidth LORA_BW_0200                   //LoRa bandwidth
#define SpreadingFactor LORA_SF12                 //LoRa spreading factor
#define CodeRate LORA_CR_4_5                     //LoRa coding rate

// can be set to LORA_IQ_NORMAL or LORA_IQ_INVERTED
const uint8_t IQ_Setting = LORA_IQ_NORMAL;

/*******************************************************************************************************
  End from SX12XX example - Stuart Robinson 
*******************************************************************************************************/

#define BAND2400
#define MAX_DBM 10

// taken from Semtech's LoRa 2.4GHz 3-channel reference design
const uint32_t CH_00_2400 = 2403000000;
const uint32_t CH_01_2400 = 2425000000;
const uint32_t CH_02_2400 = 2479000000;

const uint32_t DEFAULT_CHANNEL=CH_00_2400;

#define DEFAULT_DEST_ADDR       1

// END
///////////////////////////////////////////////////////////////////////////////////////////////////////////