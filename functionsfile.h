#include<stdio.h>
#include<string.h>
#define N 20
#include<stdlib.h>
#include<time.h>
#include<conio.h>				
void welcome();
int scan_errorchk(int res);
void quizgame();
void intro();

void intro()
{
	printf("\n");sleep(1);
    printf("\t\tWelcome To Our Project\n\n");sleep(1);
    printf("\t\tQuiz Game\n\n");sleep(1);
    printf("\t\tDesigned By\n\n\t\t\tTALHA SHAHID\n\n");sleep(1);
    printf("\t\tPress Enter To Continue.....\n\n");sleep(1);
    getch();
    system("cls");
}

void quizgame()
{	
	system("color 4");
	printf("                                                                                \n"); usleep(1000000/2);
	printf("         * * *         *           *    * * * * * * * *    * * * * * * * *                                \n"); usleep(1000000/2);
	printf("       *      *        *           *           *                        *             \n"); usleep(1000000/2);
	printf("      *        *       *           *           *                      *              \n"); usleep(1000000/2);
	printf("     *          *      *           *           *                    *               \n"); usleep(1000000/2);
	printf("    *            *     *           *           *                  *                 \n"); usleep(1000000/2);
	printf("     *          *      *           *           *                *                    \n"); usleep(1000000/2);
	printf("      *        **      *           *           *              *                    \n"); usleep(1000000/2);
	printf("       *      *  *     *           *           *            *                       \n"); usleep(1000000/2);
	printf("         * * *    *    * * * * * * *    * * * * * * * *    * * * * * * * *                                     \n"); usleep(1000000/2);
	
	printf("\n\n"); usleep(1000000/2);

	printf("     * * * * * *          *           * *           * *    * * * * * * * *                                      \n"); usleep(1000000/2);
	printf("     *                   * *          *   *       *   *                                 \n"); usleep(1000000/2);
	printf("     *                  *   *         *    *     *    *    *                                 \n"); usleep(1000000/2);
	printf("     *                 *     *        *     *   *     *    *                                 \n"); usleep(1000000/2);
	printf("     *   * * * *      * * * * *       *      * *      *    * * * * *                          \n"); usleep(1000000/2);
	printf("     *         *     *         *      *       *       *    *                                 \n"); usleep(1000000/2);
	printf("     *         *    *           *     *               *    *                                 \n"); usleep(1000000/2);
	printf("     *         *   *             *    *               *    *                                 \n"); usleep(1000000/2);
	printf("     * * * * * *  *               *   *               *    * * * * * * * *                   \n"); usleep(1000000/2);
	printf("                                                                                         \n"); usleep(1000000/2);
	printf("\n\nPRESS ENTER TO CONTINUE..."); 
	getch();
	system("cls");
}

int scan_errorchk(int res)
{
	int ret;
	if(scanf("%d", &res)==0){
	fflush(stdin);
	printf("Invalid Input\n");
	ret=0;}
	else if((res) != 1 && (res) != 2 && (res) != 3 && (res) != 4){
	printf("Invalid Input\n");
    ret = 0;}
	else ret=res;
	return(ret);
}

void welcome()
{
	printf("\t\t\t**SIGN UP**\n\t\t\n\n");
	
	int lower_case_count = 0, digit_count = 0, p, i, check;
	char name[20], fathername[20], pass[N], password[N];
	system("color 6");
	printf("\t\tEnter Your Name: ");
	gets(name);
	printf("\t\tYour Father's Name:  ");
	gets(fathername);
	printf("\n\tChoose a password:\n(MUST BE MORE THAN 5 CHARACTERS AND HAVE ONLY LOWER CASE LETTERS + ANY NUMBER(S)) \n:");
	scanf("%s", &pass);
	
	p=strlen(pass);
    	for (i = 0; i < p; i++) {
			if (pass[i] >= 'a' && pass[i] <= 'z') ++lower_case_count;
			if (pass[i] >= '0' && pass[i] < '6') ++digit_count;
    	}    
     	if (lower_case_count > 0 && digit_count > 0) {
        	printf("\n");
		}
		else{
			printf("\t\t\tINVALIID! PLEASE RUN THE PROGRAM AGAIN!");
			exit(0);
		}
	system("cls");
	printf("\n\t\t\tHello %s, please enter your password again to proceed:", name);
	
	for(i=3;i>=0;i--){
	printf("\n\nPassword: ");
	scanf("%s", &password);
	
	check=strcmp(pass,password);
	if(check == 0)
	break;
	else if(i==0)
	{
		  system("color 4");

		printf("\t\t\tINVALID PASSWORD! OUT OF TRIES!\n\tRUN PROGRAM AGAIN.");
		exit(0);
	}
	else
	system("color 5");
	printf("\n\t\t\tINCORRECT PASSWORD! PLEASE TRY AGAIN.\nYOU %d TRIES LEFT!",i);
	}
	system("cls");
	printf("\n\t\t\tWelcome!\n\n");
}
