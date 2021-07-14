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