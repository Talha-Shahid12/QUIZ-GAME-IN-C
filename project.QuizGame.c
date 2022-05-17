#include<stdio.h>
#include<string.h>
#include<conio.h>
#include"functionsfile.h" 
void main() 
{ 
  char quest [120][500];
  int response[50]={}, correct_ans[120], option,level,i,section=0,marks,counter=1,sec=60,s1=0,s2=0,s3=0,s4=0;  
  system("cls"); 
  //GK Easy
  strcpy(quest[0], "What is the smallest country in the world?\n\n1. Vatican City\n2. Adamstown\n3. Pakistan\n4.  Mexico City");  
  correct_ans[0]=1;  
  strcpy(quest[1], "What is the largest country in the world?\n1. Russia\n2. China\n3. Monaco\n4. Nauru");    
  correct_ans[1]=1;  
  strcpy(quest[2], "Which is the only vowel not used as the first letter in a US State\n1. A\n2. E\n3. O\n4. I");   
  correct_ans[2]=2;  
  strcpy(quest[3], "What is the hottest continent on Earth? \n1.Asia \n2. Antarctica\n3. North America\n4. Africa");   
  correct_ans[3]=4;  
  strcpy(quest[4], "What is the longest river in the world? \n1. River Indus\n2. River Nile\n3. Amazon River\n4. Yellow River");   
  correct_ans[4]=2;
  strcpy(quest[5], "What is the currency of Denmark? \n1. PKR\n2. Dollars\n3. Krone\n4. Dirham");   
  correct_ans[5]=3;
  strcpy(quest[6], "What is the smallest planet in our solar system? \n1. Mercury\n2. Jupiter\n3. Earth\n4. Saturn");   
  correct_ans[6]=1;
  strcpy(quest[7], "What does the Latin Tempus mean in English? \n1. Temperature\n2. Table\n3. Transmission\n4. Time");   
  correct_ans[7]=4;
  strcpy(quest[8], "What's longer, a nautical mile or a mile? \n1. Nautical Mile\n2. Mile\n3. Both are same\n4. None of the above");   
  correct_ans[8]=1;
  strcpy(quest[9], "Which country in the world is believed to have the most miles of motorway? \n1. America\n2. India\n3. China\n4. Pakistan");   
  correct_ans[9]=3;
  //CS Easy
  strcpy(quest[10], "Which among the following is the shortcut key to open a new window? \n1. Ctrl + A\n2. Ctrl + M\n3. Ctrl + N\n4. Ctrl + O");   
  correct_ans[10]=3;
  strcpy(quest[11], "Which among the following is the shortcut key to Zoom out window? \n1. Win + [+]\n2. Win + [-]\n3. Win + [*]\n4. Win + [/]");   
  correct_ans[11]=2;
  strcpy(quest[12], "USB is a???? storage device. \n1. Primary\n2. Secondary\n3. Tertiary\n4. None");   
  correct_ans[12]=2;
  strcpy(quest[13], "Byte is the series of ?? bits. \n1. 6\n2. 8\n3. 10\n4. 12");   
  correct_ans[13]=2;
  strcpy(quest[14], "MS-Office is a/an \n1. Application software\n2. System Software\n3. Firmware\n4. Programming Software");   
  correct_ans[14]=1;
  strcpy(quest[15], "Part of computer, which performs subtraction, addition, multiplication, division, and comparison is known as ?\n1. Buses\n2. Hard Disk\n3. ALU\n4. CPU");   
  correct_ans[15]=3;
  strcpy(quest[16], "Magnetic disk or simply disk is an information storage device. \n1. City\n2. Organization\n3. Department\n4. Individual");   
  correct_ans[16]=4;
  strcpy(quest[17], "Which among the following is not a type of printer? \n1. LCD Printer\n2. Laser Printer\n3. Inkjet Printer\n4. Electro Thermal Printer");   
  correct_ans[17]=1;
  strcpy(quest[18], "Computers calculate numbers in what mode? \n1. Octal\n2. Binary\n3. Decimal\n4. Hexa-decimal");   
  correct_ans[18]=2;
  strcpy(quest[19], "If you need to cut the contents of MS Word, which command will you give? \n1. Ctrl + X\n2. Ctrl + Y\n3. Ctrl + Z\n4. Ctrl + C");   
  correct_ans[19]=1;
  //Maths Easy
  strcpy(quest[20], "How many diagonals are there in a quadrilateral\n1. 2\n2. 3\n3. 4\n4. No diagonals");   
  correct_ans[20]=1;
  strcpy(quest[21], "How many surfaces are there in a cube?\n1. 3\n2. 4\n3. 5\n4. None of these");   
  correct_ans[21]=4;
  strcpy(quest[22], "What is three fifth of 100? \n1. 3\n2. 5\n3. 20\n4. 60");   
  correct_ans[22]=4;
  strcpy(quest[23], "What is 7% equal to?\n1. 0.007\n2. 0.07\n3. 0.7\n4. 7");   
  correct_ans[23]=2;
  strcpy(quest[24], "I am a number. I have 7 in the ones place. I am less than 80 but greater than 70. What is my number? \n1. 71\n2. 73\n3. 75\n4. 77");   
  correct_ans[24]=4;
  strcpy(quest[25], "How many months are there in a decade?\n1. 55\n2. 120\n3. 175\n4. None of these");   
  correct_ans[25]=2;
  strcpy(quest[26], "75 out of 300 bananas were found to be overripe, what percent was that?\n1. 15\n2. 25\n3. 30\n4. 50");   
  correct_ans[26]=2;
  strcpy(quest[27], "Sam took 4 minutes to cut a board into 2 pieces. How long would it take Sam to cut a similar board into 3 pieces? \n1. 2 mins\n2. 3 mins\n3. 6 mins\n4. 8 mins");   
  correct_ans[27]=4;
  strcpy(quest[28], ". Fill in the blank: 5/-7 =_____/35 \n1. 5\n2. 25\n3. -25\n4. 30");   
  correct_ans[28]=3;
  strcpy(quest[29], "Simplify: 0 × (10)^2   \n1. 10\n2. 10.2\n3. 102\n4. None of these");   
  correct_ans[29]=4;
  //Eng Easy
  strcpy(quest[30], "The train goes ______ many tunnels on the way to Rome. \n1. in\n2. past\n3. through\n4. over");   
  correct_ans[30]=3;
  strcpy(quest[31], "You two are always fighting. Why can't you ______?\n1. get along\n2. get over\n3. get off\n4. get down");   
  correct_ans[31]=1;
  strcpy(quest[32], "I'm surprised because rain was not ______ in the weather report. \n1. prediction\n2. predicted\n3. predictable\n4. predictably");   
  correct_ans[32]=2;
  strcpy(quest[33], "Where ______ the Battle of the Bulge?\n1. was\n2. are\n3. is\n4. were");   
  correct_ans[33]=1;
  strcpy(quest[34], "______ the all-natural bread? Yes, it was very good.\n1. Did try you\n2. Did try\n3. Did you try\n4. Did you tried");   
  correct_ans[34]=3;
  strcpy(quest[35], "______ is vacation?It's in August\n1. Who\n2. Why\n3. When\n4. Where");   
  correct_ans[35]=3;
  strcpy(quest[36], "Put your arms ______ me and kiss me you fool!\n1. around\n2. to\n3. onto\n4. on");   
  correct_ans[36]=1;
  strcpy(quest[37], "______? He is fifteen. \n1. How old is John?\n2. How many years is John?\n3. What age is John?\n4. How many years does John have?");   
  correct_ans[37]=1;
  strcpy(quest[38], "______ my wife sleeps, I watch TV late at night.\n1. Through\n2. During\n3. From\n4. While");   
  correct_ans[38]=4;
  strcpy(quest[39], "We must ______ the train at the next stop.\n1. get off\n2. get over\n3. get on\n4. get down");   
  correct_ans[39]=1;
  //GK Medium
  strcpy(quest[40], "What are the five colours of the Olympic rings? \n1. Blue, Yellow, Black, Green and Orange\n2. Blue, Yellow, Black, Green and Red.\n3. Blue, Yellow, White, Green and Red.\n4. Blue, Violet, Black, Green and Red.");   
  correct_ans[40]=2;
  strcpy(quest[41], "How many horses are on each team in a polo match? \n1. One\n2. Two\n3. Three\n4. Four");   
  correct_ans[41]=4;
  strcpy(quest[42], "What language is spoken in Brazil? \n1. Portuguese\n2. English\n3. Chinese\n4. Other than above");   
  correct_ans[42]=1;
  strcpy(quest[43], "What company is also the name of one of the longest rivers in the world? \n1. Ebay\n2. Amazon\n3. Tesla\n4. Microsoft");   
  correct_ans[43]=2;
  strcpy(quest[44], "What number is a baker's dozen? \n1. 10\n2. 12\n3. 13\n4. 15");   
  correct_ans[44]=3;
  strcpy(quest[45], "What is taller, an elephant or a giraffe? \n1. Elephant\n2. Giraffe\n3. Both are same\n4. Both are small");   
  correct_ans[45]=2;
  strcpy(quest[46], "Which planet has the most moons? \n1. Mars\n2. Pluto\n3. Earth\n4. Saturn");   
  correct_ans[46]=4;
  strcpy(quest[47], "What part of a plant conducts photosynthesis? \n1. Roots\n2. Leaf\n3. Branches\n4. Flowers");   
  correct_ans[47]=2;
  strcpy(quest[48], "How many elements are in the periodic table? \n1. 100\n2. 110\n3. 118\n4. 120");   
  correct_ans[48]=3;
  strcpy(quest[49], "Z and which other letter are worth the most in Scrabble? \n1. P\n2. Q\n3. R\n4. Y");   
  correct_ans[49]=2;
  //CS Medium
  strcpy(quest[50], "Which among the following period is known as the era of second-generation computer? \n1. 1965\n2. 1975\n3. 1980\n4. 1982 onwards");   
  correct_ans[50]=4;
  strcpy(quest[51], "Modem stands for: \n1. Modulation And Demodulation\n2. Modulator Or Digital Electronic Demodulator\n3. Modulator And Electronic Demodulator\n4. Modulator Demodulator");   
  correct_ans[51]=4;
  strcpy(quest[52], "The COBOL programming language is best designed for ?\n1. Business\n2. Personal\n3. Movie making\n4. Graphics");   
  correct_ans[52]=1;
  strcpy(quest[53], "Which among the following connects two more networks? \n1. Bus\n2. HTTP\n3. Gateway\n4. Highway");   
  correct_ans[53]=3;
  strcpy(quest[54], "Which among the following correctly explains the term 'internet?' \n1. Internet network\n2. International network\n3. Intercontinental network\n4. Information network");   
  correct_ans[54]=2;
  strcpy(quest[55], "The Third Generation Computer used ?\n1. Transistors\n2. Integrated circuit\n3. Vacuum tube\n4. Chip");   
  correct_ans[55]=2;
  strcpy(quest[56], "Which among the following is not an output device (for a computer)? \n1. Bar Code Reader\n2. Plotter\n3. Speaker\n4. LCD Monitor");   
  correct_ans[56]=1;
  strcpy(quest[57], "In which decade was the Internet first implemented? \n1. 1950s\n2. 1960s\n3. 1970s\n4. 1980s");   
  correct_ans[57]=2;
  strcpy(quest[58], "Main circuit board in a computer is: \n1. RAM\n2. ROM\n3. Screen\n4. Mother board");   
  correct_ans[58]=4;
  strcpy(quest[59], "ISP stands for: \n1. Internet Server Provider\n2. Internal Server Provider\n3. Internet Service Provider\n4. Insta Service Provider");   
  correct_ans[59]=3;
  //Maths Medium
  strcpy(quest[60], "Which of the following number gives 240 when added to its own square?\n1. 15\n2. 16\n3. 18\n4. 20");   
  correct_ans[60]=1;
  strcpy(quest[61], "Subtract - 8a from - 3a.\n1. 2a\n2. 5a\n3. -11a\n4. 11a");   
  correct_ans[61]=2;
  strcpy(quest[62], "A car can cover a distance of 522 km on 36 liters of petrol. How far can it travel on 14 liters of petrol? \n1. 213 km\n2. 223 km\n3. 203 km\n4. 302 km");   
  correct_ans[62]=3;
  strcpy(quest[63], "What is the largest two digits prime number?\n1. 96\n2. 97\n3. 98\n4. 99");   
  correct_ans[63]=2;
  strcpy(quest[64], "How many factors are there in 71? \n1. 1\n2. 2\n3. 3\n4. None of these");   
  correct_ans[64]=2;
  strcpy(quest[65], "What is the value of a^0? \n1. a\n2. -1\n3. 0\n4. 1");   
  correct_ans[65]=4;
  strcpy(quest[66], "2 is a …………… number\n1. Odd\n2. Prime\n3. composite\n4. None of these");   
  correct_ans[66]=2;
  strcpy(quest[67], "Factors of 9 are….. \n1. 1, 2 and 3n2. 1, 2, 3 and 9\n3. 1, 6 and 9\n4. None of these");   
  correct_ans[67]=4;
  strcpy(quest[68], "What is the sum of one digit prime numbers? \n1. 11\n2. 13\n3. 15\n4. 17");   
  correct_ans[68]=4;
  strcpy(quest[69], "If 6 is 50% of a number, what is the number? \n1. 10\n2. 11\n3. 12\n4. 13");   
  correct_ans[69]=3;
  //Eng Medium
  strcpy(quest[70], "He ______ all of them\n1. listened\n2. spoke\n3. died\n4. wanted");   
  correct_ans[70]=4;
  strcpy(quest[71], "Who is your mother's sister's daughter? \n1. She is my wife\n2. She is my mother's nephew.\n3. Is my mother's niece.\n4. My mother's sister's daughter is my cousin");   
  correct_ans[71]=4;
  strcpy(quest[72], "You can use my car ______ tomorrow\n1. yet\n2. since\n3. until\n4. around");   
  correct_ans[72]=3;
  strcpy(quest[73], "The wind ______ hard all night. \n1. blow\n2. blew\n3. blown\n4. blowed");   
  correct_ans[73]=2;
  strcpy(quest[74], "Who is she talking to on the phone? \n1. She talking to her sister.\n2. She talks to Lorenzo Rodriguez\n3. She's not talking to me sister\n4. Maybe she's talking to your sister");   
  correct_ans[74]=4;
  strcpy(quest[75], "She ______ blue velvet to the party last night. \n1. worn\n2. weared\n3. wear\n4. wore");   
  correct_ans[75]=4;
  strcpy(quest[76], "We've just come ______ the beach and we are thirsty\n1. for\n2. from\n3. back\n4. in");   
  correct_ans[76]=2;
  strcpy(quest[77], "I asked Jane about the accident, but she _____ a word\n1. didn't use to\n2. wouldn't say\n3. shouldn't say\n4. refused");   
  correct_ans[77]=2;
  strcpy(quest[78], "My house _____ a small garden\n1. Has got\n2. Have got\n3. is\n4. was");   
  correct_ans[78]=1;
  strcpy(quest[79], "The school meeting begins …........... 4pm sharp. \n1. on\n2. to\n3. in\n4. at");   
  correct_ans[79]=4;
  //GK Hard
  strcpy(quest[80], "How many permanent members are there on the UN security council? \n1. Four\n2. Five\n3. Six\n4. Eight");   
  correct_ans[80]=2;
  strcpy(quest[81], "Where is the smallest bone in the human body located? \n1. Head\n2. Toe\n3. Ear\n4. Hand");   
  correct_ans[81]=3;
  strcpy(quest[82], "How many hearts does an octopus have? \n1. 8\n2. 5\n3. 3\n4. 2");   
  correct_ans[82]=3;
  strcpy(quest[83], "Elon Musk is the CEO of which global brand\n1. Amazon\n2. Tesla\n3. Ebay\n4. Microsoft");   
  correct_ans[83]=2;
  strcpy(quest[84], "Which operating system does a Google Pixel phone use? \n1. IOS\n2. HIVEOS\n3. Android\n4. UNIX");   
  correct_ans[84]=3;
  strcpy(quest[85], "Who is the only batsman to record 400 runs in an international Test match? \n1. Babar Azam\n2. Shane Watson\n3. Chris Gayle\n4. Brian Lara");   
  correct_ans[85]=4;
  strcpy(quest[86], "What colour is a giraffe's tongue? \n1. Black\n2. Blue\n3. Pink\n4. Red");   
  correct_ans[86]=2;
  strcpy(quest[87], "Which is the eighth and furthest-known planet from the sun in the solar system? \n1. Neptune\n2. Uranus\n3. Venus\n4. Mercury");   
  correct_ans[87]=1;
  strcpy(quest[88], "Vanilla comes from what flowers? \n1. Roses\n2. Tulip\n3. Lily\n4. Orchids");   
  correct_ans[87]=4;
  strcpy(quest[89], "What is the collective name for a group of crows? \n1. Glaring\n2. Bloat\n3. Murder\n4. Leap");   
  correct_ans[89]=3;
  //CS Hard
  strcpy(quest[90], "A person who uses his expertise to gain access of other's computer illegally is known as ?\n1. Programmer\n2. Engineer\n3. Computer Specialist\n4. Hacker");   
  correct_ans[90]=4;
  strcpy(quest[91], "While sending an email, sometimes you also add multiple recipients in 'CC;' CC stands for ?\n1. Carbon Copy\n2. Color Copy\n3. Correction Copy\n4. Credits Copy");   
  correct_ans[91]=1;
  strcpy(quest[92], "Which among the following is not correctly defines a functional domain name? \n1. .net\n2. .org\n3. .gov\n4. .god");   
  correct_ans[92]=4;
  strcpy(quest[93], "Which one of the following language is developed by Microsoft? \n1. Java\n2. C Sharp\n3. DCL\n4. SHELL");   
  correct_ans[93]=2;
  strcpy(quest[94], "Which among the following correctly defines the term 'CADD?' \n1. It is a hardware\n2. It is a software related to design\n3. C - It is a software related to data storage\n4. it is a software related to window");   
  correct_ans[94]=2;
  strcpy(quest[95], "Which among the following is known as computer programmer? \n1. The person who can fix the computer errors\n2. The person who can fix the hardware\n3. The person who writes and tests computer program\n4. The person who fix computer program");   
  correct_ans[95]=3;
  strcpy(quest[96], "JPG' extension refers usually to what kind of file? \n1. Music File\n2. Image File\n3. Document File\n4. Executable File");   
  correct_ans[96]=2;
  strcpy(quest[97], "Compact discs, (according to the original CD specifications) hold how many minutes of music? \n1. 54\n2. 64\n3. 74\n4. 84");   
  correct_ans[97]=3;
  strcpy(quest[98], "What is the term to ask the computer to put information in order numerically or alphabetically? \n1. Sort\n2. Draw\n3. Insert\n4. Design");   
  correct_ans[98]=1;
  strcpy(quest[99], "http://www.objectivebooks.com - is an example of what? \n1. File Extension\n2. Document\n3. OS\n4. URL"); 
  correct_ans[99]=4;
  //Maths Hard
  strcpy(quest[100], "The square root of 0.0081 is …………\n1. 0.09\n2. 0.9\n3. 0.91\n4. 0.009");   
  correct_ans[100]=1;
  strcpy(quest[101], "Nil is 23 years 1 month old, Shelly is 18 years 7 months old and Ben is as much older than Shelly is younger than Nil. The age of Ben is ……. \n1. 18 years 6 months\n2. 21 years 11 months\n3. 20 years 9 months\n4. 20 years 10 months");   
  correct_ans[101]=4;
  strcpy(quest[102], "Fill in the blanks; 4, 6, 12, 14, 28, 30, (?)  \n1. 60\n2. 62\n3. 64\n4. 32");   
  correct_ans[102]=1;
  strcpy(quest[103], "The number which is neither prime nor composite is ……. \n1. 0\n2. 1\n3. 3\n4. 2");   
  correct_ans[103]=2;
  strcpy(quest[104], "If 16 = 11, 25 = 12, 36 = 15, then 49 = ? \n1. 17\n2. 19\n3. 20\n4. 14");   
  correct_ans[104]=2;
  strcpy(quest[105], "If ‘+’ means ‘×’, ‘-‘ means ‘+’, ‘×’ means ‘÷’ and ‘÷’ means ‘-‘ then find the value of; a 6 – 9 + 8 × 3 ÷ 20 = ........\n1. 6\n2. 10\n3. -2\n4. 12");   
  correct_ans[105]=2;
  strcpy(quest[106], "The difference between the smallest number of four digits and the largest number of three digits is ……. \n1. 1\n2. 100\n3. 0\n4. 999");   
  correct_ans[106]=1;
  strcpy(quest[107], "A car covers a distance of 200km in 2 hours 40 minutes, whereas a jeep covers the same distance in 2 hours. What is the ratio of their speed? \n1. 3:4\n2. 4:3\n3. 4:5\n4. 5:4");   
  correct_ans[107]=1;
  strcpy(quest[108], "What percentage should be added to 40 to make it 50? \n1. 15\n2. 25\n3. 75\n4. 80");   
  correct_ans[108]=2;
  strcpy(quest[109], "In a two-digit number, the digit in the unit’s place is two more than the three times of the digit in ten’s place. If the sum of the two digits is 6, the number is.\n1. 51\n2. 24\n3. 15\n4. 42");   
  correct_ans[109]=3;
  //Eng Hard
  strcpy(quest[110], "Aslam works …........... the hospital near Habib Bank building. \n1. at\n2. over\n3. in\n4. on");   
  correct_ans[110]=1;
  strcpy(quest[111], "Sign your name ….................. the dotted line at the end of the admission form. \n1. onto\n2. on\n3. in\n4. into");   
  correct_ans[111]=2;
  strcpy(quest[112], "I learned how to swim …............ my summer holidays. \n1. between\n2. while\n3. during\n4. in");   
  correct_ans[112]=3;
  strcpy(quest[113], "Open your chemistry book …........... page 112. \n1. on\n2. over\n3. in\n4. at");   
  correct_ans[113]=4;
  strcpy(quest[114], "............. she …......... away yesterday? \n1. Why , ran\n2. Did , run\n3. Where , running\n4. Was , run");   
  correct_ans[114]=2;
  strcpy(quest[115], "…................. sir asks a question, even we won't answer. \n1. Hardly\n2. If\n3. Unless\n4. When");   
  correct_ans[115]=3;
  strcpy(quest[116], "The police made him …....... his crime. \n1. confess\n2. confessed\n3. confesses\n4. to confess");   
  correct_ans[116]=1;
  strcpy(quest[117], "................ a telephone call, the driver turned up for extra duty. \n1. having got\n2. being got\n3. having been got\n4. had got");   
  correct_ans[117]=1;
  strcpy(quest[118], "The dog is playing with ......... tail. \n1. Yes \n2. No \n3. Offcourse \n4. may be ");   
  correct_ans[118]=4;
  strcpy(quest[119], "We saw him ............... a tree yesterday. \n1. cutting\n2. cut\n3. to cut\n4. was cutting");   
  correct_ans[119]=1;
   FILE *fp;
 
    size_t count;
    //Char str[] = "good morning";
 
    fp = fopen("Questions.txt", "wb");
 
    if(fp == NULL) {
        printf("file couldn't be opened\n");
        exit(1);
    }
    for(i=0; i<120;i++)
	{
		fwrite(quest[i],1,strlen(quest[i]),fp);
		fwrite("\n",1,strlen("\n"),fp);
	}
    
    //printf("\n bytes written into file are : ",count);
 
    fclose(fp);  
  do {
  	
    if(counter==1){
    intro();  
	quizgame();
	welcome();
	counter++;} 
    system("color 6");

	printf("\n\t\t\t**************************");  
    printf("\n\t\t\t*   1. Start Quiz Game   *");  
    printf("\n\t\t\t*   2. Display Rules     *");  
    printf("\n\t\t\t*   3. Display Result    *");  
    printf("\n\t\t\t*   4. EXIT              *");  
    printf("\n\t\t\t**************************");  
    printf("\n\n\n\t\t\tEnter your option: ");  
    scanf(" %d", &option);  
	        system("color 9");

	switch(option)
	{
		case 1:
		system("cls");
		   printf("\n\t\t     ************************\n\t\t     *   Levels Available:  *\n\t\t     *     1. EASY LEVEL    *\n\t\t     *     2. MEDIUM LEVEL  *\n\t\t     *     3. EXPERT LEVEL  *\n\t\t     *     4. BACK          *\n\t\t     ************************\n\n\t\tEnter level you want to play: ");
		   scanf("%d", &level);
		   system("cls");
		   system("color 7");
		   switch(level)
		   {
		   case 1:	
		   for(i=0;i<40;i++)
		   {
  			do
			{sleep(1);
			sec--;
			if(sec == -1)
			{i++;
			sec=60;
			}
			if(i==40)
			break;
			system("cls"); 
			printf("\t\tRemaining Secs are: %d\n", sec);
			if(i==0)
		   printf("\t    :Section 1:\n\t:General Knowledge:\n");
		   if (i==10)
		   printf("\t    :Section 2:\n\t:Computer Science:\n");
		   if (i==20)
		   printf("\t    :Section 3:\n\t:Mathematics:\n");
		   if (i==30)
		   printf("\t    :Section 4:\n\t:English:\n");
		    printf ("\n %s \n",quest [i]);   
            printf ("\n Enter your answer number: ");  	
			}
			while(!kbhit());
			{  
        	response[i]=scan_errorchk(response[i]);
			sec=60;}}
			system("cls");
			break;
		   case 2:	
		   for(i=40;i<80;i++)
		   {
  			do
			{sleep(1);
			sec--;
			if(sec == -1)
			{i++;
			sec=60;
			}
			if(i==80)
			break;
			system("cls"); 
			printf("\t\tRemaining Secs are: %d\n", sec);
			if(i==40)
		   printf("\t    :Section 1:\n\t:General Knowledge:\n");
		   if (i==50)
		   printf("\t    :Section 2:\n\t:Computer Science:\n");
		   if (i==60)
		   printf("\t    :Section 3:\n\t:Mathematics:\n");
		   if (i==70)
		   printf("\t    :Section 4:\n\t:English:\n");
		    printf ("\n %s \n",quest [i]);   
            printf ("\n Enter your answer number: ");  	
			}
			while(!kbhit());
			{  
        	response[i]=scan_errorchk(response[i]);
			sec=60;}}
			system("cls");
			break;
		   case 3:	
		   for(i=80;i<120;i++)
		   {
  			do
			{sleep(1);
			sec--;
			if(sec == -1)
			{i++;
			sec=60;
			}
			if(i==120)
			break;
			system("cls"); 
			printf("\t\tRemaining Secs are: %d\n", sec);
			if(i==80)
		   printf("\t    :Section 1:\n\t:General Knowledge:\n");
		   if (i==90)
		   printf("\t    :Section 2:\n\t:Computer Science:\n");
		   if (i==100)
		   printf("\t    :Section 3:\n\t:Mathematics:\n");
		   if (i==110)
		   printf("\t    :Section 4:\n\t:English:\n");
		    printf ("\n %s \n",quest [i]);   
            printf ("\n Enter your answer number: ");  	
			}
			while(!kbhit());
			{  
        	response[i]=scan_errorchk(response[i]);
			sec=60;
			}}
			system("cls"); break;
		   }
		   	break;

       case 2://RULES   
           system("cls");
           printf("\n\n\t\t *********THERE ARE SOME RULE AND REGULATIONS TO ATTEMPT THIS QUIZ*********\n");
           printf("\t\t\t1) This quiz have 3 levels and every level has 4 sections\n");
           printf("\t\t\t2) Every Question has individual time to attempt i.g [60 seconds]\n");
           printf("\t\t\t3) No review to check attempt question again\n");
           printf("\t\t\t4) Sections will continue in a proper way i.g[section:1 , section:2,....]\n");
           printf("\t\t\t5) Press 'i' to skip question without attemp that question\n");
           printf("\t\t\t6) No marks will be given of unattempt question\n");
           printf("\t\t\t7) BEWARE: IF INPUT IS NOT ACCORDING TO THE DISPLAYED OPTIONS,\n\t\t\tERROR MESSAGE WILL BE DISPLAYED AND YOU WILL BE MARKED ZERO.\n");
           printf("\n\t\tPRESS ANY KEY TO CONTINUE.");
		   getch();
		   system("cls");
		   break;  
       case 3:   
           marks = 0;
		   switch(level)  
           {
           	case 1:
           	for(i = 0;i < 10;i++){   
            if(correct_ans[i]==response[i]){   
            s1++;}}
            for(i = 10;i < 20;i++){   
            if(correct_ans[i]==response[i]){   
            s2++;}}
            for(i = 20;i < 30;i++){   
            if(correct_ans[i]==response[i]){   
            s3++;}}
            for(i = 30;i < 40;i++){   
            if(correct_ans[i]==response[i]){   
            s4++;}}	
		    for(i = 0;i < 40;i++){   
            if(correct_ans[i]==response[i]){   
            marks++;}
			}
            case 2:
            for(i = 40;i < 50;i++){   
            if(correct_ans[i]==response[i]){   
            s1++;}}
            for(i = 50;i < 60;i++){   
            if(correct_ans[i]==response[i]){   
            s2++;}}
            for(i = 60;i < 70;i++){   
            if(correct_ans[i]==response[i]){   
            s3++;}}
            for(i = 70;i < 80;i++){   
            if(correct_ans[i]==response[i]){   
            s4++;}}	
		    for(i = 40;i < 80;i++){   
            if(correct_ans[i]==response[i]){   
            marks++;}
			}
			case 3:
		    for(i = 80;i < 90;i++){   
            if(correct_ans[i]==response[i]){   
            s1++;}}
            for(i = 90;i < 100;i++){   
            if(correct_ans[i]==response[i]){   
            s2++;}}
            for(i = 100;i < 110;i++){   
            if(correct_ans[i]==response[i]){   
            s3++;}}
            for(i = 110;i < 120;i++){   
            if(correct_ans[i]==response[i]){   
            s4++;}}
		    for(i = 80;i < 120;i++){   
            if(correct_ans[i]==response[i]){   
            marks++;}}
		   } 
		   system("cls");
           	printf ("\n\t\t\tSCORE OUT OF 40 = %d\n\n",marks);
           	printf("\nSection-Wise Marks:\n");
			printf("General Knowledge| \tComputer Science | \tMathematics | \tEnglish\n");
			printf("\t \t | \t\t \t | \t \t    | \t \t\n");
			printf("\t%d\t | \t\t%d\t | \t   %d\t    | \t  %d\t\n",s1,s2,s3,s4);
			printf("\n\nPRESS ENTER TO CONTINUE...");
			getch();
			system("cls");
           break;  
    		}  
  	}  
      while(option!=4);
}
