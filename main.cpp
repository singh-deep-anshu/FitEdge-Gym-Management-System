#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <conio.h>
using namespace std;
int main();
char username[200];
char password[200];
class Credential {
public:
void payment_methods() {
system("cls");
cout <<
"\n=============================================================\n";
cout << "\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n";
cout << "\n\tOption A: Fitness / Normal Membership - 1 Month (5 days a week) - Rs 520";
cout << "\n\tOption B: Fitness / Normal Membership - 1 Month (3 days a week) - Rs 1115";
cout << "\n\tOption C: Fitness / Student Discount - 1 Month (3 days a week) - Rs 1110\n";
cout << "\n\tOption D: Swimming / Normal Membership - 1 Month (5 days a week) - Rs 1125";
cout << "\n\tOption E: Swimming / Normal Membership - 1 Month (3 days a week) - Rs 1120";
cout << "\n\tOption F: Swimming / Student Discount - 1 Month (3 days a week) - Rs 1115\n";
cout << "\n\tOption G: Fitness and Swimming / Normal Membership - 1 Month (5 days a week) - Rs 1140";
cout << "\n\tOption H: Fitness and Swimming / Normal Membership - 1 Month (3 days a week) - Rs 1130";
cout << "\n\tOption I: Fitness and Swimming / Student Discount - 1 Month (3 days a week) - Rs 1120";
cout <<
"\n\n=============================================================\n\n"
;
cout << "Press any key to return to the main menu...\n";
cin.ignore();
cin.get();
system("cls");
main();
}
void signupFunction() {
system("cls");
cout << "\nChoose an username : \n";
cin >> username;
cout << "Choose a numeric password : \n";
cin >> password;
cout << "\n **Your account is ready to use. Please go back.** \n";
system("cls");
main();
}
void loginFunction() {
system("cls");
char userName[200];
char passWord[200];
tekrar:
cout << "\nPlease enter username: \t";
cin >> userName;
cout << "\nPlease enter numeric password : ";
cin >> passWord;
if (strcmp(username, userName) == 0 && strcmp(password,
passWord) == 0) {
cout << "\n\nLogin successful. Press any key to continue.\n";
// Access granted ;
cin.ignore();
cin.get();
x:
system("cls");
int secim2;
cout <<
"\n=============================================================\n";
cout << "\n\n\t\tMEMBER MANAGEMENT";
cout << "\n\n\tPlease select an option: ";
cout << "\n\t1. Delete a member.";
cout << "\n\t2. View the list of all members.";
cout <<
"\n\n=============================================================\n\n"
;
cout << "\n\n\tENTER YOUR CHOICE:\t";
cin >> secim2;
if (secim2 == 2) //displaying members.txt on screen***********************
{
system("cls");
FILE * dosya;
char character;
dosya = fopen("MemberList.txt", "r");
if (dosya != NULL) {
character = fgetc(dosya);
while (character != EOF) {
printf("%c", character);
character = fgetc(dosya);
}
}
else {
printf("\nFile does not exist. Try Again.");
goto x;
}
fclose(dosya);
printf("\nPress any key to return to the main menu.");
getch();
system("cls");
main();
} else if (secim2 == 1)
{
FILE * dosya;
char isimler[30], soyisimler[30], branchs[30], options[10];
char mem[20], adrs[25], id[30];
int ag, cono, count = 0;
FILE * fp;
dosya = fopen("Memberlist.txt", "r");
fp = fopen("NewMemberlist.txt", "w");
printf("\nEnter the name of member: \n");
getchar();
gets(mem);
while (!feof(dosya)) {
fscanf(dosya, "%s%s%s", & isimler, & soyisimler, & branchs);
if (strcmp(isimler, mem) != 0) {
fprintf(fp, "%s %s %s\n", isimler, soyisimler, branchs);
} else if (strcmp(isimler, mem) == 0) {
printf("\nDetails of the deleted member is:\n");
printf("Name : %s\nSurname : %s\nBranch : %s\n", isimler,
soyisimler, branchs);
} else {
printf("\nPlease enter the correct details\n");
}
}
fclose(dosya);
fclose(fp);
dosya = fopen("Memberlist.txt", "w");
fp = fopen("NewMemberlist.txt", "r");
while (!feof(fp)) {
fscanf(fp, "%s %s %s", & isimler, & soyisimler, & branchs);
fprintf(dosya, "%s %s %s\n", isimler, soyisimler, branchs);
}
fclose(fp);
fclose(dosya);
}
getch();
system("cls");
main();
} else {
printf("\n\nWrong username or password.\nPlease try again or sign up.\n");
goto tekrar;
}
}
};
class Member {
public:
//--------------------------------------------------------------------------------------------------------------------------
void new_member() {
system("cls");
char isim[30], soyisim[30], branch[30], paymentMethod[10];
printf("\nEnter Name: \t");
scanf("%s", isim);
printf("\nEnter Surname: ");
scanf("%s", soyisim);
printf("\nEnter Main Branch: ");
scanf("%s", branch);
printf("\n\nChoose a payment method: ");
printf("\n============================================================= \n");
printf("\n\n\t\tPAYMENT METHODS AND DISCOUNTS\n\n");
printf("\n\tA- Fitness / Normal Membership: 1 Month (5 days a week) - 2000Rs");
printf("\n\tB- Fitness / Normal Membership: 1 Month (3 days a week) - 1500Rs");
printf("\n\tC- Fitness / Student Discount: 1 Month (3 days a week) - 1000Rs\n");
printf("\n\tD- Swimming / Normal Membership: 1 Month (5 days a week) - 2500Rs");
printf("\n\tE- Swimming / Normal Membership: 1 Month (3 days a week) - 2000Rs");
printf("\n\tF- Swimming / Student Discount: 1 Month (3 days a week) - 1500Rs\n");
printf("\n\tG- Fitness and Swimming / Normal Membership: 1 Month (5 days a week) - 4000Rs");
printf("\n\tH- Fitness and Swimming / Normal Membership: 1 Month (3 days a week) - 3000Rs");
printf("\n\tI- Fitness and Swimming / Student Discount: 1 Month (3 days a week) - 2000Rs");
printf("\n\n=============================================================\n\n");
printf("Enter the choice with Letter: \t");
scanf("%s", paymentMethod);
FILE * f;
f = fopen("MemberList.txt", "a");
fprintf(f, "%s %s %s\n", isim, soyisim, branch);
fclose(f);
printf("\nPress any key to return to the main menu.");
getch();
system("cls");
main();
}
//--------------------------------------------------------------------------------------------------------------------------
void member_management() {
Credential credential;
system("cls");
int secim;
printf("\n=============================================================\n");
printf("\n\n\t\tADMINISTRATIVE LOGIN PAGE");
printf("\n\n\t1.Login to system with username and password.");
printf("\n\t2.Sign-up to system.");
printf("\n\n=============================================================\n\n");
printf("\n\n\tENTER YOUR CHOICE:\t");
scanf("%d", & secim);
switch (secim) {
case 1:
credential.loginFunction();
break;
case 2:
credential.signupFunction();
break;
default:
printf("\nWrong choice. Please try again.\n");
break;
}
}
};
class Gym {
    public:
//--------------------------------------------------------------------------------------------------------------------------
void workout() {
int c, u;
system("cls");
printf("\n\n\n\n");
printf("\t ** BE THE BEAST AND WORK HARD ***\n\n\n");
printf("\t ** ALWAYS HEALTH COMES FIRST ***\n\n\n");
printf("\t ** PRESS ANY KEY TO SELECT THE WORK OUT ***\n\n\n");
getch();
system("cls");
z:
printf("\n\n\n\n\n\n");
printf("\tPRE-WORKOUT EXERCISE ARE COMPLUSORY\n\n\n");
printf("\t1 : CHEST WORKOUT\n\n");
printf("\t2 : BACK WORKOUT\n\n");
printf("\t3 : BICEPS WORKOUT\n\n");
printf("\t4 : TRICEPS WORKOUT\n\n");
printf("\t5 : ABS WORKOUT\n\n");
printf("\t6 : SHOULDER WORKOUT\n\n");
printf("\t7 : LEGS\n\n");
printf("\t8 : BACK TO MAIN MENU\n\n");
printf("\t");
scanf("%d", & c);
system("cls");
switch (c) {
case 1:
printf("\n");
printf("\t PUSH UP: 3 SETS; 15,12,10 REPS\n\n");
printf("\t INCLINED BENCH-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t FLAT BENCH-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t DECLINED BENCH-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t INCLIDE DUMBBELL-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t FLAT DUMBELL-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t DECLINED DUMBELL-PRESS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t CABLE CROSS: 3 SETS; 15,12,10 REPS\n\n");
printf("\t SEATED MACHINE FLY: 3 SETS; 15,12,10 REPS\n\n");
printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n\n\n");
printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 2:
std::cout << "\n";
std::cout << "\t WIDE GRIP PULL-UP: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t LAT PULL DOWN BACK: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t T-BAR ROW: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t SEATED ROW: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PULL DOWN ROW: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t ONE ARM DUMBBELL ROWS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t BARBELL BENT OVER ROW: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t DEADLIFT: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PLEASE USE APPROPRIATE WEIGHTS\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 3:
std::cout << "\n";
std::cout << "\t WIDE GRIP PULL-UP: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PREACHER CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t BARBELL CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t ALTERNATING DUMBBELL CURLS:3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t CONCENTRATION CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t CABLE BICEP CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t INCLINE DUMBBELL CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t REVERSE CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t HAMMER CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PLEASE USE APPROPRIATE WEIGHTS\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 4:
std::cout << "\n";
std::cout << "\t TRICEPS DIPS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t CLOSE-GRIP BENCH PRESS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t SKULL CRUSHERS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t OVERHEAD DUMBBELL EXTENSION: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t CABLE ROPE PUSH-DOWN: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t REVERSE GRIP TRICEPS PUSH-DOWN:3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t TRICEPS KICKBACK: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t DIAMOND PUSH-UP: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t TRICEPS CABLE PUSHDOWN: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PLEASE USE APPROPRIATE WEIGHTS\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 5:
std::cout << "\n";
std::cout << "\t HANGING LEG RAISE: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t MACHINE CRUNCH: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t CABLE PALLOF PRESS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t KNEELING CABLE CRUNCH: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t DECLINE-BENCH CRUNCH WITH MEDICINE BALL: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t EXERCISE BALL PIKE: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PLANK: 7,5,3 MINUTES\n\n";
std::cout << "\t PLEASE AVOID LIFTING EXCESSIVE WEIGHT\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 6:
std::cout << "\n";
std::cout << "\t DUMBBELL BENCH PRESS: 4 SETS; 12,10,8,8 REPS\n\n";
std::cout << "\t INCLINE DUMBBELL PRESS: 3 SETS; 10,8,8 REPS\n\n";
std::cout << "\t DUMBBELL FLYES: 3 SETS; 10,10,10 REPS\n\n";
std::cout << "\t CABLE CROSSOVERS: 3 SETS; 12,12,12 REPS\n\n";
std::cout << "\t TRICEPS DIPS: 3 SETS; 12,10,10 REPS\n\n";
std::cout << "\t TRICEPS PUSHDOWNS: 3 SETS; 12,12,10 REPS\n\n";
std::cout << "\t OVERHEAD TRICEPS EXTENSIONS: 3 SETS; 10,10,8 REPS\n\n";
std::cout << "\t PLEASE AVOID LIFTING EXCESSIVE WEIGHT\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 7:
std::cout << "\n";
std::cout << "\t SET-UPS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t SUMO DUMBBELL SQUATS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t LUNGES WITH DUMBBELLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t SEATED LEG CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t SEATED MACHINE EXTENSIONS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t STANDING DUMBBELL CALF RAISES: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t REVERSE LEG CURLS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t HEAVY LEG PRESS: 3 SETS; 15,12,10 REPS\n\n";
std::cout << "\t PLEASE AVOID LIFTING EXCESSIVE WEIGHT\n\n";
std::cout << "\t TO RETURN TO THE WORKOUT LIST, PLEASE PRESS '2' ";
scanf("%d", & u);
if (u == 2) {
system("cls");
goto z;
} else
break;
case 8:
main();
break;
}
}
void rules() {
system("cls");
std::cout <<
"\t\t=============================================================\n";
std::cout << "\n\t\t RULES AND REGULATIONS \n";
std::cout <<
"\t\t=============================================================\n";
std::cout << "\n\t1. Do not bring your gym bag or other personal belongings onto the fitness floor.\n";
std::cout << "\t2. Refrain from yelling, using profanity, banging weights, and making loud sounds.\n";
std::cout << "\t3. Do not occupy machines between sets.\n";
std::cout << "\t4. Please re-rack weights and return all other equipment and accessories to their designated places.\n";
std::cout << "\t5. Ask the staff for assistance in operating equipment to avoid delays for others.\n";
std::cout << "\t6. After use, make sure to wipe down all equipment.\n";
std::cout << "\t7. Adhere to the posted time limits on all cardiovascular machines.\n";
std::cout << "\t8. Children are not allowed on the gym floor. Please keep them in the designated childcare area.\n";
std::cout << "\t9. Respect others' workouts and maintain a focused environment.\n";
std::cout << "\t10. Before starting your workout, please wash your hands and refrain from using heavy scents.\n\n";
std::cout << "\n\tPRESS ANY KEY TO RETURN TO THE MAIN MENU\n";
getch();
system("cls");
main();
}
void bmi_calculation() {
system("cls");
float height, weight, bmi = 0;
int age;
printf("\nPlease enter weight (kg): \n");
scanf("%f", & weight);
printf("Please enter height (dot m): \n");
scanf("%f", & height);
bmi = weight / (height * height);
if (bmi < 18.50) {
printf("\n\nYou are below your ideal weight.\n\n");
printf("The result is : %.2f\n\n", bmi);
} else if (bmi >= 18.50 && bmi < 24.99) {
printf("\n\nYour weight is ideal.\n\n");
printf("The result is : %.2f\n\n", bmi);
} else if (bmi > 25) {
printf("\n\nYou are above your ideal weight.\n\n");
printf("The result is : %.2f\n\n", bmi);
}
printf("Press any key to return to the main menu.\n");
getch();
system("cls");
main();
}
};
class MainMenu {
Member member;
Credential credential;
Gym gym;
public:
void mainMenu(void) {
system("COLOR 1F");
int rakam;
std::cout <<
"\n=============================================================\n";
std::cout << "\n\n\t\tWELCOME TO GYM MANAGEMENT SOFTWARE";
std::cout << "\n\n\t1. CREATE A NEW MEMBER";
std::cout << "\n\t2. MEMBER MANAGEMENT (requires admin login)";
std::cout << "\n\t3. WORKOUT PROGRAM SUGGESTION";
std::cout << "\n\t4. RULES AND REGULATIONS";
std::cout << "\n\t5. REVIEW PAYMENT METHODS & DISCOUNTS";
std::cout << "\n\t6. MAKE A BMI CALCULATION";
std::cout << "\n\t7. EXIT";
std::cout <<
"\n\n=============================================================\n\n"
;
std::cout << "\n\n\tENTER YOUR CHOICE:\t";
scanf("%d", & rakam);
switch (rakam) {
case 1:
member.new_member();
break;
case 2:
member.member_management();
break;
case 3:
gym.workout();
break;
case 4:
gym.rules();
break;
case 5:
credential.payment_methods();
break;
case 6:
gym.bmi_calculation();
break;
case 7:
printf("\n\n\tTHANK YOU\n");
exit(0);
break;
default:
printf("\nWrong choice. Please enter the correct numbers to use program.\n");
break;
}
}
};
//--------------------------------------------------------MAIN-------------------------------------------------------------------
int main() {
MainMenu mainMenu;
mainMenu.mainMenu();
}