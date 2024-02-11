#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct bank
{
    int acc_no;
    char name[500];
    float balance;
    int login_password;
    int login_account;
    FILE *fp = NULL;
};

int transfer_acc_r, transfer_acc_s, amount_tran;
int n, m = 0, i, op, a, p = 1, l, check_bal_acc, r_account, z, k = 1, b,q=0;
void input_data(struct bank data[], int n)
{
    FILE *fpp = NULL;
    for (int j = 0; j < n; j++)
    {

        fpp = fopen("account detail.txt", "a");
        printf("enter account no\n");
        scanf("%d", &data[j].acc_no);
        printf(" enter the customer name\n");
        scanf("%s", &data[j].name);
        printf("enter your balance\n");
        scanf("%f", &data[j].balance);
        fprintf(fpp, "%d\t\t%s\t\t%.2f\t\t\n", data[j].acc_no, data[j].name, data[j].balance);
        printf("--------------------------------------------------------------------\n");
    }
}
void min_balance(struct bank data[], int n)
{
    {
        if (data[i].balance < 100)
        {
            printf("===balance below 100 rupay===\n\n");

            printf("Account No =%d\n", data[i].acc_no);
            printf("Name of Account holder = %s", data[i].name);
            printf("\n");
            printf("Account balance =%f\n", data[i].balance);
            printf("--------------------------------------------------------------------\n");
        }
    }
}
void request_withdrawal(struct bank data[], int n, int m, int r_account)
{
    int credit = 0;
    FILE *fp = NULL;
    fp = fopen("account.txt", "a");
    printf("=== Withdrawal form ===\n");

    float r_withdrawl;

    for (i = 0; i <= n + m; i++)
    {
        if (i < n + m)
        {
            if (r_account == data[i].acc_no)

            {
                printf("How much you want to withdrawal:\n");
                scanf("%f", &r_withdrawl);
                if (data[i].balance >= r_withdrawl)
                {
                    data[i].balance = data[i].balance - r_withdrawl;
                    printf("Remaining amount in your balance is %.2f\n", data[i].balance);
                    printf("Your cash withdrawal successsfully... !\n");
                    printf("Thank You......Visit Again");
                    printf("\n-------------------------------------------------------------------\n");
                    break;
                }
                else
                {
                    printf("your amount is insufficint for withdrawal\n");
                    printf("Thank You......Visit Again");
                    printf("\n-------------------------------------------------------------------\n");
                    break;
                }
            }
        }
        else
        {
            printf("Enter corret Account No.\n");
            printf("Thank You......Visit Again");
            printf("\n-------------------------------------------------------------------\n");
        }
    }
    fprintf(fp, "%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f\t\n", data[i].acc_no, data[i].name, credit, r_withdrawl, data[i].balance);
}
void request_deposit(struct bank data[], int n, int m, int r_account)
{
    FILE *fp = NULL;
    fp = fopen("account.txt", "a");
    printf("=== deposit form ===\n");

    int r_deposit, withdrawl = 0;

    for (i = 0; i <= n + m; i++)
    {
        if (i < n + m)
        {
            if (r_account == data[i].acc_no)
            {
                printf("How much amount you have to deposit:\n");
                scanf("%d", &r_deposit);
                data[i].balance = data[i].balance + r_deposit;
                printf("Your Total balance is %.2f \n", data[i].balance);
                printf("Your cash deposit successsfully... !\n");
                printf("Thank You......Visit Again");
                printf("\n-------------------------------------------------------------------\n");
                break;
            }
        }
        else
        {
            printf("enter corret correct Account No.\n");
            printf("Thank You......Visit Again");
            printf("\n-------------------------------------------------------------------\n");
        }
    }
    fprintf(fp, "%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f\t\n", data[i].acc_no, data[i].name, r_deposit, withdrawl, data[i].balance);
}

void input_data_add(struct bank data[], int n, int m)
{
    for (int j = n; j < n + m; j++)
    {

        printf("enter account no\n");
        scanf("%d", &data[j].acc_no);
        printf(" enter the customer name\n");
        scanf("%s", &data[j].name);
        printf("enter your balance\n");
        scanf("%f", &data[j].balance);
        q=n+m;
        
        printf("--------------------------------------------------------------------\n");
    }
}

void transfer_money(struct bank data[], int n, int m, int transfer_acc_r, int transfer_acc_s, int amount_tran)
{
    void manipulate_money(struct bank data[], int n, int m, int transfer_acc_r, int transfer_acc_s, int amount_tran);

    manipulate_money(data, n, m, transfer_acc_r, transfer_acc_s, amount_tran);
}

void manipulate_money(struct bank data[], int n, int m, int transfer_acc_r, int transfer_acc_s, int amount_tran)
{ // int r_deposit=0;
    // FILE *fp = NULL;
    // fp = fopen("account.txt", "a");
    for (i = 0; i < n + m; i++)
    {
        // int r_deposit = 0;
        if (transfer_acc_s == data[i].acc_no)
        {
            if (data[i].balance >= amount_tran)
            {
                data[i].balance = data[i].balance - amount_tran;
                printf("Available balance  is %.2f  ₹ \n", data[i].balance);
                // printf("Available balance of Account No.  %d is %.2f \n", data[i].acc_no, data[i].balance);
                break;
            }
            else
            {
                printf("your amount is insufficint for Trasction \n");
                // printf("Available balance of Account No.  %d is %.2f \n", data[i].acc_no, data[i].balance);
                printf("Available balance  is %.2f  ₹ \n", data[i].balance);
                amount_tran = 0;
                break;
            }
        }
        //  fprintf(fp, "%d\t\t%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f\t\n", data[i].acc_no, transfer_acc_r, data[i].name, r_deposit, amount_tran, data[i].balance);
    }
    for (i = 0; i < n + m; i++)
    {
        // int withdrwal = 0;
        if (transfer_acc_r == data[i].acc_no)
        {

            {
                data[i].balance = data[i].balance + amount_tran;
                // printf("Available balance of Account No. %d is %.2f \n ", data[i].acc_no, data[i].balance);
                break;
            }
        }
        //  fprintf(fp, "%d\t\t%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f\t\n", data[i].acc_no, transfer_acc_r, data[i].name, amount_tran, withdrwal, data[i].balance);
    }

    printf("Thank You......Visit Again");
    printf("\n-------------------------------------------------------------------\n");
}
void check_balance(struct bank data[], int n, int m, int check_bal_acc)
{
    printf("please wait...Your Request of balance checking is processing\n ");
    for (i = 0; i < n + m; i++)
    {
        if (check_bal_acc == data[i].acc_no)
        {
            printf("Your Available Balance is %.2f  ₹ \n", data[i].balance);
        }
    }
    printf("Thank You......Visit Again");
    printf("\n-------------------------------------------------------------------\n");
}

void login(struct bank data[], int n, int m)
{
    printf("\n-------------------------------------------------------------------\n");
    printf(" ====WELCOME TO APP SERICE OF PADAM BANK==== \n");

    int login_acc, login_pass, login_op, login_acc_r;
    printf("Enter your Account No\n");
    scanf("%d", &login_acc);
    for (i = 0; i < n + m; i++)
    {
        if (i < n + m)
        {
            if (data[i].acc_no == login_acc)

            {
                printf("Enter your passwaord\n");
                scanf("%d", &login_pass);
                if (login_pass == 000)
                {
                    printf("\nYour login successfully\n\n");
                    do
                    {
                        printf("Enter : \n");
                        printf("0. withdrawal \n");
                        printf("1. deposit\n");
                        printf("2.Transfer Money\n");
                        printf("3. check balance\n");
                        scanf("%d", &login_op);
                        switch (login_op)
                        {
                        case 0:
                            request_withdrawal(data, n, m, login_acc);
                            break;
                        case 1:

                            request_deposit(data, n, m, login_acc);

                            break;
                        case 2:
                            printf("Enter  Receiver Account No\n  ");
                            scanf("%d", &transfer_acc_r);
                            printf("How much amount you have to transfer\n");
                            scanf("%d", &amount_tran);

                            transfer_money(data, n, m, login_acc_r, login_acc, amount_tran);
                            break;
                        case 3:
                            check_balance(data, n, m, login_acc);
                            break;
                        }

                        printf("For Logout Enter 0 And Contiune Enter 1\n");
                        scanf("%d", &a);
                        if (a == 1)
                        {
                            p++;
                            l++;
                        }
                        if (a == 0)
                        {
                            p = 0;
                        }
                    } while (l < p);
                }
                else
                {
                    printf("Enter Correct Password\n");
                    break;
                }
            }
        }
        else
        {
            printf("Enter Correct Account No. OR Account Not Login In Online Mode\n");
            break;
        }
    }
    printf("Thank You for using App sericess......Visit Again");
    printf("\n-------------------------------------------------------------------\n");
}
void creat_login(struct bank data[], int n, int m)
{
    printf("Enter your username No\n");
    scanf("%d", &data[i].login_account);
    if (data[i].login_account == data[i].acc_no)
    {
        printf("Enter your password No\n");
        scanf("%d", &data[i].login_password);
        printf("Congratulations...Your  Resistration complted\n");
    }
    // printf("Enter your password No\n");
    // scanf("%d", &data[i].login_password);
    // printf("Congratulations...Your  Resistration complted\n");
    else
    {
        printf("You Don't have bank account ...please open account\n");
    }
}
void histroy(struct bank data[], int n, int m)
{
    FILE *fp = NULL;
    char his[50];
    fp = fopen("account.txt", "a+");
    while (!feof(fp))
    {
        fgets(his, 10, fp);
        printf("%s", his);
    }
    // fp=fopen("account detail.txt","a+");
    // while(!feof(fp))
    // {
    //     fgets(his,10,fp);
    //     printf("%s",his);

    // }
}
void welcome()
{
    printf("\t**********************************************************************\n");
    printf("\t***                             WELCOME                            ***\n");
    printf("\t***                                                               ***\n");
    printf("\t***                               TO                               ***\n");
    printf("\t***                                                               ***\n");
    printf("\t***                        BANK SYSTEM PROJECT                    ***\n");
    printf("\t**********************************************************************\n");
    printf("\t**********************************************************************\n");
    printf("\t***                       WE ARE HERE IN YOUR SERVICE              ***\n");
    printf("\t***                                                                ***\n");
    printf("\t***                                                                ***\n");
    printf("\t***                                                                ***\n");
    printf("\t***                      RESERVE BANK OF INDIA                    ***\n");
    printf("\t**********************************************************************\n");
}


int main()
{
    system("color 2");
    struct bank data[250];
    welcome();
    printf("Enter The Customer No\n");
    scanf("%d", &n);
    input_data(data, n);
    do
    {
        printf("Enter : \n");
        printf("0. withdrawal\n");
        printf("1. deposit\n");
        printf("2. Add New Account\n");
        printf("3.Transfer Money\n");
        printf("4. check balance\n");
        printf("5. account login\n");
        printf("6. transction details\n");
        printf("7. Total account No in bank\n");
        printf("option : ");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            printf("Enter your account no:\n");
            scanf("%d", &r_account);
            request_withdrawal(data, n, m, r_account);
            break;
        case 1:
            printf("Enter your account no:\n");
            scanf("%d", &r_account);
            request_deposit(data, n, m, r_account);
            break;
        case 2:
            printf("How much you Add new accont\n");
            scanf("%d", &m);
            input_data_add(data, n, m);
            
            break;
        case 3:
            printf("Enter Amount Receiver Account No\n ");
            scanf("%d", &transfer_acc_r);
            printf("Enter Amount sender Account No\n  ");
            scanf("%d", &transfer_acc_s);
            printf("How much amount you have to transfer\n");
            scanf("%d", &amount_tran);
            transfer_money(data, n, m, transfer_acc_r, transfer_acc_s, amount_tran);
            break;
        case 4:
            printf("Enter your Account No.\n");
            scanf("%d", &check_bal_acc);
            check_balance(data, n, m, check_bal_acc);
            break;
        case 5:
            login(data, n, m);
            break;
        case 6:
            histroy(data, n, m);
            break;
        case 7 :
        printf("Total account is in bank %d\n",k);
        }
        printf("For Logout Enter 0 And Contiune Enter 1\n");
        scanf("%d", &b);
        if (b == 1)
        {
            k++;
            z++;
        }
        if (b == 0)
        {
            k = 0;
        }
    } while (z < k);
    printf("total account no is %d",q);
}
