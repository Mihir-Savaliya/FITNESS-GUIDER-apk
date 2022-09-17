#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<time.h>
int j,a[5],value,val,i,m,s,temp;
float blood_Pressure[10],y[10];
char Permanent_illness[20],Permanent_illness1[20],diabitis[10],handicap[5],z[]="YES",x[]="VEG",k[]="MALE",w[5],u[5];
char blood_group[2],meal_type[10],gender[6];
float height,weight,age;
#define TRUE 1
void fitness0();
void fitness();
void meals();
void exerciselist();
void stopwatch();
void JUMPING_JACKS();
void ABDOMINAL_CRUNCHES();
void MOUNTAIN_CLIMBER();
void HEEL_TOUCH();
void PLANK();
void COBRA_STRETCH();
void SPINE_LUMBAR_TWIST_STRETCH_LEFT();
void SPINE_LUMBAR_TWIST_STRETCH_RIGHT();
void INCLINE_PUSH_UPS();
void BOX_PUSH_UPS();
void PUSH_UPS();
void INCLINE_PUSH_UPS();
void KNEE_PUSH_UPS();
void SHOULDER_STRETCH();
void report()
{
    fitness0();
   exerciselist();

}

void fitness0()
{
     clrscr();
     gotoxy(20,8);textcolor(0);
     cprintf("Height(FOOT.INCH) : " );
     gotoxy(44,8);textcolor(0);
     cscanf("%lf",&height);
     gotoxy(20,10);textcolor(0);
     cprintf("Weight(KG.GRAM) : " );
     gotoxy(44,10);textcolor(0);
     cscanf("%lf",&weight);
	  gotoxy(20,12);textcolor(0);
     cprintf("Age : " );
	  gotoxy(44,12);textcolor(0);
     cscanf("%lf",&age);
	  gotoxy(20,14);textcolor(0);
     cprintf("Gender(MALE/FEMALE) : " );
	  gotoxy(44,14);textcolor(0);
     cscanf("%s",gender);
	 gotoxy(20,20);
	cprintf("Check your details correct or not(YES/NO) : ");
	cscanf("%s",u);
	value=strcmp(z,u);
	if(value==0)
		fitness();
	else
		fitness0();
	 /*value=strcmp(k,gender);
	 if (value==0)
	 {
		if(height<=4.0 && weight<=35.0 || height<=5.0 && weight>35.0 && weight<=50.0 || height<=6.0 && weight>50.0  && weight<=85.0 || height<=7.0 && weight>85.0 && weight<=12.0)
			printf("You are healthy.");
			delay(2000);
		 elseif(height<=4.0 && weight>35.0 || height<=5.0 && weight>50.0 || height<=6.0 && weight>85.0 || height<=7.0 && weight>120.0);
			printf("You must be loss weight!!!");
			delay(2000);
		 elseif(height<=5.0 && weight<=27.0 || height<=6.0 && weight<=50.0 || height<=7.0 && weight<=85.0);
			printf("You must be gain your weight!!!");
			delay(2000);
		 //elseif(height<=5.0 && weight>35.0 && weight<=50.0);
			//printf("You are healthy.");
			//delay(2000);
		// elseif (height<=5.0 && weight>50.0);
			//printf("You must be loss weight!!!");
			//delay(2000);
		//elseif (height<=6.0 && weight<=50.0);
		//	printf("You must be gain your weight!!!");
			//delay(2000);
		//elseif (height<=6.0 && weight>50.0  && weight<=85.0);
			//printf("You are healthy.");
			//delay(2000);
		//elseif (height<=6.0 && weight>85.0);
			//printf("You must be loss weight!!!");
			//delay(2000);
		//elseif (height<=7.0 && weight<=85.0);
			//printf("You must be gain your weight!!!");
		//	delay(2000);
		//elseif (height<=7.0 && weight>85.0 && weight<=12.0) ;
			//printf("You are healthy.");
			//delay(2000);
		//elseif(height<=7.0 && weight>120.0);
			//printf("You must be loss weight!!!");
		//	delay(2000);
	    //	elseif(height>7.0);
	      //	printf("enter valid choice!!!");
		//fitness0();
	 }
	else
	 {
		 if(height<=4.0 && weight<=30.0)
			{printf("You are healthy.");
			delay(2000);}
		elseif (height<=4.0 && weight>30.0);
			{printf("You must be loss weight!!!");
			delay(2000);}
		 elseif (height<=5.0 && weight<=25.0);
			{printf("You must be gain your weight!!!");
			delay(2000);}
		 elseif (height<=5.0 && weight>30.0 && weight<=40.0);
			{printf("You are healthy.");
			delay(2000);}
		 elseif (height<=5.0 && weight>40.0);
			{printf("You must be loss weight!!!");
			delay(2000);}
		 elseif (height<=6.0 && weight<=63.0);
			{printf("You must be gain your weight!!!");
			delay(2000);}
		 elseif (height<=6.0 && weight>63.0 && weight<=77.0);
			{printf("You are healthy.");
			delay(2000);}
		 elseif (height<=6.0 && weight>77.0);
			{printf("You must be loss weight!!!");
			delay(2000);}
		 elseif (height<=7.0 && weight<=78.0);
			{printf("You must be gain your weight!!!");
			delay(2000);}
		 elseif (height<=7.0 && weight>78.0 && weight<=100.0);
			{printf("You are healthy.");
			delay(2000);}
		elseif (height<=7.0 && weight>100.0);
			{printf("You must be loss weight!!!");
			delay(2000);}
		elseif(height>7.0);
	       {	printf("enter valid choice!!!");
		fitness0();  }
	 }*/
}

void fitness()
{
    clrscr();
	gotoxy(20,8);textcolor(0);
    cprintf("Blood Group : ");
	gotoxy(50,8);textcolor(0);
    cscanf("%s",blood_group);
	gotoxy(20,10);textcolor(0);
    cprintf("Permanent illness(YES/NO): ");
	gotoxy(50,10);textcolor(0);
    cscanf("%s",Permanent_illness);
    value=strcmp(z,Permanent_illness);
    if(value==0)
    {
      gotoxy(20,12);textcolor(0);
	  cprintf("Your permanent illness name : ");
      gotoxy(50,12);textcolor(0);
	  cscanf("%s",Permanent_illness1);
    }
	gotoxy(20,14);textcolor(0);
    cprintf("Diabetes(YES/NO) : ");
	gotoxy(50,14);textcolor(0);
    cscanf("%s",diabitis);
    value=strcmp(z,diabitis);
    if(value==0)
    {
		gotoxy(20,16);textcolor(0);
		cprintf("Give your diabetes(mg/dL) : ");
		gotoxy(50,16);textcolor(0);
		cscanf("%lf",y);
    }
	gotoxy(20,18);textcolor(0);
    cprintf("Blood Pressure(mmHg) : ");
	gotoxy(50,18);textcolor(0);
    cscanf("%lf",blood_Pressure);
	gotoxy(20,20);textcolor(0);
    cprintf("Handicap(YES/NO) : ");
	gotoxy(50,20);textcolor(0);
    cscanf("%s",handicap);

	clrscr();
	gotoxy(20,8);textcolor(0);
    cprintf("Blood Group : %s",blood_group);
	gotoxy(20,10);
    cprintf("Permanent illness(YES/NO): %s ",Permanent_illness);
    value=strcmp(z,Permanent_illness);
    if(value==0)
    {
      gotoxy(20,12);textcolor(0);
	  cprintf("Your permanent illness name : %S ",Permanent_illness1);
    }
	gotoxy(20,14);
    cprintf("Diabetes(YES/NO) : %s ",diabitis);
	value=strcmp(z,diabitis);
    if(value==0)
    {
		gotoxy(20,16);textcolor(0);
		cprintf("Give your diabetes(mg/dL) : %lf ",y);
    }
	gotoxy(20,18);
    cprintf("Blood Pressure(mmHg) : %lf",blood_Pressure);
	gotoxy(20,20);
    cprintf("Handicap(YES/NO) : %S ",handicap);
	gotoxy(20,20);
	cprintf("Check your details correct or not(YES/NO) : ");
	cscanf("%s",w);
	value=strcmp(z,w);
	if(value==0)
		meals();
	else
		fitness();
}

void meals()
{
    clrscr();
    printf("Your are a veg or non veg : ");
    scanf("%s",meal_type);
    val=strcmp(meal_type,x);
    if(val==0)
    {
	    cprintf("\n SELECT DAILY ROUTINE 5 FOOD OUT OF 10.");
		cprintf("\n1.BREAD = 136 CAL");
		cprintf("\n2.BANANA = 117 CAL ");
		cprintf("\n3.TEA/COFEE = 73 CAL");
		cprintf("\n4.ROTI = 97 CAL");
		cprintf("\n5.DAL = 135 CAL");
		cprintf("\n6.RICE = 174 CAL");
		cprintf("\n7.CURD/BUTTERMILK = 90 CAL");
		cprintf("\n8.MIXED VEGETABLES = 82 CAL");
		cprintf("\n9.MIXED FRUITES = 120 CAL");
		cprintf("\n10.COLDDRINK/SNACKS = 41 CAL");
		cprintf("\n");
		cprintf("\nchoose any 5.");
		cprintf("\n");
		for(j = 0 ; j < 5 ; j++)
			{
			  scanf("%d",a[j]);
			}

	}
    else
    {
		cprintf("\n SELECT DAILY ROUTINE 5 FOOD OUT OF 10.");
		cprintf("\n1.BOILED EGG = 155 CAL");
		cprintf("\n2.FISH BIRYANI= 108 CAL ");
		cprintf("\n3.TEA/COFEE = 73 CAL");
		cprintf("\n4.CHICKEN CURRY = 110 CAL");
		cprintf("\n5.CHICKEN BIRYANI = 292 CAL");
		cprintf("\n6.GRILLED CHICKEN = 226 CAL");
		cprintf("\n7.CURD/BUTTERMILK = 90 CAL");
		cprintf("\n8.TANDOORI LAMP CHOPS = 150 CAL");
		cprintf("\n9.MIXED FRUITES = 120 CAL");
		cprintf("\n10.COLDDRINK = 41 CAL");
		cprintf("\n");
		cprintf("\nchoose any 5.");
		cprintf("\n");
		for(j = 0 ; j < 5 ; j++)
			{
				cscanf("%d", &a[j]);
			}

    }
}

void stopwatch()
{
	while(s<=30)
		{
			gotoxy(35,18);textcolor(0);
			cprintf("%2d : %2d",m,s);
			s++;
			delay(500);
			if(s==59)
			{
				m++;
				s=0;
			}
			if(m==59)
			{

				m=0;
				s=0;

			}


		}
}

void JUMPING_JACKS()
{
	gotoxy(1,8);textcolor(0);
	cprintf("JUMPING JACKS :-  \n");
	gotoxy(1,9);
	cprintf("Start with your feet together and your arms by your sides,");
	gotoxy(1,10);
	cprintf("then jump up with your feet apart and your hands overhead.");
	gotoxy(1,11);
	cprintf("Return to the start position then do the next rep.");
	gotoxy(1,12);
	cprintf("This exercise provides a full-body workout and works all your large muscle group.");
	stopwatch();
	delay(4000);
}

void ABDOMINAL_CRUNCHES()
{
	gotoxy(1,8);textcolor(0);
	cprintf("ABDOMINAL CRUNCHES :-");
	gotoxy(1,9);
	cprintf("Lie on your back with your knees bent and your arms stretched forward.");
	gotoxy(1,10);
	cprintf("Then lift your upper body off the floor.");
	gotoxy(1,11);
	cprintf("Hold for a few seconds and slowly return.");
	gotoxy(1,12);
	cprintf("It primarily works the rectus abdominis muscle and the obliques.");
	stopwatch();
	delay(4000);
	clrscr();
}


void MOUNTAIN_CLIMBER()
{
	gotoxy(1,8);textcolor(0);
	cprintf("\nMOUNTAIN CLIMBER :-");
	gotoxy(1,9);
	cprintf("Start in the push-up position. Bend your right knee towards your chest and keep your left leg straight,");
	gotoxy(1,10);
	cprintf("then quickly switch from one leg to the other.");
	gotoxy(1,11);
	cprintf("This exercise strengthens multiple muscle groups.");
	stopwatch();
	delay(4000);
	clrscr();
}

void HEEL_TOUCH()
{
	gotoxy(1,8);textcolor(0);
	cprintf("HEEL TOUCH :-");
	gotoxy(1,9);
	cprintf("Lie on the ground with your legs bent and your arms by your sides.");
	gotoxy(1,10);
	cprintf("Slightly lift your upper body off the floor and make your hands alternately reach your heels.");
	stopwatch();
	delay(4000);
	clrscr();
}

void PLANK()
{
	gotoxy(1,8);textcolor(0);
	cprintf("PLANK :-");
	gotoxy(1,9);
	cprintf("Lie on the floor with your toes and forearms on the ground.");
	gotoxy(1,10);
	cprintf("Keep your body straight and hold this position as long as you can.");
	gotoxy(1,11);
	cprintf("This exercise strengthens the abdomen, back and shoulders.");
	stopwatch();
	delay(4000);
	clrscr();
}

void COBRA_STRETCH()
{
	gotoxy(1,8);textcolor(0);
	cprintf("COBRA STRETCH :-");
	gotoxy(1,9);
	cprintf("Lie down on your stomach and bend your elbows with your hands beneath your shoulders.");
	gotoxy(1,10);
	cprintf("Then push your chest up off the ground.");
	gotoxy(1,11);
	cprintf("as far as possible. Hold this position for seconds.");
	stopwatch();
	delay(4000);
	clrscr();
}

void SPINE_LUMBAR_TWIST_STRETCH_LEFT()
{
	gotoxy(1,8);textcolor(0);
	cprintf("SPINE LUMBAR TWIST STRETCH LEFT :-");
	gotoxy(1,9);
	cprintf("Lie on your back with your legs extended.");
	gotoxy(1,10);
	cprintf("Lift your left leg up and use your right hand to pull your left knee to the right,");
	gotoxy(1,11);
	cprintf("but keep your other arm extended to the side on the floor.");
	gotoxy(1,12);
	cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();
}

void SPINE_LUMBAR_TWIST_STRETCH_RIGHT()
{
	gotoxy(1,8);textcolor(0);
	cprintf("SPINE LUMBAR TWIST STRETCH RIGHT :-");
	gotoxy(1,9);
	cprintf("Lie on your back with your legs extended.");
	gotoxy(1,10);
	cprintf("Lift your right leg up and use your left hand to pull your right knee to the left,");
	gotoxy(1,11);
	cprintf("but keep your other arm extended to the side on the floor.");
	gotoxy(1,12);
	cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();
}

void INCLINE_PUSH_UPS()
{
	gotoxy(1,7);textcolor(0);
    cprintf("INCLINE PUSH-UPS :-");
	gotoxy(1,9);
    cprintf("Start in the regular push-up position but with your hands elevated on a chair or bench.");
	gotoxy(1,10);
    cprintf("Then push your body up down using your arm strength.");
	gotoxy(1,11);
    cprintf("Remember to keep your body straight.");
    stopwatch();
	delay(4000);
	clrscr();
}

void BOX_PUSH_UPS()
{
	gotoxy(1,7);textcolor(0);
    cprintf("BOX PUSH-UPS :- ");
	gotoxy(1,9);
    cprintf("Start on all fours with your knees under your butt and your hands directly under your shoulders.");
	gotoxy(1,11);
    cprintf("Bend your elbows and do a push-up.");
	gotoxy(1,12);
    cprintf("Return to the start position and repeat.");
    stopwatch();
	delay(4000);
	clrscr();
}

void PUSH_UPS()
{
	gotoxy(1,7);textcolor(0);
    cprintf("PUSH-UPS :- ");
	gotoxy(1,9);
    cprintf("Lay prone on the ground with arms supporting your body.");
	gotoxy(1,10);
    cprintf("Keep your body straight while raising and lowering your body with your arms.");
	gotoxy(1,11);
    cprintf("This exercise works the chest, shoulders, triceps, back and legs.");
    stopwatch();
	delay(4000);
	clrscr();
}

void KNEE_PUSH_UPS()
{
	gotoxy(1,7);textcolor(0);
    cprintf("KNEE PUSH-UPS :- ");
	gotoxy(1,9);
    cprintf("Start in the regular push-up position.");
	gotoxy(1,10);
    cprintf("then let your knees touch the floor and raise your feet up off the floor.");
	gotoxy(1,11);
    cprintf("Next push your body up and down.");
    stopwatch();
	delay(4000);
	clrscr();
}

void SHOULDER_STRETCH()
{
	gotoxy(1,7);textcolor(0);
    cprintf("SHOULDER STRETCH :- ");
	gotoxy(1,9);
    cprintf("Place one arm across your body,");
	gotoxy(1,10);
    cprintf("parallel to the ground, then use the other arm to pull the parallel arm toward your chest.");
	gotoxy(1,12);
    cprintf("Hold for a while, switch arms and repeat the exercise. Keep the inside arm straight during the exercise.");
    stopwatch();
	delay(4000);
	clrscr();
}

void SQUAT()
{
	gotoxy(1,7);textcolor(0);
    cprintf("SQUATS :- ");
	gotoxy(1,9);
    cprintf("Stand with your feet shoulder width apart and your arms stretched forward,");
	gotoxy(1,10);
    cprintf("then lower your body until your thighs are parallel with the floor.");
	gotoxy(1,11);
    cprintf("Your knees should be extended in the same direction as your toes.");
	gotoxy(1,12);
    cprintf("Return to the start position and do the next rep.");
	gotoxy(1,13);
    cprintf("This works the thighs, hips buttocks, quads, hamstrings and lower body.");
	stopwatch();
	delay(4000);
	clrscr();
}

void SIDE_LYING_LEG_LIFT_LEFT()
{
	gotoxy(1,7);textcolor(0);
    cprintf("SIDE-LYING LEG LIFT LEFT :- ");
	gotoxy(1,9);
    cprintf("Lie down on your side with your head rested on your right arm.");
	gotoxy(1,10);
    cprintf("Lift your upper leg up and return to the start position.");
	gotoxy(1,11);
    cprintf("Make sure your left leg goes straight up and down during the exercise.");
	gotoxy(1,12);
    cprintf("It's a great exercise for the gluteus.");
	stopwatch();
	delay(4000);
	clrscr();
}
void SIDE_LYING_LEG_LIFT_RIGHT()
{
	gotoxy(1,7);textcolor(0);
    cprintf("SIDE-LYING LEG LIFT RIGHT");
	gotoxy(1,9);
    cprintf("Lie down on your side with your head rested on your left arm.");
	gotoxy(1,10);
    cprintf("Lift your upper leg up and return to the start position.");
	gotoxy(1,11);
    cprintf("Make sure your right leg goes straight up and down during the exercise.");
	gotoxy(1,12);
    cprintf("It's a great exercise for the gluteus.");
	stopwatch();
	delay(4000);
	clrscr();
}

void SIDE_LUNGES()
{
    gotoxy(1,7);textcolor(0);
    cprintf("SIDE LUNGES");
	gotoxy(1,9);
    cprintf("Stand straight with your feet together.");
	gotoxy(1,10);
    cprintf("Move your right leg to the side,");
	gotoxy(1,11);
    cprintf("then lower your body while keeping your left leg straight.");
	gotoxy(1,12);
    cprintf("Go back to the start position and switch to the other side.");
	stopwatch();
	delay(4000);
	clrscr();
}

void DONKEY_KICKS_LEFT()
{
	gotoxy(1,7);textcolor(0);
    cprintf("DONKEY KICKS LEFT");
	gotoxy(1,9);
    cprintf("Start on all fours with your knees under your butt and your hands under your shoulders.");
	gotoxy(1,11);
    cprintf("Then lift your left leg and squeeze your butt as much as you can.");
	gotoxy(1,12);
    cprintf("Go back to the start position and repeat the exercise.");
	stopwatch();
	delay(4000);
	clrscr();
}
void DONKEY_KICKS_RIGHT()
{
	gotoxy(1,7);textcolor(0);
    cprintf("DONKEY KICKS RIGHT");
	gotoxy(1,9);
    cprintf("Start on all fours with your knees under butt and your hands under shoulders.");
	gotoxy(1,11);
    cprintf("Then lift your right leg and squeeze your butt as much as you can.");
	gotoxy(1,12);
    cprintf("Go back to the start position and repeat the exercise.");
	stopwatch();
	delay(4000);
	clrscr();
}

void AbsWorkout()
{
	clrscr();
	textbackground(7);
	gotoxy(35,5);textcolor(0);
	printf("ABS WORKOUT \n");
	JUMPING_JACKS();
	ABDOMINAL_CRUNCHES();
	ABDOMINAL_CRUNCHES();
	MOUNTAIN_CLIMBER();
	HEEL_TOUCH();
	PLANK();
	COBRA_STRETCH();
	SPINE_LUMBAR_TWIST_STRETCH_LEFT();
	SPINE_LUMBAR_TWIST_STRETCH_RIGHT();
}


void ArmWorkout()
{
	clrscr();
		textbackground(7);
		textcolor(0);
		gotoxy(35,5);
	cprintf("ARM & CHEST WORKOUT");
    JUMPING_JACKS();
	INCLINE_PUSH_UPS();
	BOX_PUSH_UPS();
	PUSH_UPS();
	INCLINE_PUSH_UPS();
 	KNEE_PUSH_UPS();	
	SHOULDER_STRETCH();
	COBRA_STRETCH();	
}

void LegWorkout()
{
	clrscr();
		textbackground(7);
		textcolor(0);
		gotoxy(35,5);
	printf("ABS WORKOUT");
	JUMPING_JACKS();
	SQUAT();
	SIDE_LYING_LEG_LIFT_LEFT();
	SIDE_LYING_LEG_LIFT_RIGHT();
	SIDE_LUNGES();
	DONKEY_KICKS_LEFT();
	DONKEY_KICKS_RIGHT();

	gotoxy(1,7);textcolor(0);
    cprintf("LEFT QUAD STRETCH WITH WALL");
	gotoxy(1,9);
    cprintf("Stand with your right hand on the wall.");
	gotoxy(1,10);
    cprintf("Bend your left leg and grasp your ankle or toes to bring your left calf close to your left thigh.");
	gotoxy(1,12);
    cprintf("Hold this position.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("RIGHT QUAD STRETCH WITH WALL");
	gotoxy(1,9);
    cprintf("Stand with your left hand on the wall.");
	gotoxy(1,10);
    cprintf("Bend your right leg and grasp your ankle or toes to bring your right calf close to your right thigh.");
	gotoxy(1,12);
    cprintf("Hold this position.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("KNEE TO CHEST STRETCH LEFT :- ");
	gotoxy(1,9);
    cprintf("Lie on the floor with your legs extended.");
	gotoxy(1,10);
    cprintf("Lift your left knee up and grab it with both hands.");
	gotoxy(1,11);
    cprintf("Pull your left knee towards your chest as much as you can while keeping your right leg straight on the ground.");
	gotoxy(1,13);
    cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("KNEE TO CHEST STRETCH RIGHT :- ");
	gotoxy(1,9);
    cprintf("Lie on the floor with your legs extended.");
	gotoxy(1,10);
    cprintf("Lift your right knee up and grab it with both hands.");
	gotoxy(1,11);
    cprintf("Pull your right knee towards your chest as much as you can while keeping your left leg straight on the ground.");
	gotoxy(1,13);
    cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("WALL CALF RAISES :- ");
	gotoxy(1,9);
    cprintf("Stand straight with your hands on the wall and feet shoulder width apart.");
	gotoxy(1,11);
    cprintf("Lift your heels and stand on your toes.");
	gotoxy(1,12);
    cprintf("Then drop your heels down. Repeat the exercise.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("CALF STRETCH LEFT :- ");
	gotoxy(1,9);
    cprintf("Stand one big step away in front of a wall.");
	gotoxy(1,10);
    cprintf("Step forward with your right foot and push the wall with your hands.");
	gotoxy(1,12);
    cprintf("Please make sure your left leg is fully extended and you can feel your left calf stretching.");
	gotoxy(1,13);
    cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    cprintf("CALF STRETCH RIGHT :- ");
	gotoxy(1,9);
    cprintf("Stand one big step away in front of a wall.");
	gotoxy(1,10);
    cprintf("Step forward with your left foot and push the wall with your hands.");
	gotoxy(1,11);
    cprintf("Please make sure your right leg is fully extended and you can feel your right calf stretching.");
	gotoxy(1,13);
    cprintf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
      
}

void ShoulderWorkout()
{
	clrscr();
	textbackground(7);
    textcolor(0);
    gotoxy(35,5);
    printf("SHOULDER & BACK WORKOUT");

	JUMPING_JACKS();

    gotoxy(1,7);textcolor(0);
    printf("ARM RAISES");
	gotoxy(1,9);
    printf("Stand on the floor with your arms extended straight forward at shoulder height.");
	gotoxy(1,11);
    printf("Raise your arms above your head.");
	gotoxy(1,12);
    printf("Return to the start position and repeat.");
	stopwatch();
	delay(4000);
	clrscr();

    gotoxy(1,7);textcolor(0);
    printf("RHOMBOID PULLS");
	gotoxy(1,9);
    printf("Stand with your feet shoulder width apart.");
	gotoxy(1,10);
    printf("Raise your arms parallel to the ground, and bend your elbows.");
	gotoxy(1,12);
    printf("Pull your elbows back and squeeze your shoulder blades.");
	stopwatch();
	delay(4000);
	clrscr();
    printf("Repeat this exercise.");

 	gotoxy(1,7);textcolor(0);
    printf("SIDE ARM RAISE");
	gotoxy(1,9);
    printf("Stand with your feet shoulder width apart.");
	gotoxy(1,10);
    printf("Raise your arms to the sides at shoulder height, then put them down.");
	gotoxy(1,12);
    printf("Repeat the exercise. Keep your arms straight during the exercise.");
	stopwatch();
	delay(4000);
	clrscr();

    gotoxy(1,7);textcolor(0);
    printf("KNEE PUSH-UPS");
	gotoxy(1,9);
    printf("Start in the regular push-up position,");
	gotoxy(1,10);
    printf("then let your knees touch the floor and raise your feet up off the floor.");
	gotoxy(1,12);
    printf("Next push your body up and down.");
	stopwatch();
	delay(4000);
	clrscr();

    gotoxy(1,7);textcolor(0);
    printf("SIDE-LYING FLOOR STRETCH LEFT");
	gotoxy(1,9);
    printf("Lie on your right side with your right knee slightly bent in front of you and your left leg stretched behind the right leg.");
	gotoxy(1,12);
    printf("Straighten your left arm over your head and gently pull on your left wrist to stretch the left side of your body.");
    gotoxy(1,15);
	printf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();

    gotoxy(1,7);textcolor(0);
    printf("SIDE-LYING FLOOR STRETCH RIGHT");
	gotoxy(1,9);
    printf("Lie on your left side with your left knee slightly bent in front of you and your right leg stretched behind the left leg.");
    gotoxy(1,12);
	printf("Straighten your right arm over your head and gently pull on your right wrist to stretch the right side of your body.");
    gotoxy(1,15);
	printf("Hold this position for a few seconds.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    printf("CAT COW POSE");
	gotoxy(1,9);
    printf("Start on all fours with your knees under your butt and your hands directly under your shoulders.");
    gotoxy(1,11);
	printf("Then take a breath and make your belly fall down,");
    gotoxy(1,12);
	printf("shoulders roll back and head come up towards the ceiling.");
    gotoxy(1,13);
	printf("As you exhale, curve your back upward and let your head come down.");
    gotoxy(1,14);
	printf("Repeat the exercise.");
    gotoxy(1,15);
	printf("Do it slowly with each step of this exercise.");
	stopwatch();
	delay(4000);
	clrscr();

	gotoxy(1,7);textcolor(0);
    printf("CHILD'S POSE");
	gotoxy(1,9);
    printf("Start with your knees and hands on the floor.");
    gotoxy(1,10);
	printf("Put your hands a little forward, widen your knees and put your toes together.");
    gotoxy(1,12);
	printf("Take a breath, then exhale and sit back.");
    gotoxy(1,13);
	printf("Try to make your butt touch your heels. Relax your elbows,");
    gotoxy(1,14);
	printf("make your forehead touch the floor and try to lower your chest close to the floor. Hold this position.");
    gotoxy(1,16);
	printf("Keep your arms stretched forward as you sit back.");
    gotoxy(1,17);
	printf("Make sure there is enough space between your shoulders and ears during the exercise.");
	stopwatch();
	delay(4000);
	clrscr();
	
}

void exerciselist()
{
	int i;
	textbackground(7);
	clrscr();
	gotoxy(20,10);textcolor(0);
	cprintf("1.ABS WORKOUT");
	gotoxy(20,11);textcolor(0);
	cprintf("2.ARM CHEST WORKOUT");
	gotoxy(20,12);textcolor(0);
	cprintf("3.LEG WORKOUT");
	gotoxy(20,13);textcolor(0);
	cprintf("4.SHOULDER BACK WORKOUT");
	gotoxy(20,14);textcolor(0);
	cprintf("5.EXIT");
	gotoxy(20,16);textcolor(0);
	cprintf("select the anyone exercise option : ");
	gotoxy(55,16);textcolor(0);
	cscanf("%d",&i);
	switch (i)
	{
	case 1:
		AbsWorkout();
		exerciselist();
		break;
		case 2:
		ArmWorkout();
		exerciselist();
		break;
		case 3:
		LegWorkout();
		exerciselist();
		break;
		case 4:
		ShoulderWorkout();
		exerciselist();
		break;
		case 5:
		 exit(0);
		 break;
	default:
	printf("select only given option");
		exerciselist();
		break;
	}
}
