#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

//clrscr();
//make a for loop to have the user enter the acc num and pin only having 3 chances before the program terminates -- kinda met


int account_number, pin, chk_acc_bal, sav_acc_bal;
char choice = 'y' ;





void validate_acc(){
     int user_acc_try, i = 0;
     int user_has_not_entered_right_acc = 1;
     int retries = 3;
     while(retries > 0 && user_has_not_entered_right_acc == 1){
                   printf("\nPlease enter your account number: ");
                   scanf("%d", &user_acc_try);

                   if(user_acc_try != account_number){
                                   printf("You entered the wrong account number\n");
                                   retries--;
                                   }
                   else{
                   user_has_not_entered_right_acc = 0;
                   }
                   }
     }

void validate_pin(){
     int user_pin_try, i=0;
     int user_has_not_entered_right_pin = 1;
     int retries = 3;
     while(retries > 0 && user_has_not_entered_right_pin == 1){
                   printf("Please enter your pin number: ");
                   scanf("%d", &user_pin_try);

                   if(user_pin_try != pin){
                                   printf("You entered the wrong pin number.\n");
                                   retries--;
                                   }
                   else{
                   user_has_not_entered_right_pin = 0;
                   }
                   }
                   if(retries = 0){
                              printf("You have reached maximum tries.");
                              }
     }

void validate(){
     validate_acc();
     validate_pin();
}




void Deposit_Cash_Chk(){

    int deposit_chk;


    printf("How Much would you like to deposit into your checking account?: \n");
    scanf("%d", &deposit_chk);
    // Taking the user entered data and adding it to account balance.
    //Consider adding a if / else, to make sure no negitive numbers are added
    chk_acc_bal += deposit_chk;
    printf("Your new checking account balance is $%d\n", chk_acc_bal);
    printf("\nWould you like to make another transaction?\n");
    printf("\n(y)es / (n)o ? \n");
    scanf(" %c", &choice);

}

void Deposit_Cash_sav(){
     int deposit_sav;

     printf("How much would you like to deposit in your saving account?: \n");
     scanf("%d", &deposit_sav);
     //Take the data from the user entered and add it to the global saving account
     //Consider adding a if / else, to make sure no negitive numbers are added
     sav_acc_bal += deposit_sav;
     printf("Your saving account balance is now $%d", sav_acc_bal);
     //Have the user enter anything in order to contiune
     printf("\nWould you like to make another transaction?\n");
     printf("\n(y)es / (n)o ? \n");
     scanf(" %c", &choice);;
}

void Withdraw_Cash_Chk(){
     int withdraw_chk;

     printf("How much would you like to withdraw from you checking account?: ");
     scanf("%d", &withdraw_chk);
     //Take the user entered data and save it to the global variable
     //print the global var
     chk_acc_bal -= withdraw_chk;
     printf("Your new checking account balance $%d", chk_acc_bal);
     printf("\nWould you like to make another transaction?\n");
     printf("\n(y)es / (n)o ? \n");
     scanf(" %c", &choice);
}

void Withdraw_Cash_Sav(){
     int withdraw_sav;

     printf("How much would you like to withdrawn from your saving account?: ");
     scanf("%d", &withdraw_sav);
     //Take the user entered data and save it to the global variable
     //print globabl variable
     sav_acc_bal -= withdraw_sav;
     printf("Your new saving account balance $%d", sav_acc_bal);
     //have the user enter anything in order to contiune
     printf("\nWould you like to make another transaction?\n");
     printf("\n(y)es / (n)o ? \n");
     scanf(" %c", &choice);
}
void query_account(){
     char q_answer[50];

     printf("Which account would you like to access?: ");
     scanf("%s", &q_answer);
     // if / else, depending on the answer the program will that account
     if(strcmp(q_answer, "checking") == 0){
                 printf("Your account balance for your checking account is $%d", chk_acc_bal);
                 printf("\nWould you like to make another transaction?\n");
                 printf("\n(y)es / (n)o ? \n");
                 scanf(" %c", &choice);
                 }
     else if(strcmp(q_answer, "saving") == 0){
          printf("Your account balance for your saving account is $%d", sav_acc_bal);
          printf("\nWould you like to make another transaction?\n");
          printf("\n(y)es / (n)o ? \n");
          scanf(" %c", &choice);
          }
     else{
          printf("you may have entered something incorrectly. Try again");
          }
}

void transfer_funds(){
     char transfer[50];
     int transfer_amt;

     printf("Which account which would you like to transfer from?: (c)hecking or (s)aving ");
     scanf("%s", &transfer);
     //The if statement will take the users input and see which account to transfer from and how much to transfer
     if(strcmp(transfer, "c") == 0){
                 printf("How much would you like to transfer from your checking?: ");
                 scanf("%d",&transfer_amt);
                 chk_acc_bal -= transfer_amt;
                 sav_acc_bal += transfer_amt;
                 printf("You have successfully transfered %d from your checking to your saving account", transfer_amt);
                 printf("\nWould you like to make another transaction?\n");
                 printf("\n(y)es / (n)o ? \n");
                 scanf(" %c", &choice);
                 }
     else if(strcmp(transfer, "s") == 0){
          printf("How much would you like to transfer from your saving?: ");
          scanf("%d",&transfer_amt);
          sav_acc_bal -= transfer_amt;
          chk_acc_bal += transfer_amt;
          printf("You have successfully transfered %d from your saving to your checking account", transfer_amt);
          printf("\nWould you like to make another transaction?\n");
          printf("\n(y)es / (n)o ? \n");
          scanf(" %c", &choice);
          }
     else{
          printf("you may have entered something incorrectly. Try again");
          }
}


int main(void){

     srand(time(NULL));
     while (account_number < 11111 || pin < 1111){
     account_number = rand() % 99999;
     pin = rand() % 9999;
     }
     chk_acc_bal = rand() % 99999;
     sav_acc_bal = rand() % 99999;

     int action_num;
     char withdraw_acc[10],checking_acc[10];




     printf("Please write down these numbers!\n Your account number is %d\n Your pin number is %d\n",account_number, pin);
     //see if there is a way to clear the screen -- ehh ill leave it
     while(choice == 'y'){
     printf("\n");
     printf("\nWelcome to Max's ATM\n");
     printf("What can we help you with today?\nType the number corresponding with your action.\n\n 1. Withdraw\n 2. Deposit\n 3. Transfer\n 4. Query Account\n");
     printf("\nEnter your Number here: ");
     scanf("%d", &action_num);


     switch(action_num){
                        case 1:
                             validate();
                             printf("\nWhich account would you like to withdraw from? (c)hecking or (s)aving ");
                             scanf("%s", &withdraw_acc);
                             //strcmp is a function in the string library that comapres the string and the string in the variable itself.
                             if(strcmp(withdraw_acc, "c") == 0){
                                             Withdraw_Cash_Chk();
                                             }
                             else if(strcmp(withdraw_acc, "s") == 0){
                                  Withdraw_Cash_Sav();
                                  }
                             else{
                                  printf("That is not an account name.");
                                  }
                             break;

                        case 2:
                             validate();
                             printf("Which account would you like to deposit to? (c)hecking or (s)aving ");
                             scanf("%s", &checking_acc);
                             if(strcmp(checking_acc, "c") == 0){
                                             Deposit_Cash_Chk();
                                             }
                             else if(strcmp(checking_acc, "s") == 0){
                                  Deposit_Cash_sav();
                                  }
                             else{
                                  printf("the account name you entered is incorrect.");
                                  scanf("%d");
                                  }
                             break;

                        case 3:
                             validate();
                             transfer_funds();break;
                        case 4:
                             validate();
                             query_account();break;    
     }
     }
     return 0;
}