//by default moves at half power for 2 seconds

//Add to header:
int BMOT_MVF_PWR;
int BMOT_MVF_TIME;

//Add to task:
BMOT_MVF_PWR = 63;
BMOT_MVF_TIME = 2000;

motor[bmot_lf] = 63;
motor[bmot_lb] = 63;
motor[bmot_rf] = 63; 
motor[bmot_rb] = 63;

wait1MSec(BMOT_MVF_TIME);
