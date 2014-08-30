
int MEN;
task main()
{
nMotorEncoder[motorB] = 0;

	while(true != false)
	{
		motor[motorB] = 50;
		MEN = nMotorEncoder[motorB];
		if(motor[motorB] != 0)
		{
			if(nMotorEncoder[motorB] > MEN - 3 && nMotorEncoder[motorB] < MEN + 10)
			{
				motor[motorB] = 0;
			}
		}
		MEN = nMotorEncoder[motorB];
	}

}
