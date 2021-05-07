//Assume Base address 0x10000000
#define BASE_ADDR 0x10000000
#define REG_RBR BASE_ADDR+0x0
#define REG_THR BASE_ADDR+0x0
#define REG_DLH BASE_ADDR+0x4
#define REG_DLL BASE_ADDR+0x0
#define REG_IER BASE_ADDR+0x4
#define REG_IIR BASE_ADDR+0x8
#define REG_FCR BASE_ADDR+0x8
#define REG_LCR BASE_ADDR+0x0C
#define REG_MCR BASE_ADDR+0x10
#define REG_LSR BASE_ADDR+0x14
#define REG_MSR BASE_ADDR+0x18
#define REG_SCR BASE_ADDR+0x1C
#define REG_LPDLL BASE_ADDR+0x20
#define REG_LPDLH BASE_ADDR+0x24
#define REG_SRBR BASE_ADDR+0x30-0x6C
#define REG_STHR BASE_ADDR+0x30-0x6C
#define REG_FAR BASE_ADDR+0x70
#define REG_TFR BASE_ADDR+0x74
#define REG_RFW BASE_ADDR+0x78
#define REG_USR BASE_ADDR+0x7C
#define REG_TFL BASE_ADDR+0x80
#define REG_RFL BASE_ADDR+0x84
#define REG_SRR BASE_ADDR+0x88
#define REG_SRTS BASE_ADDR+0x8C
#define REG_SBCR BASE_ADDR+0x90
#define REG_SDMAM BASE_ADDR+0x94
#define REG_SFE BASE_ADDR+0x98
#define REG_SRT BASE_ADDR+0x9C
#define REG_STET BASE_ADDR+0xA0
#define REG_HTX BASE_ADDR+0xA4
#define REG_DMASA BASE_ADDR+0xA8
#define REG_CPR BASE_ADDR+0xF4
#define REG_UCV BASE_ADDR+0xF8
#define REG_CTR BASE_ADDR+0xFC



//Since REG_RBR is Read only and reading first 8 bits only as other bits are reserved
int data_read = 0;
data_read = sys_read(REG_RBR);
if(data_read == 0x0) //0x0 is Reset/default value according to RBR register
printf("RBR read value is %d\n", data_read);
else
printf("Error : RBR default value is not matching \n");


//THR reg is write only
sys_write(REG_THR,0xF); // first 8 bits are write only



//DLH is read and write(R/W)
//Reading default value
data_read = sys_read(REG_DLH);
if(data_read == 0x0) //0x0 is Reset/default value
printf("DLH read value is %d\n", data_read);
else
printf("Error : DLH default value is not matching \n");

//Writing value and check
sys_write(REG_DLH,0xF);
data_read = sys_read(REG_DLH);
if(data_read == 0xF) 
printf("DLH read value is %d\n", data_read);
else
printf("Error : DLH default value is not matching \n");



//DLL is read and write(R/W)
//Reading default value
data_read = sys_read(REG_DLL);
if(data_read == 0x0) //0x0 is Reset/default value
printf("DLL read value is %d\n", data_read);
else
printf("Error : DLL default value is not matching \n");

//Writing value and check
sys_write(REG_DLL,0xF);
data_read = sys_read(REG_DLL);
if(data_read == 0x0) //0x0 is Reset/default value
printf("DLL read value is %d\n", data_read);
else
printf("Error : DLL default value is not matching \n");



//IER is read and write(R/W)
//Reading default value
data_read = sys_read(REG_IER);
if(data_read == 0x0) //0x0 is Reset/default value
printf("IER read value is %d\n", data_read);
else
printf("Error : IER default value is not matching \n");

//Writing value and check
sys_write(REG_IER,0xF);
data_read = sys_read(REG_IER);
if(data_read == 0x0) //0x0 is Reset/default value
printf("IER read value is %d\n", data_read);
else
printf("Error : IER default value is not matching \n");



//Since REG_IIR is Read only
int data_read = 0;
data_read = sys_read(REG_IIR);

if(data_read == 0x01) //0x01 is Reset/default value
printf("IIR read value is %d\n", data_read);
else
printf("Error : IIR default value is not matching \n");



//FCR reg is write only
sys_write(REG_FCR,0xF); //0xF bcz first 8 bits are write only



//LCR is read and write(R/W)
//Reading default value
data_read = sys_read(REG_LCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LCR read value is %d\n", data_read);
else
printf("Error : LCR default value is not matching \n");

//Writing value and check
sys_write(REG_LCR,0xF);
data_read = sys_read(REG_LCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LCR read value is %d\n", data_read);
else
printf("Error : LCR default value is not matching \n");



//MCR is read and write(R/W)
//Reading default value
data_read = sys_read(REG_MCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("MCR read value is %d\n", data_read);
else
printf("Error : MCR default value is not matching \n");

//Writing value and check
sys_write(REG_MCR,0xF);
data_read = sys_read(REG_MCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("MCR read value is %d\n", data_read);
else
printf("Error : MCR default value is not matching \n");


//Since REG_LSR is Read only
int data_read = 0;
data_read = sys_read(REG_LSR);

if(data_read == 0x60) //0x60 is Reset/default value
printf("LSR read value is %d\n", data_read);
else
printf("Error : LSR default value is not matching \n");


//Since REG_MSR is Read only
int data_read = 0;
data_read = sys_read(REG_MSR);

if(data_read == 0x0) //0x0 is Reset/default value
printf("MSR read value is %d\n", data_read);
else
printf("Error : MSR default value is not matching \n");



//SCR is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SCR read value is %d\n", data_read);
else
printf("Error : SCR default value is not matching \n");

//Writing value and check
sys_write(REG_SCR,0xF);
data_read = sys_read(REG_SCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SCR read value is %d\n", data_read);
else
printf("Error : SCR default value is not matching \n");


//LPDLL is read and write(R/W)
//Reading default value
data_read = sys_read(REG_LPDLL);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LPDLL read value is %d\n", data_read);
else
printf("Error : LPDLL default value is not matching \n");

//Writing value and check
sys_write(REG_LPDLL,0xF);
data_read = sys_read(REG_LPDLL);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LPDLL read value is %d\n", data_read);
else
printf("Error : LPDLL default value is not matching \n");


//LPDLH is read and write(R/W)
//Reading default value
data_read = sys_read(REG_LPDLH);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LPDLH read value is %d\n", data_read);
else
printf("Error : LPDLH default value is not matching \n");

//Writing value and check
sys_write(REG_LPDLH,0xF);
data_read = sys_read(REG_LPDLH);
if(data_read == 0x0) //0x0 is Reset/default value
printf("LPDLH read value is %d\n", data_read);
else
printf("Error : LPDLH default value is not matching \n");


//Since REG_SRBR is Read only and reading first 8 bits only as other bits are reserved
int data_read = 0;
data_read = sys_read(REG_SRBR);

if(data_read == 0x0) //0x0 is Reset/default value according to SRBR register
printf("SRBR read value is %d\n", data_read);
else
printf("Error : SRBR default value is not matching \n");


//STHR reg is write only
sys_write(REG_STHR,0xF); //0xF bcz first 8 bits are write only


//FAR is read and write(R/W)
//Reading default value
data_read = sys_read(REG_FAR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("FAR read value is %d\n", data_read);
else
printf("Error : FAR default value is not matching \n");

//Writing value and check
sys_write(REG_FAR,0xF);
data_read = sys_read(REG_FAR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("FAR read value is %d\n", data_read);
else
printf("Error : FAR default value is not matching \n");



//Since REG_TFR is Read only and reading first 8 bits only as other bits are reserved
int data_read = 0;
data_read = sys_read(REG_TFR);

if(data_read == 0x0) //0x0 is Reset/default value according to TFR register
printf("TFR read value is %d\n", data_read);
else
printf("Error : TFR default value is not matching \n");



//REG_RFW reg is write only
sys_write(REG_RFW,0xF); //0xF bcz first 10 bits are write only



//Since REG_USR is Read only and reading first 5 bits only as other bits are reserved
int data_read = 0;
data_read = sys_read(REG_USR);

if(data_read == 0x6) //0x6 is Reset/default value according to USR register
printf("USR read value is %d\n", data_read);
else
printf("Error : USR default value is not matching \n");



//Since REG_TFL is Read only
int data_read = 0;
data_read = sys_read(REG_TFL);

if(data_read == 0x0) //0x0 is Reset/default value according to TFL register
printf("TFL read value is %d\n", data_read);
else
printf("Error : TFL default value is not matching \n");



//Since REG_RFL is Read only
int data_read = 0;
data_read = sys_read(REG_RFL);

if(data_read == 0x0) //0x0 is Reset/default value according to RFL register
printf("RFL read value is %d\n", data_read);
else
printf("Error : RFL default value is not matching \n");



//SRR reg is write only
sys_write(REG_SRR,0xF); //0xF bcz first 3 bits are write only



//SRTS is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SRTS);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SRTS read value is %d\n", data_read);
else
printf("Error : SRTS default value is not matching \n");

//Writing value and check
sys_write(REG_SRTS,0xF);
data_read = sys_read(REG_SRTS);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SRTS read value is %d\n", data_read);
else
printf("Error : SRTS default value is not matching \n");



//SBCR is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SBCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SBCR read value is %d\n", data_read);
else
printf("Error : SBCR default value is not matching \n");

//Writing value and check
sys_write(REG_SBCR,0xF);
data_read = sys_read(REG_SBCR);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SBCR read value is %d\n", data_read);
else
printf("Error : SBCR default value is not matching \n");



//SDMAM is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SDMAM);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SDMAM read value is %d\n", data_read);
else
printf("Error : SDMAM default value is not matching \n");

//Writing value and check
sys_write(REG_SDMAM,0xF);
data_read = sys_read(REG_SDMAM);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SDMAM read value is %d\n", data_read);
else
printf("Error : SDMAM default value is not matching \n");



//SFE is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SFE);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SFE read value is %d\n", data_read);
else
printf("Error : SFE default value is not matching \n");

//Writing value and check
sys_write(REG_SFE,0xF);
data_read = sys_read(REG_SFE);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SFE read value is %d\n", data_read);
else
printf("Error : SFE default value is not matching \n");



//SRT is read and write(R/W)
//Reading default value
data_read = sys_read(REG_SRT);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SRT read value is %d\n", data_read);
else
printf("Error : SRT default value is not matching \n");

//Writing value and check
sys_write(REG_SRT,0xF);
data_read = sys_read(REG_SRT);
if(data_read == 0x0) //0x0 is Reset/default value
printf("SRT read value is %d\n", data_read);
else
printf("Error : SRT default value is not matching \n");



//STET is read and write(R/W)
//Reading default value
data_read = sys_read(REG_STET);
if(data_read == 0x0) //0x0 is Reset/default value
printf("STET read value is %d\n", data_read);
else
printf("Error : STET default value is not matching \n");

//Writing value and check
sys_write(REG_STET,0xF);
data_read = sys_read(REG_STET);
if(data_read == 0x0) //0x0 is Reset/default value
printf("STET read value is %d\n", data_read);
else
printf("Error : STET default value is not matching \n");



//HTX is read and write(R/W)
//Reading default value
data_read = sys_read(REG_HTX);
if(data_read == 0x0) //0x0 is Reset/default value
printf("HTX read value is %d\n", data_read);
else
printf("Error : HTX default value is not matching \n");

//Writing value and check
sys_write(REG_HTX,0xF);
data_read = sys_read(REG_HTX);
if(data_read == 0x0) //0x0 is Reset/default value
printf("HTX read value is %d\n", data_read);
else
printf("Error : HTX default value is not matching \n");



//DMASA reg is write only
sys_write(REG_DMASA,0xF); //0xF bcz first 1 bit is write only


//Since REG_CPR is Read only
int data_read = 0;
data_read = sys_read(REG_CPR);

if(data_read == 0x0) //0x0 is Reset/default value according to CPR register
printf("CPR read value is %d\n", data_read);
else
printf("Error : CPR default value is not matching \n");



//Since REG_UCV is Read only
int data_read = 0;
data_read = sys_read(REG_UCV);

if(data_read == 0x0) //0x0 is Reset/default value according to UCV register
printf("UCV read value is %d\n", data_read);
else
printf("Error : UCV default value is not matching \n");



//Since REG_CTR is Read only
int data_read = 0;
data_read = sys_read(REG_CTR);

if(data_read == 0x44570110) //0x44570110 is Reset/default value according to CTR register
printf("CTR read value is %d\n", data_read);
else
printf("Error : CTR default value is not matching \n");
