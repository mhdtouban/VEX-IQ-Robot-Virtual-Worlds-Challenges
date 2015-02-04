
task main()
{
//forward
motor[port1] = 127;
motor[port10] = -127;
wait1Msec(3000);

//rotate left
motor[port1] = 30;
wait1Msec(1200);

//forward
motor[port1] = 127;
motor[port10] = -127;
wait1Msec(2300);

//restet encoders
resetMotorEncoder(port1);
resetMotorEncoder(port10);
wait1Msec(1000);

//rotate right
motor[port10] = 30;
wait1Msec(1200);



}
