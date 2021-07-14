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